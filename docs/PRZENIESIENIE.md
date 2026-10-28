# Przeniesienie projektu do Claude Code

Są dwie drogi:
- w chmurze (claude.ai/code): działa z każdego komputera,
- lokalnie (WSL2): darmowa moc obliczeniowa na własnym PC.

## Wariant A: chmura (claude.ai/code)

Plik gry jest w prywatnym repo `brtvvv/gt3-data`, a sesja instaluje się przez
`bash tools/setup_cloud.sh`.

Prompt startowy: ten sam co w kroku 7 niżej, ale punkt 1 zamień na
„Uruchom bash tools/setup_cloud.sh, potem sh tools/verify_all.sh”.
Jeśli klon gt3-data się nie uda, dodaj repo brtvvv/gt3-data do sesji.

## Wariant B: lokalnie na PC

Dlaczego lokalnie, a nie w chmurze: repo nie ma plików gry (`CORE.GT3`),
więc środowisko musi mieć dostęp do twojej płyty. Na twoim PC m2c i permuter
mogą też liczyć na wszystkich rdzeniach za darmo, bez zużywania tokenów.

Rób kroki po kolei. Każdy zakończ dopiero, gdy działa.

## Krok 1: WSL2 z Ubuntu

W PowerShell (jako administrator):

```
wsl --install -d Ubuntu
```

Uruchom ponownie komputer, otwórz „Ubuntu” z menu Start i ustaw login i hasło.

## Krok 2: Pobranie repo

W terminalu Ubuntu:

```
sudo apt-get update && sudo apt-get install -y git gh
cd ~
git clone https://github.com/brtvvv/gt3towin
cd gt3towin
```

## Krok 3: Logowanie do GitHuba (żeby działał push)

```
gh auth login
```

Wybierz: GitHub.com → HTTPS → Login with a web browser.

Potem:

```
gh auth setup-git
```

## Krok 4: Plik CORE.GT3 z płyty

Włóż płytę (albo zamontuj ISO) w Windowsie. Skopiuj `CORE.GT3` np. do `C:\gt3\CORE.GT3`.
W Ubuntu ten plik jest pod `/mnt/c/gt3/CORE.GT3`.

## Krok 5: Instalacja środowiska

```
cd ~/gt3towin
bash tools/setup_local.sh /mnt/c/gt3/CORE.GT3
echo 'export GT3_COMPILERS=$HOME/compilers' >> ~/.bashrc
source ~/.bashrc
```

Sprawdzenie: `sha1sum orig/core_100000.bin` ma dać
`8c69f1d3fec6bc96e6057dc0f0494051cd177ac7`.

Następnie uruchom `sh tools/verify_all.sh`. Wszystko powinno być OK.

## Krok 6: Instalacja Claude Code

```
curl -fsSL https://claude.ai/install.sh | bash
```

Potem w katalogu projektu:

```
cd ~/gt3towin
claude
```

Za pierwszym razem zaloguj się swoim kontem Claude.

## Krok 7: Prompt startowy

Wklej do Claude Code (w chmurze punkt 1 to: bash tools/setup_cloud.sh, potem sh tools/verify_all.sh):

```
Kontynuujemy dekompilację GT3 (gt3towin). Przeczytaj CLAUDE.md, tam są zasady, narzędzia i sprawdzone wzorce kompilatora.

Plan, w tej kolejności:
1. Sprawdź, czy środowisko działa: sh tools/verify_all.sh (krótko podsumuj wynik).
2. Uruchom w tle automat: bash tools/run_local.sh 60 (m2c + permuter na wszystkich rdzeniach). Nie czytaj jego wyjścia na bieżąco.
3. W tym czasie napisz skrypt, który używa tools/sib.py do znajdowania rodzin funkcji identycznych opcode'owo z już dopasowanymi i generuje dla nich kod z szablonu (podmiana adresów i stałych), sprawdza try.py i zapisuje dopasowane. Uruchom go na całej grze.
4. Dopiero potem ręczne partie z work/small.txt (nexta.sh 20), według zasad oszczędzania tokenów z CLAUDE.md.
Co kilkadziesiąt dopasowań: sh tools/status.sh. Odpowiadaj po polsku i zwięźle.
```

## Dalsze sesje

Wystarczy wejść do katalogu i napisać:

```
cd ~/gt3towin && claude
```

Potem napisz: „lecimy dalej z decompem wg CLAUDE.md”.

Automat możesz też puścić sam, bez Claude (nic nie kosztuje):

```
bash tools/run_local.sh 60
```
