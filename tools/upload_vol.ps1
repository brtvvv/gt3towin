# upload_vol.ps1: dzieli GT3.VOL na części po 90 MB i wypycha je do PRYWATNEGO repo gt3-data
# (katalog vol/). Uruchom w folderze gry:  powershell -ExecutionPolicy Bypass -File upload_vol.ps1
# Wymaga gita i dostępu do github.com/brtvvv/gt3-data. Części są wypychane partiami (ok. 720 MB),
# bo GitHub odrzuca zbyt duże pojedyncze pushe. Skrypt można przerwać i uruchomić ponownie:
# pomija części, które już są w repo.
param(
    [string]$Vol = (Join-Path (Get-Location) "GT3.VOL"),
    [string]$Repo = "C:\gt3-data"
)
$ErrorActionPreference = "Stop"
$PartSize = 90MB
$PerPush = 8

if (-not (Test-Path $Vol)) { throw "Brak pliku $Vol" }
if (-not (Test-Path $Repo)) { git clone https://github.com/brtvvv/gt3-data $Repo }
$dir = Join-Path $Repo "vol"
New-Item -ItemType Directory -Force -Path $dir | Out-Null

$len = (Get-Item $Vol).Length
$parts = [math]::Ceiling($len / $PartSize)
Write-Host "GT3.VOL: $len bajtow, czesci: $parts"
Set-Content -Path (Join-Path $dir "SIZE.txt") -Value $len

$in = [IO.File]::OpenRead($Vol)
$buf = New-Object byte[] $PartSize
$pending = 0
try {
    for ($i = 0; $i -lt $parts; $i++) {
        $name = "part_{0:D3}.bin" -f $i
        $path = Join-Path $dir $name
        git -C $Repo ls-files --error-unmatch "vol/$name" 2>$null | Out-Null
        if ($LASTEXITCODE -eq 0) { continue }
        [void]$in.Seek([int64]$i * $PartSize, 0)
        $n = $in.Read($buf, 0, $PartSize)
        $out = [IO.File]::Create($path)
        $out.Write($buf, 0, $n)
        $out.Close()
        git -C $Repo add "vol/$name" "vol/SIZE.txt"
        $pending++
        Write-Host "  $name ($n B)"
        if ($pending -ge $PerPush -or $i -eq $parts - 1) {
            git -C $Repo commit -q -m "vol: czesci do $name"
            git -C $Repo push -q
            if ($LASTEXITCODE -ne 0) { throw "git push nie powiodl sie" }
            Get-ChildItem $dir -Filter "part_*.bin" | Remove-Item
            $pending = 0
        }
    }
} finally {
    $in.Close()
}
Write-Host "Gotowe: GT3.VOL jest w gt3-data/vol/"
