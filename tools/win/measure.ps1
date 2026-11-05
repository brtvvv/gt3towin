# measure.ps1: przebudowuje runtime PS2Recomp z kodem GT3, uruchamia gre na N sekund i wypisuje pomiary.
# Wymaga naniesionej poprawki diagnostycznej gt3_diag.patch (linie [gt3stat] co 60 vblank).
# Uzycie (z dowolnego katalogu):
#   powershell -ExecutionPolicy Bypass -File tools\win\measure.ps1 -Game "C:\sciezka\do\folderu\gry" [-Seconds 60] [-NoBuild]
param(
    [Parameter(Mandatory = $true)][string]$Game,
    [string]$Recomp = "C:\PS2Recomp",
    [int]$Seconds = 60,
    [string]$BuildDir = "out\build\fast",   # np. out\build\dev (PS2X_FAST_LINK=ON: bez /GL i /LTCG, szybki link)
    [switch]$NoBuild
)
$ErrorActionPreference = "Stop"
$Build = Join-Path $Recomp $BuildDir
$Exe = Join-Path $Build "ps2xRuntime\ps2EntryRunner.exe"
$Diag = Join-Path $Recomp "diag"
New-Item -ItemType Directory -Force -Path $Diag | Out-Null

if (-not $NoBuild) {
    $vswhere = Join-Path ${env:ProgramFiles(x86)} "Microsoft Visual Studio\Installer\vswhere.exe"
    $vs = & "$vswhere" -latest -products * -property installationPath
    $vcvars = Join-Path $vs "VC\Auxiliary\Build\vcvars64.bat"
    Write-Host "== build ($Build)"
    $log = Join-Path $Diag "build.txt"
    cmd /c "`"$vcvars`" >nul && cmake --build `"$Build`" --target ps2EntryRunner > `"$log`" 2>&1"
    if ($LASTEXITCODE -ne 0) {
        Write-Host "BUILD FAILED (exit $LASTEXITCODE). Ostatnie linie:"
        Get-Content $log -Tail 30
        exit 1
    }
    Write-Host "build OK"
}

Get-Process ps2EntryRunner -ErrorAction SilentlyContinue | Stop-Process -Force
$out = Join-Path $Diag "run_out.txt"
$err = Join-Path $Diag "run_err.txt"
Write-Host "== run $Seconds s"
$p = Start-Process -FilePath $Exe -ArgumentList "CORE.elf" -WorkingDirectory $Game `
    -RedirectStandardOutput $out -RedirectStandardError $err -PassThru
Start-Sleep -Seconds $Seconds
if (-not $p.HasExited) { Stop-Process -Id $p.Id -Force }
Start-Sleep -Seconds 1

$stats = Select-String -Path $out, $err -Pattern "\[gt3stat\]" | ForEach-Object { $_.Line }
if (-not $stats) {
    Write-Host "Brak linii [gt3stat] - czy gt3_diag.patch jest naniesiony? Ostatnie linie stderr:"
    Get-Content $err -Tail 20
    exit 2
}
function Parse($l) {
    $h = @{}
    foreach ($m in [regex]::Matches($l, "(\w+)=([0-9.]+)")) { $h[$m.Groups[1].Value] = [double]$m.Groups[2].Value }
    return $h
}
$first = Parse $stats[[Math]::Min(2, $stats.Count - 1)]
$last = Parse $stats[-1]
$dt = $last.wall - $first.wall
Write-Host "== wynik (ostatnie 5 linii)"
$stats | Select-Object -Last 5 | ForEach-Object { Write-Host $_ }
if ($dt -gt 0) {
    "{0,-22}{1,8:N1}" -f "vblank/s:", (($last.vsync - $first.vsync) / $dt)
    "{0,-22}{1,8:N2}" -f "DMA VIF1 konce/s:", (($last.dmac1 - $first.dmac1) / $dt)
    "{0,-22}{1,8:N2}" -f "DMA GIF przerwania/s:", (($last.dmac2 - $first.dmac2) / $dt)
}
Write-Host "Pelne logi: $out , $err"
