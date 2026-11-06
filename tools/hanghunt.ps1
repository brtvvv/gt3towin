param([int]$Runs = 4)
# Uruchamia gre kilka razy; gdy log [gt3stat] stoi >12 s przed 85 s, robi zrzut pamieci procesu (comsvcs MiniDump).
$s = "C:\Users\brtvvv\AppData\Local\Temp\claude\51588c74b8ac9fea\891d2876-9a80-4694-b34f-275f11ae0685\scratchpad"
$game = "C:\Users\brtvvv\Downloads\Gran Turismo 3 - A-Spec (Europe, Australia) (En,Fr,De,Es,It) (v2.00)"
$exe = "C:\PS2Recomp\out\build\dev\ps2xRuntime\ps2EntryRunner.exe"
$env:GT3_AUTOPAD = "12:4000:0.3,16:4000:0.3,19:4000:0.3,22:4000:0.3,25:4000:0.3,28:4000:0.3,31:4000:0.3,34:4000:0.3,37:4000:0.3,40:4000:0.3,43:4000:0.3,46:4000:44"
for ($i = 1; $i -le $Runs; $i++) {
    $o = "$s\r_hh$i"; New-Item -ItemType Directory -Force $o | Out-Null
    Get-Process ps2EntryRunner -ErrorAction SilentlyContinue | Stop-Process -Force
    $p = Start-Process -FilePath $exe -ArgumentList "CORE.elf" -WorkingDirectory $game -PassThru -RedirectStandardOutput "$o\o.txt" -RedirectStandardError "$o\e.txt"
    $t0 = Get-Date; $lastLen = 0; $lastChange = Get-Date; $hung = $false
    while (((Get-Date) - $t0).TotalSeconds -lt 88) {
        Start-Sleep 2
        if ($p.HasExited) { "run $i : proces zakonczyl sie po $([int]((Get-Date)-$t0).TotalSeconds) s"; break }
        $len = (Get-Item "$o\e.txt").Length
        if ($len -ne $lastLen) { $lastLen = $len; $lastChange = Get-Date }
        elseif (((Get-Date) - $lastChange).TotalSeconds -gt 12) { $hung = $true; break }
    }
    if ($hung) {
        "run $i : ZAWIESZENIE po $([int]((Get-Date)-$t0).TotalSeconds) s - zrzut"
        & rundll32.exe C:\Windows\System32\comsvcs.dll, MiniDump $p.Id "$o\hang.dmp" full
        Start-Sleep 8
        Stop-Process -Id $p.Id -Force -ErrorAction SilentlyContinue
        break
    }
    Stop-Process -Id $p.Id -Force -ErrorAction SilentlyContinue
    "run $i : ok"
}
