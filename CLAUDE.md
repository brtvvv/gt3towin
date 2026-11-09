# CLAUDE.md: instrukcje dla Claude Code (gt3towin)

Projekt: dekompilacja Gran Turismo 3 A-Spec (PS2, PAL v2.00, SCES_502.94) do C/C++,
który kompiluje się bajt w bajt do oryginału. Cel to natywny port na PC, później PSP.
Właściciel: Bartosz (GitHub `brtvvv`).

**Pisz do użytkownika po polsku.**
Instrukcje dla niego podawaj krok po kroku, jedną rzecz naraz.

## Twarde zasady

- Repo jest PUBLICZNE. Nigdy nie commituj plików gry ani nic, co z nich wygenerowano:
  `orig/`, `asm/`, `build/`, `*.bin`, `*.GT3`, `*.iso`.
  Commitujemy tylko własny kod (`src/`), narzędzia (`tools/`) i listy nazw funkcji (`work/`).
- Commit i push robi `sh tools/status.sh`: aktualizuje STATUS.md, commituje `src/*` i pushuje.
  Uruchamiaj go co kilkadziesiąt dopasowań.
- Nie zgaduj w nieskończoność. Na funkcję daj maksymalnie 2–3 próby,
  potem dopisz ją do `work/skip.txt` i idź dalej.

## Środowisko

- W chmurze (claude.ai/code) najpierw uruchom `bash tools/setup_cloud.sh`.
  Pobiera plik gry z PRYWATNEGO repo brtvvv/gt3-data; jeśli klon się nie uda,
  dodaj to repo do sesji.
- Lokalnie (WSL2): `bash tools/setup_local.sh /mnt/c/.../CORE.GT3`.
- Kompilator jest w `$GT3_COMPILERS` (domyślnie `~/compilers`).
- Nigdy nie kopiuj niczego z gt3-data do tego publicznego repo.

## Oszczędzanie tokenów (najważniejsze)

Ręczne dopasowywanie kosztuje ok. 2 tys. tokenów na funkcję. Zostało ok. 4 tys. funkcji.
Kolejność pracy:

1. **Najpierw automaty, które nie zużywają tokenów.**
   `bash tools/run_local.sh 60` puszcza m2c na wszystkich rdzeniach, ocenia szkice
   i odpala decomp-permuter na bliskich trafieniach.
   Uruchamiaj w tle (`run_in_background`) i nie czytaj jego wyjścia na bieżąco.
   Wynik sprawdzaj przez `sh tools/status.sh` albo liczniki plików.
2. **Rodziny funkcji.** `tools/sib.py` szuka funkcji o identycznych opcode'ach
   jak już dopasowane. Takie funkcje generuj skryptem z szablonu (podmiana adresów
   i stałych) zamiast pisać je ręcznie.
3. **Dopiero potem ręcznie.** Pobieraj partie: `sh tools/nexta.sh 20 | grep -v '^nop$'`.
   Pisz wszystkie szkice partii naraz (heredoki do katalogu roboczego),
   potem jedno `python3 tools/wf.py <katalog>/*.c*`.
   Przy nietrafionych `python3 tools/dd.py <plik>` pokazuje różnicę opcode'ów.
   Linie `+` to oryginał, `-` to twoja wersja.
4. Nie wypisuj pełnego asemblera bez potrzeby, nie streszczaj wyników,
   nie powtarzaj kodu w odpowiedziach.

## Narzędzia

| Polecenie | Co robi |
|---|---|
| `sh tools/nexta.sh N [lista]` | kolejne N niedopasowanych funkcji z listy (domyślnie `work/small.txt`), sam asm |
| `sh tools/w.sh func_X cpp 'kod'` | kompiluje, porównuje, przy MATCH zapisuje do `src/manual/` |
| `python3 tools/wf.py plik...` | to samo, ale kod z pliku (nazwa pliku = nazwa funkcji; można `#define`, `// @flags`) |
| `python3 tools/dd.py plik` | diff opcode'ów twoja wersja vs oryginał |
| `python3 tools/try.py plik` | sprawdza wszystkie funkcje w pliku |
| `python3 tools/funcasm.py func_X` | asm jednej funkcji |
| `python3 tools/sib.py` | funkcje-rodzeństwo o identycznych opcode'ach |
| `python3 tools/ginit2.py` | generator statycznych inicjalizatorów (`_GLOBAL_$I$`) |
| `python3 tools/mkwrap.py`, `libmatch.py` | dopasowania funkcji bibliotecznych (newlib) |
| `sh tools/status.sh` | STATUS.md + commit + push |

Listy robocze są w `work/`:
- `small.txt`: niedopasowane funkcje ≤40 instrukcji, posortowane po rozmiarze,
- `skip.txt`: pominięte,
- `fastmath.txt`: funkcje z `min.s`/`max.s`,
- `close/`: szkice bardzo bliskie dopasowania.

## Kompilator i wzorce (sprawdzone)

- ee-gcc 2.9-ee-991111-01, flagi `-O2 -G8`. Kod gry to C++, funkcje piszemy jako `extern "C"`.
  Kod jest pod 0x100000.
- **Sibcall** (`j func` na końcu) wychodzi tylko z pliku `.c`.
  W `.cpp` wywołanie kończące funkcję to `jal` + epilog.
  Typ zwracany przez wywoływaną funkcję (int/void) zmienia wybór v0/v1.
- **Stałe `unsigned`** (`0xFFFFFFFDu`, `0xFFFFFFFFu`) dają `lui/ori` zamiast `li -3`/`li -1`.
- **Zmienne w `.sdata`** (adres przez `$gp`): `extern int X;`.
  Jeśli oryginał używa `lui/%lo`, zadeklaruj jako tablicę: `extern int X[];` i użyj `X[0]`.
- **Scratchpad (0x70003000)** wymaga makra-bariery przypisanego do zmiennej lokalnej:
  `#define SPR ({ char *_s = (char *)0x70003000; __asm__("" : "+r"(_s)); _s; })`
- **volatile** na zmiennej globalnej blokuje wypełnienie delay slotu (zakończenie `jr ra; nop`).
- `-ffast-math` (przez `// @flags -ffast-math` w pliku) daje `min.s`/`max.s` i `sqrt.s`.
  Uwaga: oryginalne `sqrt.s`/`rsqrt.s` mają inne kodowanie niż nasz gas, więc te funkcje pomijamy.
- **Wywołania wirtualne (gcc2):** wpis vtable ma 8 bajtów (`short delta`, wskaźnik funkcji).
  Indeks metody = (offset w vtable − 8) / 8.
  vptr leży ZA danymi klasy, która wprowadza wirtualne metody:
  `struct B0 { char p[0x1C]; virtual void f0(); ... };` daje vptr na 0x1C.
  Liczbę dummy metod generuj w powłoce: `$(for i in $(seq 0 N); do printf 'virtual void f%d(); ' $i; done)`.
  Gdy w instrukcjach wywołania używany jest a1, metoda jest bez argumentów i zwraca int.
- **Zwrot struktury przez ukryty wskaźnik:** struktura >8 bajtów z konstruktorem,
  `return R(a, b);`. Struktura 8-bajtowa zbudowana na stosie: `return *(long *)&p;`.
- **Placement new:** `inline void *operator new(size_t, void *p) throw() { return p; }`
  (`throw()` daje sprawdzenie null).
- **Przekazywanie argumentów:** nietknięte rejestry a0–a3/t0–t3 oznaczają, że funkcja
  przekazuje argumenty dalej. Zadeklaruj je i przekaż jawnie.
- **Pętle:** licznik z wskaźnikiem i `slt` na końcu to zwykle `for (i=0;i<N;i++) s->e[i]...`.
  Wersja wskaźnikowa (`for (E *e=...; e<end; e++)`) daje `sltu`/sprawdzenie na wejściu.
  Wczytanie n raz przed pętlą: `int n = s->n;`.
  `p += stride` na wskaźniku: `E *e = s->e; for (...; e++)`.
- **Indeks z dużym offsetem:** jeśli oryginał robi `(s + i*size) + off`, napisz
  `char *q = (char *)s + i * size; E *e = (E *)(q + off);`.
- **Kolejność gałęzi:** `bnel`/`beql` oraz układ return zależą od tego, czy warunek
  jest zapisany pozytywnie czy negatywnie. Przy różnicy w gałęziach odwróć `if`.
  Pomaga też `int r = ...; if (...) r = ...; return r;`.
- `movn`/`movz`: `int k = 1; if (!f) k = 0x100;` vs `int k = 0x100; if (f) k = 1;` dają różne warianty.
- Kolejność porównania ma znaczenie (`x == r` vs `r == x` to `beql v0,v1` vs `beql v1,v0`).
- **64-bit:** `long` ma 64 bity. `(r >> n) & m` na long daje `dsll32/dsra32`.
  `(unsigned long)(unsigned)x * K` daje `multu` z łączeniem hi:lo.
- **Varargs:** `#include "../lib/ginclude/stdarg.h"`, potem `va_start` i wywołanie wersji v-.
  Przy próbach przez `wf.py` (plik w /tmp) podaj ścieżkę absolutną,
  a po MATCH zamień ją na względną w `src/manual/`.
- **Biblioteki:** newlib (`src/lib/`): mprec.c, strtol, vfprintf (`-DINTEGER_ONLY`, `vfprintf-ee.c`).
  vfscanf się nie zgadza (pominięte).
- **Nie do zrobienia tą metodą** (od razu do skip):
  ręczne instrukcje (`ei`, `syscall`, `sync.p`), wstawki VU0 (`vmula`, `qmtc2`),
  tablice skoków bez danych, funkcje z `lw` w delay slocie `jal`.

## Stan

Około 7740 z ~11 700 funkcji (66%), około 28% instrukcji.
Szczegóły są w STATUS.md (aktualizuje go `tools/status.sh`).

## GT3 PC: AKTUALNY STAN I NASTĘPNE ZADANIA (czytaj najpierw)

Stan (2026-11-09): menu, Arcade, **GT Mode: salon, zakup auta, zapis/odczyt postępu, wyścigi (Sunday Cup) i testy licencji**,
wyścig ~60 kl./s w jeździe (przelot kamery ~40–46). Szczegóły i historia: sekcje niżej.

Narzędzia sesyjne są w prywatnym **`C:\gt3-data\recomp\tools`** (nie w scratchpadzie): `build.ps1` (przebudowa
out\build\dev), `run.ps1 -Name X -Pad "..." -At "s1,s2" [-Env "K=V;K2=V2"]` (autopad + zrzuty okna do
`C:\gt3-data\runs\X`, `e.txt` = stderr), `race.ps1`, `save.ps1 -Msg` (gt3.patch + gt3_diag.patch, commit+push gt3-data),
`eedis.py od do` (deasemblacja; Python: `C:\Users\brtvvv\AppData\Local\Programs\Python\Python313\python.exe`),
`calls.py adr` (kto robi `jal adr`), `xref.py adr` (lui/addiu do adresu), `hanghunt.ps1`, `crash.py`, `sym.py`.
Diagnostyka w runtime: `GT3_TRACEFN=adr,adr` (log a0–a3/ra i v0 funkcji, maks. 8, 40 wywołań),
`GT3_RPCLOG=<sid hex | 0 = wszystkie>` (bind + wywołania SIF RPC), `GT3_MCLOG=1` (HLE MCSERV na IOP),
`GT3_TRACEN=N` (limit wywołań), `GT3_TRACEDUMP=1` (32 B spod a1 po powrocie; napis spod a0 wypisywany zawsze),
`GT3_MEMDUMP=adr:dl:sek[:plik]` (zrzut RDRAM w sekundzie zegara gry, ~4 s mniej niż czas skryptu),
`GT3_EVLOG=<vsync>` (zdarzenia GS jednej klatki: DRAW z FRAME/TEX0/ALPHA, XFER), `GT3_GIFSRCLOG=1` (duże pakiety GIF).
Uwaga: `GT3_TRACEFN` łapie wywołania przez tablicę funkcji; funkcje nie-liście mogą „wrócić” w połowie (pc≠ra).
Kody pada (`GT3_AUTOPAD` maska): Góra 0010, Prawo 0020, Dół 0040, Lewo 0080, Krzyżyk 4000, Start 0008.
GT Mode (z zapisem): mapa ~16 s; z My Home Góra → Car Dealer; X → JPN → Daihatsu → Cuore (11 140 Cr).

Następne zadania (kolejność wg wpływu na grywalność):
1. GT Mode dalej: licencja, wyścig, zakup auta, zapis po postępie → wczytanie (czy stan się zgadza).
1a. **ROZWIĄZANE (2026-11-09): zawieszenia wyścigów GT Mode i testów licencji** (~2 s po starcie, obraz stał).
   Przyczyna: w HLE sysclib IOP setjmp/longjmp były atrapami. LIBPDI (strumień muzyki PBGM) przy zatrzymaniu
   utworu wychodzi longjmp-em z pętli kopiującej FIFO; bez tego wątek kopiujący (prio 23) kręcił się bez końca
   i zagładzał handler RPC PBGM (prio 24) → komenda PBGM fn3 nie wracała. Zdarza się przy przełączeniu muzyki
   (stop + start krótkiego, niezapętlonego utworu przed wyścigiem GT / testem). Teraz prawdziwe setjmp/longjmp
   (jmp_buf: ra, sp, fp, s0–s7, gp; iop_sysclib.cpp, GT3_IOP_FAKE_SETJMP=1 = stara atrapa). Sunday Cup
   (Super Speedway, Cuore) i test B-1 jadą, Arcade bez zmian.
   Przy okazji: RPC NOWAIT dokańczane w tle zamiast synchronicznie do ~22 s (GT3_NOWAIT_SYNC=1 = stare),
   iWakeupThread na bieżącym wątku zwiększa licznik (GT3_WAKEUP_SELF_STRICT=1 = stare).
   Diagnostyka IOP: GT3_IOPTHR=1 (co 0,25 s: czas wątków IOP + co 1 s stan wszystkich wątków [iop-thr]),
   GT3_CDLOG=1 (sceCdRead i nieobsłużone funkcje cdvdman), GT3_IRQSTAT=1, GT3_RPCLOG=sid|0 (ra + 32 B danych).
   Metoda: stan wątków IOP przed/po zdarzeniu + deasemblacja IRX (	ools/irxdis.py plik.irx baza od do; skoki jal
   w IRX są względne do bazy modułu; tablica importów: nagłówek 0x41E00000 + nazwa biblioteki, potem pary jr ra;
   addiu zero,zero,N = funkcja N, np. thsemap 6 Signal/8 WaitSema, thbase 0x18 SleepThread, sysclib 4/5 setjmp/longjmp).
   Sekwencje (z zapisem z Cuore): Sunday Cup 9:0040,11:4000,17:0080,19:4000,24:4000,28:4000,31:0020,33:4000,37:0020,
   39:4000,43:4000,47:4000,51:4000,55:4000,59:4000:60 (start ~56 s); licencja B-1: patrz wyżej (Góra, Lewo z mapy).
   W GT3 Trójkąt (0x1000) = wstecz.
2. (zrobione) Poprawka ZTE naprawiła też wybór koloru w Arcade (model 3D auta) i tło Mid-Field w menu trasy.
   Arcade z zapisem: `9:4000,13:4000,17:4000` → wybór trasy ~20 s (Prawo = następna trasa), dalej X → klasa → auto/kolor.

**ROZWIĄZANE (2026-11-09): śmieci na ekranie auta w salonie / po zakupie.** Przyczyna: backend GS ignorował
TEST.ZTE — przy ZTE=0 stosował ZTST (=0 NEVER) i odrzucał wszystkie piksele. GT3 kopiuje scenę salonu (fbp 0x165)
sprite'ami z TEST=0 do bufora poświaty 0x115 i dalej na ekran; kopia nic nie zapisywała, zostawała stara zawartość
VRAM (tekstury T4 czytane jako CT32). Teraz ZTE=0 = test Z wyłączony (`gsEffectiveZtst`, gs_cpu_backend.cpp;
`PS2X_GS_ZTE_IGNORE=1` = stare). Model auta w salonie i ekran „purchase complete” poprawne, wyścig bez zmian.
Metoda, która zadziałała: `GT3_EVLOG` (lista rysowań klatki z TEST) + `GT3_TEXDUMP=tbp:tbp` (zrzut bufora/tekstury
w chwili pierwszego rysowania, które go czyta, do `C:/gt3-data/runs/tex_<tbp>_N.ppm`) — porównanie źródła i wyniku
kopii wskazało przebieg, który nic nie zapisuje. `GT3_EVVTX=1` dodaje wierzchołki sprite'ów.
3. Wątek GIF (przelot kamery 60 kl./s) — przestój ~4 s przed wyścigiem, do zbadania (zrzut wątków EE).
4. Dźwięk (SPU2), filmy (IPU/FFmpeg), XInput, pełny ekran, 16:9.

**Do przetestowania ręcznie (zbiorczo):** (0) **DŹWIĘK** (nowe, 2026-11-09): uruchomić grę i posłuchać menu (muzyka
GT Mode), dźwięków kursora i wyścigu (muzyka + silnik). Albo odsłuchać nagrania `C:\gt3-data\runs\gt3_menu_spu2.wav`
(muzyka od ~13 s) i `gt3_race_spu2.wav` (wyścig od ~38 s). Zgłosić: szum zamiast muzyki? zła wysokość/tempo?
trzaski? Wyłączenie dźwięku: `PS2X_SPU2_MUTE=1`, cała emulacja SPU2 off: `PS2X_SPU2_OFF=1`.
(a) zapis: GT Mode → My Home → Save Game → slot 1 → OK (strzałka w lewo,
X); po restarcie gry sprawdzić, czy kredyty/auta się zgadzają. (b) Klawiatura bez `GT3_AUTOPAD` (X/Spacja = Krzyżyk,
Enter = Start, strzałki). (c) Wyścig Arcade do mety, płynność, brak zawieszeń. Starsze punkty — sekcje niżej.

**Okno (2026-11-09):** domyślnie 960×720, obraz 4:3 na całe okno, panel debugera ukryty (F1 pokazuje;
`PS2X_DEBUG_PANEL=1` od startu). **F11** = pełny ekran (okno bez ramki), **F10** = proporcje 4:3 → 16:9 → rozciągnięte
→ natywne (stare). `PS2X_WINDOW=1280x960`, `PS2X_ASPECT=43|169|stretch|native`. 16:9 ma sens z opcją
panoramiczną w ustawieniach gry (obraz anamorficzny).

**Dźwięk — SPU2 (2026-11-09, kamień 3, wersja 1):** nowy moduł `ps2xIOP/src/emulator/core/spu2.{h,cpp}` (nowe pliki:
przed `save.ps1` musi być `git add -N` w PS2Recomp, inaczej nie wejdą do gt3.patch). IopMemory kieruje rejestry
0x1F900000–0x1F9007FF do Spu2 (16-bit, efekty KON/KOFF/zapis portu danych), DMA kanałów 4/7 kopiuje dane RAM IOP ↔
pamięć SPU (TSA rdzenia), AutoDMA (ADMAS) → kolejka PCM. Pętla IOP (`serviceSpu2`, iop_emulator.cpp) taktuje próbkę
co 768 cykli i zgłasza IRQ 9 z SPDIF_IRQINFO przy trafieniu IRQA (zastępuje dawne przybliżenie `serviceSpu2Irq`).
Miksowanie wg PCSX2: MMIX (0x800/0x400 głosy, 0x80/0x40 wejście PCM×BVOL, 0x8/0x4 wyjście rdzenia 0×AVOL do rdzenia 1),
MVOL. Brak: pogłosu (efekty), PMON, interpolacji gaussowskiej (liniowa), dokładnych przejść głośności (sweep = od razu
wartość docelowa). Wyjście: raylib AudioStream 48 kHz (callback, `ps2xSpu2Pull`), bufor maks. 4096 ramek
(`PS2X_SPU2_LATENCY`). Diagnostyka: `PS2X_SPU2_LOG=1` (co sekundę KON/aktywne głosy/DMA/IRQ/RMS),
`PS2X_SPU2_VLOG=1` (stan głosów), `PS2X_SPU2_DMALOG=1`, `PS2X_SPU2_RAW=plik.raw` (s16 stereo 48 kHz;
`tools/raw2wav.py`, `tools/spec.py raw t0 t1 png` = spektrogram w dB), `PS2X_SPU2_SOLO=rdzeń:maska_hex`.
Ustalenia GT3: menu GT Mode = muzyka sekwencerowa (~70 KON/s, rdzeń 0); wyścig: strumień muzyki ADPCM 44,1 kHz
na głosach 22/23 rdzenia 1 (bufory 0xEC000/0xFC000, DMA kanałem 4 po 1 KB, ~49 IRQ/s), efekty/silnik na pozostałych
głosach obu rdzeni (24/24 aktywne). Tempo wyścigu bez zmian (60 kl./s w jeździe).

Karta pamięci (2026-11-09): libmc gry (0x274040.. sceMcInit/Open/Read/Write/GetInfo/Sync…) jest podmieniony
przez rekompilator na stuby HLE `ps2_stubs::sceMc*` (Kernel/Stubs/MemoryCard.cpp, pliki w `<folder gry>/mc0`, `mc1`).
Moduły MCMAN/MCSERV z płyty ładują się na IOP, ale gra ich nie używa. Błąd: HLE GetInfo zawsze zwracało 0
(„ta sama karta”); gra (0x23F5B8) pyta o format/wolne miejsce tylko po −1 („nowa karta”), więc karta wyglądała na
niesformatowaną („Format Memory Card and save”). Teraz pierwsze GetInfo na port zwraca −1 (`PS2X_MC_NOCHANGED=1` = stare).
Zapis: `mc0/BESCES-50294GAMEDATA/` (dane 70 464 B, icon.sys, icon0.ico, thumbnail). Z zapisem gra przy starcie
sama go wczytuje i **pomija wybór języka** (menu trybu po ~8 s) — sekwencje pada dla „czystej karty” wtedy nie pasują
(czystą kartę daje usunięcie/zmiana nazwy `mc0`). GT Mode z zapisem: `9:0040:0.3,11:4000:0.3` → mapa ok. 16 s.
Wątek pod 0x266800 kręci się w nieskończoność na bindzie RPC `PJOY` (0x594F4A50, pewnie kierownica USB) — nieszkodliwe.

## Rekompilacja statyczna (PS2Recomp)

- Narzędzie: github.com/ran-j/PS2Recomp. Build samego rekompilatora:
  `cmake -S . -B out/build -DCMAKE_BUILD_TYPE=Release -DPS2X_BUILD_RUNTIME=OFF -DPS2X_BUILD_ANALYZER=OFF -DPS2X_BUILD_TEST=OFF -DPS2X_BUILD_STUDIO=OFF && cmake --build out/build`.
- U nas: `sh tools/mkelf.sh` (ELF + mapa funkcji z asm/0.s, z wejściem 0x100008),
  potem `<PS2Recomp>/out/build/ps2xRecomp/ps2_recomp tools/gt3_recomp.toml` → `build/recomp/`.
- Wynik testu (2026-11-03): 11 433 funkcje przetłumaczone, 0 błędów,
  0 nieobsłużonych instrukcji, 1614 skoków pośrednich (vtable) obsłużonych przez fallback.
  300 losowych plików przechodzi kompilację (`-fsyntax-only`, includy:
  ps2xRuntime/include, ps2xIOP/include, ps2xRuntime/src/lib, ps2xRuntime/src/lib/Kernel;
  pusty `ps2_recompiled_stubs.h`).
- `build/recomp/` to kod wygenerowany z gry: NIGDY do repo.
- Następny etap: zbudować ps2xRuntime z wygenerowanym kodem (runner) i uruchomić.
  Potrzebne moduły IOP (`*.IRX`) z płyty.

### Diagnoza „<1 FPS” (2026-11-04)

- Na PC: Release + `-DPS2X_ENABLE_AGRESSIVE_LOGS=OFF -DPS2X_ENABLE_RUNTIME_LOGS=OFF -DPS2X_ENABLE_IOP_RPC_TRACE=OFF`
  (domyślnie logi są włączone i loguje każde wywołanie funkcji). Proces zużywa ~3% CPU, czyli czeka, nie liczy.
- Kopia w chmurze: `/home/claude/ps2recomp` z `gt3.patch` (jest w prywatnym gt3-data/recomp),
  build `out/rt` (Linux: `-march=native`, nagłówki `ps2_recompiled_*.h` przenieść do `ps2xRuntime/include`),
  dane płyty złożone w `/home/claude/gt3run` (GT3.VOL z gt3-data/vol/part_*), uruchamianie pod Xvfb.
- Pomiar: zegar gry idzie pełne 60 Hz (licznik 0x4A8380 = liczba vblank), wątek główny budzi się co vblank.
  Prawie cały czas w pętli 0x1CCC38 (ekran tytułowy: czeka na przycisk, odlicza do dema),
  a obraz (DMA VIF1) aktualizuje się raz na ~2 s. Hipoteza: to w dużej części statyczny ekran tytułowy,
  nie spowolnienie. Do sprawdzenia: czy Enter (= Start) przechodzi dalej; szary pas to pewnie
  nieprawidłowo rysowany napis „Press Start”.
- Obsługa przerwania DMA w grze: 0x25B738 (wznawia łańcuch GIF przez CHCR.STR, odblokowuje VIF1 przez FBRST.STC).

### Naprawa (2026-11-05): VIF1 0,5/s → 21/s (poprawki w gt3-data/recomp/gt3.patch)

- Przyczyna „klatki co 2 s”: klatka liczyła się w ~20 ms, potem gra czekała dokładnie 120 vblanków (timeout).
  Gra synchronizuje VIF1 (PATH2) i GIF (PATH3) semaforami w 0x4A8380 (+0x16/+0x17/+0x18):
  VIFcode z bitem I (np. `0x91010000` FLUSH, flagi w polu NUM: bit16/17/18) → przerwanie INTC VIF1
  (handler 0x25B5C0 czyta VIF1_STAT.INT i VIF1_CODE), tag GIF z IRQ i bitami 16/17 → handler DMA 0x25B738.
  GS FINISH: handler INTC 0 = 0x25B6D8 (+0x15). Odczyt GS→EE przez VIF1 (DIR=0) w 0x25B950/0x25B9C8.
- Co było źle w runtime (wszystko potrzebne razem):
  1. Brak zatrzymania VIF1 na bicie I i brak INTC 5 (teraz: stall, reszta danych czeka na FBRST.STC,
     koniec DMA VIF1 odroczony). Bez tego nadal 0,5/s (`GT3_NO_VIFSTALL=1` wyłącza).
  2. Odczyt VIF1_STAT/CODE/MARK zwracał ostatni zapis CPU zamiast stanu interpretera.
  3. **UNPACK przy STCYCL CL=0, WL>0** (gra używa `0x0400`): interpreter wymuszał CL=1 i czytał dane,
     których nie ma → rozjazd strumienia VIF (śmieciowe VIFcode'y, np. float −1.0 jako komenda).
     Teraz to czyste wypełnianie z ROW/COL bez danych. Możliwy wpływ też na błędy grafiki.
  4. Łańcuch DMA, który nie przesłał danych (tag QWC=0 z IRQ), nie zgłaszał końca.
  5. VIF1 DIR=0 (GS→EE) obsłużony przez `consumeLocalToHostBytes` (na ekranie tytułowym nieużywany).
- Teraz klatka renderuje się co vblank, ale host nie nadąża: ~21 vblank/s czasu rzeczywistego (CPU-bound).
- Szybkie iteracje: build `out\build\dev` z `-DPS2X_FAST_LINK=ON` (bez /GL i /LTCG; opcja dodana
  w ReleaseMode.cmake). Pełna kompilacja raz ~45 min, potem przebudowa+link ~1 min.
  Build `fast` z LTCG linkuje się >40 min. `measure.ps1 -BuildDir out\build\dev`.
- Zmiany w nagłówkach runtime (ps2_memory.h, ps2_runtime.h) przebudowują wszystkie 11 tys. plików
  gry — stan dodatkowy trzymać w zmiennych globalnych w .cpp.
- Ekran po starcie to **SELECT LANGUAGE** (animowany). Pad działa: funkcje libpad gry są już stubami
  runtime (0x272DC8 Init, 0x273028 PortOpen, 0x273378 Read, 0x2733F8 GetState, 0x2737D8 InfoMode,
  0x273910 SetMainMode, 0x273510 GetReqState…); sterownik pada gry: wątek 0x2303A8.
  Syntetyczne klawisze (keybd_event) nie docierają do raylib, więc do testów jest
  `GT3_AUTOPAD="sek:maska:czas,..."` (np. `15:0040:0.4,20:4000:0.4` = Dół, potem Krzyżyk).
  Dół przesuwa kursor; Krzyżyk uruchamia wątki EE 0x25FF90/0x260760, po czym emulacja staje:
  `[IOP] RPC handler on server thread did not finish`, wątek IOP 26 (entry 0x75ADC, pc 0x77928).
  **Następny problem do zbadania: IOP RPC po wyborze języka** (oraz wydajność: ~21 kl./s).

### Po wyborze języka: film intro (2026-11-05, poprawki w gt3-data/recomp/gt3.patch)

- Po Krzyżyku gra odtwarza film: moduły IOP z płyty LIBPDI (0x69E00), PDICDVD (0x6C600), PDISPU2 (0x6DB00),
  PDISTR (0x71C00). Łańcuch: wątek IOP 69 czyta CD (MPEG-2 PS z GT3.VOL, LSN ~185178) → FIFO 0x74CC0 →
  wątek 70 (demux) → wideo FIFO 0x74FD8 (EE czyta przez RPC `MPG1` fn 2, wątek EE 10) i audio FIFO 0x74F50
  → wątek 71 (nagłówek `SShd`/`SSbd`, PCM 44,1 kHz) → FIFO 0x74E08 → wątek 72 → DMA SPU2 do 0x1D8000/0x1F8000
  → głosy 22/23 rdzenia 1, odświeżanie przez IRQ SPU2 (IRQA w 4 częściach po 0x200 B).
- Naprawione:
  1. **Interpreter IOP: `lwl`/`lwr` ignorowały ładowanie w toku** (load delay). `memcpy` z LIBPDI robi
     `lwr t4; lwl t4` pod rząd → przesunięte bajty (śmieciowy nagłówek audio). Teraz łączą się z pendingLoad.
  2. **RPC blokujące wykonywało się synchronicznie i wstrzymywało całe EE**, gdy handler IOP czekał na dane
     (np. `MPG1` fn 2 czeka na FIFO). Teraz: krótki budżet (~28 ms IOP), potem handler zostaje na wątku IOP,
     a wątek EE czeka przez `waitExternal`; koniec → `ExternalWake`. Wyłączenie: `GT3_NO_ASYNCRPC=1`.
  3. **Brak IRQ SPU2 (IRQ 9)**: emulator nie odtwarza głosów. Przybliżenie: co 512 próbek (48 kHz) dla rdzenia
     z ATTR bit 6 i ustawionym IRQA ustaw NAX głosów = IRQA, `SPDIF_IRQINFO` (0x1F9007C2) = bit rdzenia,
     wyślij IRQ 9. Callback PDISPU2 (0x6DE04) czyta NAX i przestawia IRQA. `GT3_NO_SPUIRQ=1` wyłącza.
- Stan: po Krzyżyku film startuje, Start (pominięcie) wysyła `MPG2` fn 3 i audio płynie, ale ekran jest czarny,
  a wątek EE 11 (0x260760) kręci się na IPU (komendy FDEC, 0x265400/0x265358): **IPU nie jest emulowane**
  (rejestry 0x10002000.. to atrapy). Następny krok: emulacja IPU albo HLE libmpeg (stuby w Kernel/Stubs/MPEG.cpp)
  albo pominięcie filmu.
- **Pomijanie filmów** (ps2_runtime.cpp, tylko GT3 PAL, `GT3_PLAY_MOVIES=1` wyłącza): obiekt odtwarzacza
  (libmpeg Sony wlinkowany statycznie, tworzenie 0x2604F8): `play` 0x25FD38 → 0, komendy 0x25FAD8
  (a1 = op; op 3 → 0, op 4 → 4 „zamknięty”), „czy gra” 0x25FDF0 (flaga gp−0x48BC) → 0.
  Pętle gry: 0x1CE310 (start), 0x1CE438 (stop: op 3, potem op 4 aż 1/4, potem aż 4).
  Ekran tytułowy (pętla 0x1CCC38) ma film w tle → po pominięciu czarny, czeka na Start.
  Po Krzyżyku (język) i Starcie gra idzie dalej: czarny ekran z białym kwadracikiem, wątek główny
  liczy (przeszukiwanie tablic 0x23EC30), ~6 vblank/s. **Następny krok: co rysuje/ładuje ten etap
  i dlaczego tak wolno (menu główne?).**
- **Błąd rekompilatora: `FPU_CVT_W_S` używało `nearbyintf`** (zaokrąglenie), a R5900 `cvt.w.s` zawsze obcina
  w stronę zera (+ nasycenie). Skutek w GT3: losowanie aut demo `(int)(rand*N)` dawało indeks N → lista aut
  wypełniona 0x16AD → brak rekordu w bazie (tabela 31) → silnik 0 → `sound/engine/00000` nie istnieje →
  wieczne ponawianie ładowania (0x242CF8/0x241BF8 zwraca −1). Poprawka w `ps2_runtime_macros.h` (pełna
  przebudowa ~45 min). **Teraz: ekran tytułowy → demo wyścigu (grafika: tekstury-śmieci) → menu główne
  „Arcade Mode” (logo GT3, Polyphony).** Następne: nawigacja po menu (pad), grafika wyścigu, wydajność.
- **Nawigacja po menu działa** (2026-11-05): `GT3_AUTOPAD="15:4000:0.4,23:0040:0.3,27:4000:0.3"` =
  język (Krzyżyk) → menu trybu ok. 22 s (Arcade/Gran Turismo Mode/Replay Theatre) → Dół → Krzyżyk →
  mapa trybu GT (My Home, Go Race, Car Dealer…, „1 day 18,000 Cr”) ok. 30 s. Grafika menu poprawna.
  Bez wciśnięcia gra po chwili odpala demo wyścigu (grafika zepsuta: zielono-czerwone pasy) i wraca do menu.
  **Następne: grafika wyścigu (kamień 5) i wydajność (menu ~?, wyścig wolny).**
- **Wyścig (demo) — grafika stoi** (kamień 5): po wejściu w wyścig licznik końców DMA VIF1 przestaje rosnąć,
  na ekranie zostaje stary bufor (zielono-czerwone kafle). Wyświetlanie: tylko CRT2, DISPFB2 FBP 0/0xA0 PSMCT24,
  rysowanie FRAME fbp0 PSMCT24, ZBUF 417 PSMZ24 — konfiguracja sensowna. Przyczyna: VIF1 staje na bicie I.
  Znalezione i poprawione błędy interpretera VIF1: (a) komenda, której dane nie mieszczą się w porcji DMA,
  była porzucana → teraz `g_vif1Carry`; (b) DIRECT z pakietem GIF IMAGE dłuższym niż komenda „zjadał”
  następne VIFcode'y → teraz kontynuacja obrazu dopiero w danych kolejnego DIRECT (`submitDirectPayload`).
  Po tym wciąż stoi: raz na prawidłowym FLUSH z bitem I (`0x91010000`, gra nie wysyła FBRST.STC),
  raz po UNPACK z bitem I (`0xEE39C0D9`) dane wznowione wyglądają na niebędące VIFcode'ami (TTE? rozmiar UNPACK?).
  **Do zbadania: obsługa przerwania VIF1 w wyścigu (handler 0x25B5C0, bity NUM 16/17/18) i TTE w łańcuchu.**
- Handler VIF1 0x25B5C0: INT=0 → STC; NUM bit18 → `--sem18` (0x4A8398), STC gdy ≥0; bit16 → `--sem16`
  (0x4A8396), STC gdy ≥0; bit17 → `++sem17`, gdy 0 → restart GIF (D2 QWC=0, STR). Brak STC = czeka na GIF
  (handler DMA 0x25B738 podnosi semafory z tagów GIF z IRQ). D_CTRL=1 (bez stall control, bez MFIFO).
- Dodane: **łańcuch DMA VIF1 czytany leniwie** (tag po tagu, dane od razu do VIF1, przerwa przy zatrzymaniu
  na bicie I, wznowienie od TADR przy FBRST.STC; `GT3_EAGER_VIF1=1` = stare zachowanie) oraz ADDR/MADR/TADR
  z bitem SPR → scratchpad. Menu działa jak wcześniej. **Wyścig dalej stoi**: VIF1 trafia na tag
  `0xFFFCA91C` (ID 7, IRQ, qwc 0xA91C) z VIFcode `0xED1CC0D9` (UNPACK z bitem I, NUM=0x1C → sem18=−1),
  niespójny z normalnym wzorcem łańcucha (cnt qwc≈7 + UNPACK, ref + MSCAL 0x343). Gra buduje łańcuchy w
  0x355120/0x3F5120 (podwójny bufor). Hipoteza: łańcuch powinien skończyć się wcześniej (pominięty tag END?)
  albo CPU nie zdążyło dopisać — trzeba prześledzić, kto zapisuje te tagi (kod budujący pakiety aut).
- **Wykluczone (3 podejścia bez efektu dla stalla w wyścigu):** (1) carry komend VIF / kontynuacja DIRECT,
  (2) bit SPR w adresach DMA, (3) leniwe czytanie łańcucha VIF1. Eksperyment 4 (opóźnione wznowienie
  łańcucha po STC — o vblank albo o N cykli EE) psuje już start gry (dmac1=1; przy bezczynności EE czas
  nie przechodzi przez `accountCycles`) — wycofany. Zostaje: śledzenie zapisów do tagów 0x355120/0x3F5120
  (np. wrapper na funkcję budującą pakiety aut) albo porównanie z PCSX2 (log DMA/VIF).
- **ROZWIĄZANE (2026-11-05): wyścig się renderuje** (niebo, góry, drzewa; tor/teren jeszcze ze
  zielono-czerwonymi śmieciowymi teksturami; ~3 kl./s). Złe tagi pochodziły z 0x24F960: licznik
  rejestrów GS = 0x25B3B0(obj, bufor) = (koniec − start) >> 4, a „koniec” wynosił **1** (zamiast wskaźnika
  z 0x25B378) → licznik −(adres/16) → tag `0xFFFCA91C`, NLOOP `0xFFFCA91B`, UNPACK z bitem I.
  Obejście: 0x25B3B0 wykonywane natywnie (ps2_runtime.cpp, `GT3_NO_NATIVE_GSREG=1` wyłącza).
  **Prawdziwy błąd jest w runtime**: `v0` zwrócone przez wywołanie bywa nadpisane (wartością 1, jak zwracają
  handlery przerwań gry) między powrotem z funkcji a użyciem — prawdopodobnie przy wznawianiu po punkcie
  kontrolnym/przełączeniu (np. kontekst wątku głównego vs `m_cpuContext`). Może psuć też inne miejsca.
- **Przyczyna znaleziona i naprawiona ogólnie**: `PS2Runtime::dispatchGuestBranch` po wywołaniu funkcji robił
  `if (ctx->pc == entryPc) ctx->pc = fallthroughPc;` (dla stubów, które nie ustawiają pc). Gdy wygenerowana
  funkcja ma pętlę wracającą na swój pierwszy adres (0x25B378) i wychodzi na punkcie kontrolnym
  (`eeCheckpointDue()` → `return` z pc = początek pętli = entry), runtime uznawał ją za zakończoną i wołający
  jechał dalej ze śmieciowym v0. Teraz `eeCheckpointDue()` ustawia `thread_local g_ps2CheckpointExit`,
  a dispatch przy `pc == entry` i tej fladze zwija stos (wznowienie od pc). Natywne obejście 0x25B3B0 usunięte.
  Dotyczy całej gry (każda funkcja z pętlą na początku).
- **Tekstury toru (zielono-czerwone gradienty)**: w wyścigu tekstury to głównie PSMT4 (psm 0x14, CLUT CT32)
  pod TBP 0x3420–0x3900, czyli **w obszarze bufora Z** (ZBP 417 stron = blok 0x3420; jest też odczyt Z jako
  CT24 pod 0x3420 — efekt głębi). Gra wgrywa tekstury do pamięci Z po jej użyciu i od razu z nich rysuje.
  Gradienty = wartości Z czytane jako tekstura → **wgrania tekstur (PATH3/GIF) docierają do VRAM za późno
  względem rysowania (PATH1/2 przez VIF1)**. Do sprawdzenia: łańcuch DMA GIF czytany z wyprzedzeniem (jak było
  z VIF1), kolejność w arbitrze GIF, MSKPATH3/FLUSHA.
  **Korekta (log sekwencji GS):** w samym wyścigu ZBUF = 257 stron (blok 0x2020), więc tekstury NIE kolidują
  z Z (417 było w innym momencie). Kolejność jest dobra: najpierw BITBLT (DPSM CT32, DBW 1) do 0x3420..0x36E4,
  potem TEX0 PSMT4 (tbw 2, CLUT CT32 CSM1) z tego obszaru. Sprawdzone i poprawne w kodzie: ZMSK, LoadClut
  (CLD/CSA/CSM1), TEX2. Pozostaje: przeliczenie CT32→T4 (swizzle) albo zawartość wgrań.
  **Następny krok: zrzut VRAM GS w wyścigu + dekodowanie PSMT4 z paletą w Pythonie (tablice GSdx).**
- Zrobione: zrzut indeksów PSMT4 funkcjami emulatora (LoadClut → PGM) pokazuje **poprawne tekstury**
  (logo GT, banery Suzuki/Citroën, skała, strzałka) → wgrania + swizzle CT32→T4 są OK. Wierzchołki: PRIM
  TME=1, STQ sensowne, RGBA 0x80; rysowania toru to PSMT4 tbw 2, REPEAT. Rasteryzacja synchroniczna
  (Submit → DrawPrimitive), więc CLUT nie „ucieka”; LookupCLUT/LoadClutUnlocked dla T4+CT32 poprawne.
  Podejrzenie: zielono-czerwone kafle to inne przebiegi — TEX0 psm 0x01 (CT24) na tbp 0x3420 (wcześniej ZBP
  417) i na buforach ramki (tbp 0/0x1400): efekty głębi/rozmycia czytające obszar, w którym w emulatorze
  jest atlas indeksów zamiast Z. **Do zrobienia: lista rysowań jednej klatki (GS debug history / Runtime
  Debugger) — który przebieg maluje kafle i jaki ma FRAME/ZBUF/TEX0.**
- **Lista rysowań klatki + zrzuty VRAM (2026-11-05):** scena 3D rysuje się do FBP 0xF1 (blok 0x1E20, CT32)
  i **jest w VRAM idealna** (tor, banery Citroën/Magneti Marelli/Red Line, drzewa). Psuje się kompozycja (DOF):
  1) kopia Z sceny (blok 0xA00, PSMZ24 jako tekstura) → FRAME 0x1A1 (blok 0x3420) w PSMZ24, sprite'y 32 px,
     RGBA 0x80 (MODULATE = tożsamość), ZTST ALWAYS, kompresja 2:1 w pionie;
  2) przebiegi rozmycia do FBP 0x50 / 0x191;
  3) końcowo sprite'y sceny (tex 0x1E20) → bufor ekranu 0xA0 z **ZBUF 0x1A1, ZTST GEQUAL, z = 1**.
  U nas kopia głębi ma wartości 0x21128–0x49B89, więc test przechodzi tylko na niebie (Z ≤ 1), a resztę
  bufora ekranu zostawia ze starymi śmieciami (zielono-czerwone = Z jako kolor). Na PS2 musi przechodzić
  szerzej → podejrzane: semantyka Z24 (zapis/odczyt PSMZ24 jako tekstury lub FRAME, skala Z wierzchołków
  sceny, ZBUF psm vs wartości > 24 bit) — porównać z PCSX2 (GSdx: Z24 jako tekstura, konwersja `z` do 24 bit).
- **Obejście (2026-11-05, kamień 5 prawie zrobiony):** w backendzie CPU test Z GEQUAL z ZBUF 0x1A1 i ZMSK=1
  zawsze zaliczony (`g_gt3CompositeZPass`, ustawiane w ps2_runtime.cpp dla GT3; `GT3_NO_DOF_HACK=1` wyłącza).
  Wyścig wygląda poprawnie (tor, banery, publiczność, niebo); menu bez zmian. Traci się tylko efekt DOF.
  Prawdziwa przyczyna (dlaczego kopia Z24 ma wartości > 1) nadal nieznana. **Następne: kamień 6, wydajność
  (wyścig ~3 kl./s, menu ~21 vblank/s).**

### Tryb Arcade (2026-11-06)

- Menu Arcade (Single Race → Level Selection) działa; wszystkie menu mają filmy w tle (`stream/*_full.pss`,
  odtwarzacz pomijany — bez wpływu). Po wyborze poziomu ekran był czarny: wątek główny wisiał w **0x266090 —
  dekodowanie obrazu przez IPU** (a0 = bufor RGBA32, a1 = nagłówek, szer./wys. 16-bit pod +8/+10; czeka na
  semafor DMA IPU, flaga gp−0x4690). IPU nie jest emulowane. Zaślepka w ps2_runtime.cpp wypełnia bufor
  ciemnoszarym kolorem (`GT3_NO_IPU_STUB=1` wyłącza). Teraz: wybór trasy (Super Speedway), klasy, auta
  (model auta częściowo zniekształcony) → start wyścigu daje **biały ekran ze śmieciami** — następny problem.
  Sekwencja pada: `12:4000:0.3,19:4000:0.3,24:4000:0.3,30:4000:0.3,38:4000:0.3,46:4000:0.3,54:4000:0.3`.
- Narzędzia diagnozy: `scratchpad/eedis.py <od> <do>` (capstone, deasemblacja CORE.elf z gt3-data);
  zrzut wątków EE (pc/ra + adresy kodu ze stosu) w bloku `[gt3stat]` — wzorzec: wait na 0x286dc8 = WaitSema.
  Nazwy filmów: a1 funkcji play 0x25FD38 to ścieżka (`stream/laguna_full.pss` itd.).
- Na przyszłość: prawdziwe IPU (IDEC/BDEC + CSC) dałoby podglądy tras i filmy.
- **Zrobione (2026-11-06): obrazy „ipum” dekodowane przez FFmpeg** (dołączony do runtime, avcodec 61 ma
  `AV_CODEC_ID_IPU` + parser): `gt3DecodeIpum` w Kernel/Stubs/MPEG.cpp (nagłówek 16 B: „ipum”, rozmiar od +8,
  szer., wys., klatki; YUV→RGBA swscale, alfa 0x80, wyjście w kolejności makrobloków 16×16 jak DMA z IPU;
  `GT3_IPU_LINEAR=1` liniowo). Podgląd trasy (Super Speedway) i ekran klasy pokazują prawdziwe zdjęcia.
  Zdjęcie auta przy wyborze koloru idzie inną ścieżką (nie 0x266090) — nadal kolorowe śmieciowe bloki.
  Wywołania biblioteki IPU (0x2644B8–0x266038, xref rejestrów 0x10002000/10) spoza niej: tylko 0x1CD5C0 → 0x266090
  oraz odtwarzacz libmpeg (0x25F668–0x25FFB0 → 0x2600xx–0x261Cxx), który jest pomijany. Zdjęcie auta to więc
  prawdopodobnie strumień filmu (pomijany) albo niezainicjowany bufor — do zrobienia przy emulacji filmów.
- Grywalność (Arcade, Krzyżyk trzymany od 46 s): przy „1” (~87 s) kamera zderzakowa z lusterkiem, obrotomierz
  przy czerwonym polu → gaz z pada działa w wyścigu. Start („GO”) wypada po 90 s — jazdy nie da się sprawdzić
  w limicie pomiaru bez przyspieszenia wczytywania menu/wyścigu.
  Ponowne naciskanie Krzyżyka nie pomija przelotu kamery/odliczania.
- Wykluczone (VU): natychmiastowe flagi MAC/status w trybie szybkim (bez potoku flag) — szybciej (~4,6–6,8 s/60,
  „START” przed 90 s), ale **psuje scenę** (czarne kliny w wyścigu): mikrokod VU1 czyta flagi z opóźnieniem 4 cykli
  (np. obcinanie). Wycofane — flagi muszą zostać w potoku.
- **Wyścig Arcade działa (kamień 4 dla prawdziwej gry):** pad `12,17,21,25,30,35,40,45,50:4000:0.3` (co ~5 s
  Krzyżyk) → ok. 55 s start na Super Speedway: przelot kamery, HUD (6th, Lap 1/2, obrotomierz reaguje na gaz),
  ~8,5 kl./s. Obrazy IPU to „ipum” 640×512 (tła menu). Ekran po wyborze auta jest biały (tło ipum = szare +
  efekt), wybór koloru ma rozsypane tekstury modelu auta.
- **Kamień 5, główny błąd: modele aut nie są rysowane** — ani gracza, ani rywali (widać tylko cienie), także w
  demo. Następny krok: lista rysowań klatki wyścigu (GT3_DRAWLOG) — czy rysowania aut w ogóle trafiają do GS
  (inna ścieżka VU1/VIF, np. MPG/MSCAL innego mikroprogramu, PATH3), czy są odrzucane (test Z/alfa, scissor).
  Zbadane (2026-11-06): w strumieniu GS klatki wyścigu (GT3_DRAWLOG, histogram fbp/psm) są tylko tekstury T4
  trasy (fbp 0xF1 fbw 10), małe przebiegi do bufora fbw 2 (odbicia/kamery), 6×400 trójkątów CT16 do 0x191
  (próbkują scenę 0x1E20), kompozycja DOF i HUD — **nic przypominającego karoserię**. Wykluczone:
  (1) moje zmiany wydajności (wszystkie przełączniki na stare zachowanie — auta nadal brak), (2) VU1 —
  każdy z ~20 mikroprogramów robi XGKICK, brak zarezerwowanych instrukcji, (3) urywanie mikroprogramów VU0
  (VCALLMS 0x0/0x120/0x1D0/0x2D0, limit 4096 cykli nie jest osiągany). Brak błędów odczytu plików w logu.
  Następne kierunki: makro-instrukcje COP2 w kodzie EE (macierze aut), widoczność/LOD aut liczone na EE,
  porównanie łańcucha VIF1 (MSCAL/UNPACK) z PCSX2.
  Dalej wykluczone: (4) test Z — wymuszony ZTST ALWAYS w scenie (fbw 10) nie pokazuje aut. Ekran wyboru
  auta/koloru to zdjęcia 2D (pełnoekranowa tekstura CT32 0x1E20 z obrazów IPU), nie model 3D — nieprzydatny.
  **Trop:** cień auta jest rysowany (trójkąty abe=1 zmsk=1, T4, np. tbp 0x3665, ok. 179 sztuk) w miejscu auta;
  znaleźć funkcję EE budującą pakiet cienia (wywołanie VIF/MSCAL), karoseria powinna być rysowana obok —
  sprawdzić, dlaczego jej gałąź jest pomijana.
- Ustalenia (wrappery `replaceFunction` + `lookupFunction` na oryginał, `scratchpad/xref.py` szuka lui/addiu
  do adresu, RTTI gcc2: napis `12RaceCarModel` → funkcja `__tf` 0x1AC638 → vtable 0x332498):
  ścieżka modelu `cars/{day,eve,night}/<id>` składana w 0x21FA18(id, bufor, pora), wczytywanie plików
  0x2428C8(nazwa, cel, rozmiar…). **Modele aut i opon się wczytują** (demo: `cars/day/sb0039`,
  `cars/day/mi0063`, `tire/n23`, `tire/n31`) → problem jest w rysowaniu. Metody wirtualne RaceCarModel
  (0x1AAD18, 0x191068, 0x190E30, 0x190DB8) prawie nie są wołane (vt3 2×) — rysowanie idzie inną ścieżką
  (`Q28CarModel8Callback`, `ModelSet`). Makra FPU div/sqrt/rsqrt w ps2_runtime_macros.h wyglądają poprawnie.
- Liczniki wywołań (szablon `gt3ProfWrap<I>` na 240 funkcjach 0x21F000–0x228000 z functions.csv, różnica
  dwóch zrzutów ~120 vsync w wyścigu demo): **kod aut działa co klatkę** — 0x21FE00/0x21FE78/0x21FEE8…
  po 240 (2 auta), 0x21FEC8 960, 0x2232D8/0x223338/0x2235D0 po 480 (koła?), 0x225E08/0x225F08/0x227F68 ~14 tys.,
  0x226158 ~43 tys., 0x226588 ~48 tys. (ModelSet — także trasa). Rysowanie aut jest więc zlecane, ale nie
  trafia do GS → szukać między tym kodem a VIF1: czy pakiety aut trafiają do łańcucha DMA VIF1 (np. inny
  kanał/ścieżka: VIF0/VU0, SPR, osobny łańcuch), czy są budowane z błędnymi danymi (np. liczba wierzchołków 0).
- Dalej wykluczone: (5) DMA scratchpada — kanały 8/9 (fromSPR/toSPR) w ogóle nie startują (runtime i tak
  obsługuje tylko tryb normalny). Kod aut zapisuje stałe do SPR (0x250688 → 0x70003AF0.., np. przezroczystość
  `1 − f[+0x30]` w 0x21FEF8). **Problem aut odłożony** po 5 wykluczonych kierunkach. Do zrobienia później:
  porównanie z PCSX2 (zrzut łańcucha VIF1/GIF jednej klatki wyścigu) albo śledzenie bufora pakietów aut.

### Wydajność c.d. (2026-11-06)

- Profil wyścigu: wątek EE ~44% interpreter VU1, ~30% czeka na rysowanie pasami (RowPool::run).
- Opróżnienia odłożonych prymitywów: średnio 9–18 prymitywów na opróżnienie; przyczyny ~55% LoadClut,
  ~28% BeginTransfer (wgrania), ~10% TextureFlush, ~6% prezentacja. Próba: migawki CLUT + brak opróżnienia
  przy TextureFlush + test nakładania obszaru wgrania (tekstura/ramka/Z odłożonych prymitywów) — opróżnień
  przez LoadClut 16,8 tys. → 1,3–2 tys., przez wgrania o połowę mniej, ale **tempo bez zmian** (~8,4 s/60 vsync)
  → wycofane. Wąskie gardło to sama praca rysowania wykonywana, gdy EE czeka. Następny krok: asynchroniczne
  opróżnianie (pula rysuje, EE liczy dalej; czekanie tylko przy konflikcie obszarów/odczytach VRAM) — wtedy
  migawki CLUT i testy nakładania z tej próby będą potrzebne.
- **Zrobione: asynchroniczne opróżnianie** (gs_cpu_backend): przy 1024 odłożonych prymitywach zbiór (z migawkami
  CLUT) przechodzi do wątku `m_flusher`, który rysuje go pulą pasów, a EE liczy dalej. Czekanie (`WaitInflight`)
  tylko przy synchronicznym opróżnieniu (odczyty VRAM, prezentacja, feedback, transfery GS→EE/lokalne) albo gdy
  LoadClut/wgranie nakłada się na obszary odłożonych lub rysowanych prymitywów (`PendingTouches`: ramka, Z,
  tekstura — szacunek z nadmiarem). TextureFlush nie opróżnia. `PS2X_GS_SYNCFLUSH=1` = stare zachowanie.
  Wyścig ~8,4 → ~6–7 s/60 vsync (~8–10 kl./s). Na drugiej (losowej) trasie demo raz widać kafle-śmieci na
  niebie — nie wiadomo, czy to wyścig danych, czy wcześniejszy błąd tej trasy (sprawdzić z PS2X_GS_SYNCFLUSH=1).
- Poprawki (Arcade, Super Speedway jako test deterministyczny): (1) szacunki obszarów VRAM liniowo w bajtach
  były złe dla formatów z przeplotem (PSMT4: strona 128×128, mały prostokąt dotyka bloków w całej stronie) →
  brak litery w „SUPER SPEEDWAY”, czarna scena; teraz zakresy wyrównane do stron 8 KB + zapas 128 wierszy.
  (2) Pomijanie opróżnienia przy LoadClut (migawki CLUT) gubiło panel ASM/TCS — LoadClut znów zawsze opróżnia
  (bez straty tempa). Wynik: HUD i scena poprawne, ~6,7 s/60 vsync (~9 kl./s).
- Profil EE: kod gry tylko ~14% wątku EE (reszta VIF1/VU1/GS). **Tryb szybki VU (domyślny)**: zapisy VF/VI/ACC
  od razu do rejestrów (na VU i tak są blokady przy hazardach), bez kopii stary/nowy, kolejek i markPairWrites;
  flagi, Q/P (DIV/EFU, WAITQ/WAITP) i zapisy do pamięci nadal przez potoki. `PS2X_VU_EXACT=1` = dokładny model.
  Wyścig ~6,7 → ~5,9 s/60 vsync (~10 kl./s), obraz bez zmian.
- **Nowy błąd (kamień 5):** przy odliczaniu w Arcade (widok z auta) dolna część sceny jest czarna — bliski tor
  nie jest rysowany (widać tylko niebo). Możliwe wspólne źródło z brakiem aut: geometria blisko kamery (ścieżka
  obcinania/clip w mikrokodzie VU1, CLIP/FCAND/FCOR). Teraz da się to obejrzeć w 90 s (odliczanie ~85 s).
- Lista rysowań klatki odliczania: scena główna (fbp 0xF1 fbw 10) ma tylko kilka trójkątów — **tor jest
  odrzucany po stronie EE** (jak auta), nie przez GS. Test widoczności obiektów: 0x226158 (ModelSet) liczy
  makro VCLIP dla dwóch punktów i czyta flagi przez CFC2 vi18; przy w<0 zamienia bity „+” (0x15) i „−” (0x2A).
- **Błąd rekompilatora VCLIP (makro COP2) poprawiony**: miał zamienione bity +/− (bit 0 musi być +x) i porównywał
  z w zamiast |w| (`ps2xRecomp/src/lib/vu_translator.cpp`; w 7 wygenerowanych plikach runnera ten sam kod
  podmieniony lokalnie — przy regeneracji runnera poprawka wejdzie z generatora). Obraz bez zmian (auta i bliski
  tor nadal brak) — kolejne podejrzane makra COP2 (VMADD/VOPMSUB/VDIV…) albo dane w VU0 (vf24–27, vf20).
  Interpreter VU (CLIP/FC*) sprawdzony — poprawny. Runner jest budowany unity (`Unity/unity_N_cxx.cxx`).
- Rejestry VU0 (COP2) były osobne w kontekście każdego wątku EE (nowy wątek = zera); na PS2 VU0 jest wspólny.
  Teraz wspólny stan (EeScheduler: `gt3Vu0Load/Save` wokół wykonania kodu; `PS2X_VU0_PER_THREAD=1` = stare).
  Obraz bez zmian. Wykluczone dla brakującego toru/aut (łącznie): zmiany wydajności, VU1 XGKICK, limit VU0,
  test Z, DMA SPR, kolejność bitów VCLIP, osobne VU0 na wątek. Generator makr COP2 częściowo sprawdzony
  (VMOVE/VABS/VMR32 maski i obrót poprawne). Następne: porównanie z PCSX2 albo śledzenie wyniku testu
  widoczności w 0x226158 (które obiekty odrzuca i dlaczego — zrzut vf1/vf2/flag dla kilku obiektów).
- **Śledzenie testu widoczności (log w lokalnym pliku runnera):** 0x226158 → 0x2497C0 → 0x24F778 robi
  `vcallms 0x120`; mikroprogram VU0 0x120 (zrzut pamięci kodu VU0): `LQ vf24..27 ← VU0mem[8..11]`,
  potem vf24..27 = (vf28..31 = macierz obiektu) × VU0mem[8..11] (kamera·projekcja). Wynik vf24..27 to
  macierz testu VCLIP. ~60% obiektów odrzucanych w wyścigu (normalne). **Przy odliczaniu tor (obiekt 0x9BECC0)
  dostaje macierz afiniczną** (kolumna w = 0, w = 1, skala ~0,01) zamiast projekcyjnej (skala 2,4/3,3, kol. z≈w)
  → wszystkie punkty poza |x|,|y|,|z| ≤ 1 → odrzucony. Czyli VU0mem[8..11] trzyma w tym momencie złą macierz
  (inną kamerę/2D, np. ortho 0.00313/−0.00446 z HUD), wszystko na jednym wątku EE (nie przeplot wątków).
  Ścieżka: s1≠0 (obiekt przecina granicę) → 0x252500 (wariant z obcinaniem), s1=0 → 0x252790;
  wymuszenie s1=0 pokazuje bliską geometrię odwróconą (w<0), więc ścieżka obcinania sama działa.
  **Następne:** kto zapisuje VU0mem[8..11] (0x11004080) tuż przed ModelSet toru przy odliczaniu
  (wołający 0x24F778: 0x2497AC/0x2497E8, 0x24F428, 0x24F5EC, 0x25103C) — możliwe złe źródło macierzy kamery
  (np. kamera auta gracza, którego model też nie jest rysowany).
- **ROZWIĄZANE (2026-11-06): auta są rysowane** (gracz i rywale, demo i Arcade). VU0mem[8..11] (macierz kamery,
  zapis 0x255FB8 przez vi10=8) nadpisywał push stosu macierzy 0x256088 (`vsqi` przez vi11; init 0x2514E8:
  vi11=0x10, vi12=0x50, vi13=0x60; pop 0x256108 `vlqd --vi`). vi11 wracał do 0 tuż po inicjalizacji, bo kontekst
  wątku bywa zerowany/odtwarzany w całości, a wspólny stan VU0 wczytywano tylko przy zmianie kontekstu.
  Teraz `gt3Vu0Load` kopiuje wspólny stan VU0 przed każdym wykonaniem. Morał: rejestry VI VU0 to trwały stan gry
  (wskaźniki stosów w pamięci VU0) — każde cofnięcie kontekstu EE psuje grafikę.
  Ta sama poprawka usunęła czarny bliski tor przy odliczaniu. Demo rajdowe (auta, trasa, banery) wygląda poprawnie.
  Szybsza sekwencja Arcade (odliczanie „3” ok. 90 s): `12,16,19,22,25,28,31,34,37,40,43:4000:0.3,46:4000:44`.
  Zostaje w kamieniu 5: kolory przejścia demo→tytuł/powtórki (paleta 0x3E80), szare obrazy IPU (zaślepka).
- **Paleta 0x3E80 (powtórka niebieskozielona, ok. 85 s demo):** log zdarzeń GS (XFER/TEX0/DRAW) pokazał, że
  0x3E80 to wgranie **PSMCT24 16×16** (768 B, 3 B/piksel) tuż przed przebiegami 0x1F3 (TEX0 CLD=5, CSM1);
  wcześniejsze „losowe” wartości to obszar tekstur trasy wgrywany w innych momentach klatki. Dane z EE to gładka
  krzywa tonalna: G=B ≈ rosnące do 0xFF, **R ≈ 255·(G/255)^4** (np. G 0x92 → R 0x1E) → cyjan jest w danych gry.
  Wgranie CT24 jest poprawne (dodane i tak: przenoszenie niepełnego piksela CT24 między porcjami).
  Do sprawdzenia: czy to zamierzony filtr powtórki, czy błąd w kodzie EE liczącym krzywą (pow/exp, makra FPU)
  — porównać z PCSX2 albo znaleźć funkcję budującą tablicę (źródło BITBLT w RDRAM) i jej parametry na kanał.
  Odłożone (brak nazw funkcji, może być zamierzone).
  **Zamknięte (2026-11-06): to zamierzony efekt** — kilka sekund później powtórka demo jest czarno-biała
  (monochromatyczny filtr), czyli gra przełącza stylizowane filtry kolorów w powtórce dema.
  Sekwencja pada z Krzyżykiem co 2,5 s od 11 s nie trafia w menu (gra wchodzi w demo) — używać sekwencji co 3 s od 12 s.

### Wydajność c.d. (2026-11-06, po naprawie aut)
- Wyścig z autami: ~7 s/60 vsync. Profil (20 s, wszystkie wątki): proces ~2,4 rdzenia; GS ~31 s CPU (pula),
  VU1 ~9,7 s (wątek EE), kod gry ~0,2 s. Czułość na wątki rasteryzacji: 1 → ~15 s, 3 → ~8,5 s, 7 → ~7 s/60 vsync
  (oba: VU1 na wątku EE i rasteryzacja przy synchronicznych opróżnieniach, np. LoadClut).
- Zrobione: `calculatePairReadyCycle` w trybie szybkim VU pomija tablice gotowości (bez efektu mierzalnego);
  pamięć podręczna zdekodowanej palety na prymityw (znacznik `t_clutSerial`, nowy w DrawPrimitive i w każdej
  porcji `parallelRows`; `PS2X_GS_NOCLUTCACHE=1` wyłącza) → ~6,4–6,9 s/60 vsync.
- Następne kandydaty: WritePixel (7,7 s; wskaźniki funkcji ReadVram/WriteVram na piksel, dwa przeliczenia adresu
  dla RMW), SampleTexture/ReadTexture, VU1 na osobnym wątku (największy krok).
- `ps2_gs_memory.cpp` kompilowany wewnątrz gs_cpu_backend.cpp (`PS2_GSMEM_IMPL`), Read/WriteVramUnlocked bez
  wskaźnika funkcji dla CT32/CT24/Z24/Z32 — mniej CPU rasteryzacji, tempo wyścigu w granicach szumu (~6,5–7 s).
- **Pomiar czekania EE (chrono wokół FlushDeferredUnlocked/WaitInflight):** w wyścigu ~2,7 s na 10 s (~27%)
  to synchroniczne opróżnienie w `LoadClut` (~12 tys./s, każdy zapis TEX0, także bez ładowania palety);
  transfery ~0,2 s, reszta pomijalna. Próba: opróżniać tylko przy faktycznym ładowaniu (indeksowany PSM + CLD)
  → połowa wywołań, ale **czas czekania bez zmian** (czeka się na tę samą pracę) i pojawiły się śmieci na kole
  auta przy odliczaniu (częste opróżnienia maskują błąd szacunku nakładania wgrań/rysowań) → wycofane.
  Wniosek: EE czeka na pracę rasteryzacji, więc trzeba jej mniej (koszt piksela) albo rysowania naprawdę
  równoległego z EE (migawki CLUT + poprawne wykrywanie konfliktów VRAM).
- **ROZWIĄZANE: prawdziwa przyczyna znikania HUD (ASM/TCS) i śmieci na kole** — wyścig między pasami wierszy
  w jednym odłożonym zbiorze: prymityw rysujący do tekstury (render-to-texture) i późniejszy prymityw czytający ją
  w innych wierszach ekranu rysowały się w różnych wątkach bez kolejności (`isFeedbackDraw` łapie tylko odczyt
  własnej ramki). Częste opróżnienia przy każdym TEX0 maskowały błąd. Kontrola (`LoadClut` z i bez czekania,
  porównanie palet) wykluczyła palety i wgrania. Teraz Submit śledzi obszary zapisu (ramka/Z) i odczytu (tekstura)
  zbioru (`m_defWrites/m_defReads`) i przy konflikcie RAW/WAR zamyka zbiór (`FlushDeferredAsync`;
  `PS2X_GS_NOHAZARD=1` wyłącza). Zakresy liczone dokładnie w stronach 8 KB wg formatu (CT32 64×32, CT16 64×64,
  T8 128×64, T4 128×128) — zgrubne (4 B/piksel, +128 wierszy) dawały fałszywe konflikty i ~9 s/60.
  LoadClut domyślnie bez czekania (migawki; czeka tylko, gdy odłożone rysowania mogą zapisać źródło palety;
  `PS2X_GS_CLUTWAIT=1` = stare). Wyścig ~6,1–6,6 s/60 vsync, HUD i obraz poprawne, odliczanie „2” przed 90 s.
- Dokładne zakresy stron także w `SetTouches` (PendingTouches) i `TransferNeedsFlush` (wgranie: `pageSpanBytes(dpsm,
  dbw, dsay+rrh)`): czekanie EE ~2,5 → ~1,5 s na 10 s (LoadClut ~0; zostaje: pełny zbiór 1024 → WaitInflight ~0,4 s,
  rysowania ze sprzężeniem ~0,4 s, wgrania ~0,7 s). Wyścig ~5,8–6,4 s/60 vsync, odliczanie od ~80 s.
- Kolejka zbiorów (`m_setQueue`, FIFO, max 4, jeden wątek `m_flusher` → kolejność zachowana) zamiast jednego
  „w locie”; rysowanie ze sprzężeniem idzie do kolejki jako zbiór szeregowy (`DeferredSet::serial`), EE nie czeka.
  Obraz poprawny, tempo w granicach szumu (~5,6–7 s/60). Pozostałe czekanie EE: wgrania nakładające się na
  tekstury odłożonych rysowań (do zrobienia: wgrania jako polecenia w kolejce zamiast opróżniania).
- VU: `calculateFmacProductSticky` (każdy MADD/MSUB) liczył iloczyny drugi raz w long double — teraz tylko dla
  zera/denormali/inf (`PS2X_VU_EXACT_FLAGS=1` = dokładnie). Wyścig ~5,6–6,3 s/60 vsync, odliczanie „2” ok. 86 s.
- Profil (po tych zmianach): GS na puli (WritePixel 8,5, SampleTexture 5+4,8, combineTexture 4,9, trójkąty 4,8,
  ReadTexture 3,4), VU1 (execUpper 3,7, run 1,6, commit 1,1, execLower 1,0, flagi 0,85), `pageSpanBytes` 0,9
  (PendingTouches przeglądał prymitywy — teraz listy obszarów zbioru `DeferredSet::writes/reads`),
  planista IOP na wątku EE (`beginNextReady` 1,2 + `nextWakeCycle` 0,6; teraz jedno przejście `std::map`).
  Wyścig ~5,3–6,6 s/60 vsync (~10 vsync/s).
- VU: normalizacja operandów `execUpper` przez SSE (`vuNormalize4`) — w granicach szumu. Mikrooptymalizacje
  VU/GS dają już po kilka %. Do 60 kl./s (~1 s/60 vsync) potrzebny krok strukturalny: rekompilator mikrokodu VU1
  (JIT/AOT mikroprogramów, ~20 programów w wyścigu) albo backend GS na GPU; VU1 na osobnym wątku da maks. ~2×.

### Klawiatura (2026-11-06)

- Błąd: `PSPadBackend::readState` (ps2_pad.cpp) czytał klawiaturę **tylko gdy nie było gamepada 0**. Dowolne
  urządzenie widziane przez raylib jako gamepad (joystick, przepustnica, kierownica, wirtualny kontroler) wyłączało
  klawiaturę → `Pressed=none`. Teraz klawiatura działa zawsze, gamepad dochodzi do niej, osie mają strefę martwą
  0,25 (przepustnica nie „trzyma” drążka). `PS2X_PAD_NO_GAMEPAD=1` ignoruje gamepady.
  Odczyt raylib jest poprawny: `PollInputEvents` w `EndDrawing` w wątku okna, rlImGui nie czyści `IsKeyDown`.
- Klawisze (okno gry musi mieć fokus): strzałki/WASD = krzyżak, **X/Spacja = Krzyżyk**, C/Esc = Kółko,
  Z = Kwadrat, V = Trójkąt, Q/E = L1/R1, LShift/RShift = L2/R2, **Enter = Start**, Tab = Select.
- **Do przetestowania ręcznie:** uruchomić bez `GT3_AUTOPAD`, kliknąć w okno gry, na ekranie języka
  strzałka w dół (kursor), X (wybór), Enter (Start). Panel PAD w debuggerze: kolumna Pressed. Jeśli nadal
  `none`: spróbować z `PS2X_PAD_NO_GAMEPAD=1` i podać, czy podłączony jest jakiś kontroler/joystick.

### Kamień 6 — wybór drogi (2026-11-06)

- (a) **AOT mikrokodu VU1**: w wyścigu jest jeden obraz kodu VU1 (hash a4460ba4, wgrany raz), 36 punktów wejścia,
  1136 osiągalnych par. VU1 to ~46% wątku EE (ścieżka krytyczna). Ryzyko małe: semantyka zostaje z interpretera
  (generowany kod woła te same execUpper/execLower ze stałą instrukcją), kontrola hashu → powrót do interpretera.
  Zysk: do ~2× całości (potem wąskim gardłem jest GS).
- (b) **GS na GPU**: GS pracuje na puli wątków (~31 s CPU / 20 s), EE czeka na niego tylko ~15% — mniejszy
  zysk na ścieżce krytycznej; ryzyko duże (dokładność: CLUT, render-to-texture, PSMT4/8 swizzle, Z24, DOF).
- **Wybór: (a)**, potem ewentualnie (b). Etap 1 (zrobiony w źródłach): upper/lower kompilowane w ps2_vu1_core.cpp
  (`PS2_VU1_IMPL`), pętla `run()` = lambda `step` wspólna dla interpretera i AOT; `gt3_vu1_aot.inc` (lokalny,
  z `scratchpad/vu1gen.py`, NIE do repo) = `switch(pc)` par ze stałymi słowami. `GT3_NO_VU1AOT=1` wyłącza.
  Pułapka: jedna funkcja z 1136 wstawionymi parami → kompilacja >10 min i brak pamięci (przerwana).
- Etap A (zrobiony): żywotność flag MAC w interpreterze (`g_vuFlagDead`, analiza w przód po ścieżkach): w GT3 flagi
  czyta tylko 10 FMAND, ~77% FMAC pomija flagi. Zysk mały (flagi nie były głównym kosztem). `PS2X_VU_LIVEFLAGS=1`
  wyłącza. Pułapka: warianty z akumulatorem (MULA/MADDA/OPMULA, upper 0x3C..) też zapisują flagi.
- **Etap B (zrobiony): AOT mikrokodu VU1** — `tools/vu1aot.py <obraz.bin> "<log1;log2>" gt3_vu1_aot.inc` generuje bloki
  podstawowe jako lambdy bez przechwytywania, dołączane wewnątrz `VU1Interpreter::run` (dostęp do prywatnych pól bez
  zmiany nagłówka). Stan = `m_state` + kolejki Q/P/flag interpretera (commit tylko przed czytnikami), FMAC przez SSE
  z szybką ścieżką bez flag, SQ od razu, XGKICK od razu (czas zakończenia jak interpreter: 2 cykle/qword).
  Obraz kodu VU1 w GT3 jest jeden (hash a4460ba4); dane i wygenerowany plik: gt3-data/recomp/vu1/
  (`gt3_vu1_aot.inc` skopiować do ps2xRuntime/src/lib/vu/ — bez niego build działa jak dawniej, tylko interpreter).
  Wejścia: log `[gt3vu] entries` (MSCAL) + `[gt3aot] brak bloku XXXX` (cele JR) — po nowych wpisach w logu
  przegenerować. Nieobsłużona instrukcja → blok pomijany (interpreter).
  **Weryfikacja:** `GT3_VU1AOT_VERIFY=K` (co K-ty program: AOT i interpreter z tej samej migawki, porównanie pamięci VU,
  VF/VI/ACC/Q/I/MAC/clip/pc i hashy pakietów GIF; zostaje wynik interpretera), `GT3_VU1AOT_VERIFY_FROM=s` (od sekundy).
  Wynik: setki tysięcy programów, 0 różnic. `GT3_NO_VU1AOT=1` = sam interpreter.
  Tempo: wyścig ~3,7–5,2 s/60 vsync (było 5,3–6,6), wczytywanie/menu dużo szybsze (odliczanie od ~70 s zamiast ~85 s).
  Teraz dominuje GS (rasteryzacja na puli) → następny krok wydajności to GS.
- **ROZWIĄZANE (2026-11-06): zawieszenie przy starcie wyścigu („GO”)** — dmac1 co ~240 vsync, kafle-śmieci.
  Przyczyna: **brak przerwania GS FINISH (INTC 0)** w runtime. Od startu wyścigu gra po każdej klatce robi odczyt
  GS→EE: handler DMAC VIF1 (0x25B738) przy łańcuchu zatrzymanym tagiem z IRQ zwiększa licznik +0x15 (0x4A8380),
  handler FINISH (0x25B6D8) też; przy 2 → 0x25B950 (VIF1 DIR=0, BUSDIR=1), po nim 0x25B9C8 startuje kontynuację
  łańcucha; dopiero jej koniec kasuje flagę zajętości kanału (+0x1D), na którą czeka wątek renderujący (0x2520C0,
  limit 120 vblanków). Teraz gs_frontend przy FINISH 0→1 i IMR.FINISHMSK=0 zgłasza INTC 0 (`GT3_NO_FINISH_IRQ=1`
  wyłącza). Wykluczone po drodze: (1) limit 8192 iteracji pętli łańcucha VIF1 (podniesiony i tak, z ostrzeżeniem
  `[vif1] lancuch DMA przekroczyl limit`), (2) wyścig flagi i startu łańcucha (flaga ustawiana przed CHCR),
  (3) maski DMAC. **Wyścig Arcade jedzie**: licznik czasu okrążenia biegnie, gaz (Krzyżyk) rozpędza auto (67 km/h,
  2. bieg przy ~88 s), ok. 4 s/60 vsync w ruchu.
- Profil wyścigu w ruchu (z AOT, 20 s): VU1 już ~2–3 s, dominuje GS na puli (WritePixel 13,8, SampleTexture 13,6,
  combineTexture 7,6, DrawTriangle 6,4, ReadTexture 5,2 s CPU), planista IOP na wątku EE ~2,3 s.
  Wykluczone: pomijanie skanów wątków IOP w `runCycles` (licznik zmian stanu): bez zysku mierzalnego (~4,1 s/60),
  a w wersji między wywołaniami psuło budzenie (zdarzenia z EE) — wycofane.
- Czułość na liczbę wątków rasteryzacji (wyścig w ruchu): 2 → ~6,2, 4 → ~5,0, 8 → ~4,1 s/60 vsync — wyścig jest
  ograniczony przez GS. Pula zużywa jednak średnio tylko ~2,75 z 7 rdzeni → ogranicza opóźnienie (synchroniczne
  opróżnienia, małe zbiory, jeden wątek m_flusher), nie przepustowość.
- **Pomiar czekania EE na GS** (wyścig w ruchu, na 5 s): ~1,9 s czekania; flusher bezczynny ~2,9 s → obie strony
  czekają na siebie. Główne miejsce: `BeginTransfer` (wgranie nakłada się na odłożone rysowania → synchroniczne
  opróżnienie, ~140/s). **Zrobione: wgrania host→GS jako zbiory w kolejce** — `UploadImage` działa na EE jak dawniej,
  ale zapisy pikseli (`WriteVramUnlocked`) są nagrywane (`thread_local`, tylko EE w trakcie UploadImage) i trafiają do
  kolejki FIFO jako zbiór-wgranie z obszarem zapisu (dla `PendingTouches`/LoadClut); każde inne wywołanie backendu
  najpierw `CloseUpload()` (pod `m_mutex`!). `PS2X_GS_NODEFERUPLOAD=1` wyłącza. Kolejka zbiorów 4 → 32
  (`PS2X_GS_MAXSETS`). Wyścig ~4,1 → ~3,6–3,8 s/60 vsync. Teraz EE czeka głównie w LoadClut (paleta z kolejkowanego
  wgrania) — do zrobienia: LoadClut jako polecenie w kolejce.
  Wykluczone: paleta z „nakładki” bajtów kolejkowanych wgrań (bez czekania, gdy źródło palety zapisują tylko
  wgrania) — obraz poprawny, ale tempo bez zmian (~3,6–3,8 s/60) → wycofane. Wniosek: dalsze przesuwanie punktów
  synchronizacji EE↔GS daje mało; ogranicza sama praca rasteryzacji (CPU) — krok strukturalny: GS na GPU.
  Wykluczone też: pamięć podręczna zdekodowanych tekstur (cała tekstura → tablica liniowa, unieważnianie
  generacjami stron 8 KB podbijanymi przez zbiory/transfery): globalna blokada na prymityw × pasy i ponowne
  dekodowania po podbiciach (zakresy zapisu z zapasem) → wolniej (5–8 s/60), a pełne dekodowanie tekstur 1024²
  zawieszało ekran wczytywania. Wycofane. Dalszy zysk wydajności tylko przez GS na GPU (duży projekt).
  Wykluczone też: pomijanie kopii Z dla DOF (FRAME 0x1A1) — obraz bez zmian, tempo bez zmian (mały koszt).
- **Stan (2026-11-06, koniec serii):** wyścig Arcade jedzie (gaz, wyprzedzanie, ~3,6–3,8 s/60 vsync ≈ 16 vsync/s,
  wczytanie do odliczania ~60–70 s). Kamienie 1–5 osiągnięte (klawiatura do potwierdzenia przez użytkownika).
  Do 60 kl./s brakuje ~4× — po AOT VU1 ogranicza rasteryzacja GS na CPU; następny krok to backend GS na GPU
  (VRAM z przeplotem PS2 w shaderach/compute, CLUT, render-to-texture, odczyty GS→EE co klatkę) — duży projekt,
  decyzja użytkownika.
- **Rzadkie zawieszenie przy wczytywaniu (~30–40 s, 2× na ~25 przebiegów)**: log [gt3stat] staje, okno nie odpowiada.
  Nie odtworzone w 9 kolejnych przebiegach. Narzędzie: `tools/hanghunt.ps1` (uruchamia grę N razy, przy zastoju logu
  robi pełny zrzut procesu przez comsvcs MiniDump → analiza `minidump` + `scratchpad/sym.py`).
- Pułapka: `CloseUpload()` przed blokadą `m_mutex` → wyścig z wątkiem okna → uszkodzenie sterty (0xC0000374).
  Diagnoza awarii bez debuggera: WER LocalDumps (HKLM\...\Windows Error Reporting\LocalDumps\ps2EntryRunner.exe)
  + `minidump` (pip) + symbolizacja przez dbghelp z ctypes (`scratchpad/sym.py`, PDB z `/DEBUG`).
- **ROZWIĄZANE: zawieszenie wyścigu ~4,6 s po starcie** (wątek renderujący w nieskończonej pętli 0x1EBFC8 — redukcja
  kąta koła `while (a >= 2π) a -= 2π` przy a = 5e34). Łańcuch (wrappery `replaceFunction` na tysiącach funkcji ze
  strażnikiem wartości): prędkość koła ← prędkość auta ← ciało fizyczne ← impuls zderzenia 0x1FDA68 ← rekord
  kontaktu z NaN ← obrys auta liczony w 0x1FBD80 (normalne krawędzi `(dy,-dx)/sqrt(dx²+dy²)`).
  **Błąd rekompilatora: `SQRT.S` na R5900 bierze źródło z pola ft** (pole fs = 0), a generator używał fs →
  sqrt(f0) zamiast sqrt(f2). Poprawione w `ps2xRecomp/src/lib/fpu_translator.cpp`; w lokalnym runnerze 30 z 69
  wystąpień poprawionych skryptem (przy regeneracji runnera poprawka wejdzie z generatora). Wyścig trwa dalej,
  gracz wyprzedza (5. miejsce przy ~88 s).
- Zrobione: adres bajtowy CT32/CT24/Z32/Z24 w `WritePixel` liczony raz na bufor (RMW ramki i Z bez 4× przeliczania
  przeplotu; `PS2X_GS_NOFASTADDR=1` wyłącza). Obraz bez zmian, tempo w granicach szumu (~4,0–4,3 s/60).
- **Do przetestowania ręcznie:** Arcade → Single Race → wyścig; po „GO” jechać (X = gaz, strzałki = skręt), sprawdzić,
  czy wyścig trwa bez zawieszenia i czy obraz jest poprawny; porównać płynność z `GT3_NO_VU1AOT=1`. Zgłosić,
  jeśli obraz w menu/wyścigu różni się między trybami albo gra staje (wtedy też z `GT3_NO_FINISH_IRQ=1`).
  Dodatkowo: przejechać całe okrążenie z zderzeniami z innymi autami (fizyka po poprawce SQRT.S); przy
  śmieciach w teksturach sprawdzić z `PS2X_GS_NODEFERUPLOAD=1`.

### Wydajność c.d. (2026-11-06, seria 2: 3,6 → ~1,5 s/60 vsync)

- Pomiar granicy: `GT3DBG_NODRAW=<s>` (od podanej sekundy nic nie rysuje) — wyścig bez rysowania był ~2,3 s/60,
  czyli strona EE też była za wolna. Profil bez rysowania: planista IOP (`beginNextReady`/`nextWakeCycle`) ~22%.
- **IOP wsadowo** (`runEeCycles`): EE rozlicza cykle co kilka-kilkadziesiąt, a każde wywołanie skanowało wszystkie
  wątki IOP. Teraz co `GT3_IOP_BATCH` cykli EE (domyślnie 2048 ≈ 7 µs; 0 = co 8). Wyścig 3,6 → ~3,1, bez rysowania 2,3 → 1,35.
- **Szybka ścieżka trójkątów i sprite'ów** (`PS2X_GS_SLOWTRI=1` = stara): przedział X wiersza liczony analitycznie
  (zapas wg szacunku błędu float), stan potoku pikseli w strukturach lokalnych (`FastPix`, `FastTex` — zapisy przez
  `uint8_t*` nie zmuszają do ponownego czytania stanu), adres VRAM przyrostowo (wiersz tablicy stron raz na wiersz),
  `__forceinline` na małych funkcjach piksela. Weryfikacja `PS2X_GS_VERIFYTRI=K` (z `PS2X_GS_SYNCFLUSH=1
  PS2X_GS_RASTER_THREADS=1`): ~0,2% trójkątów różni się 1–3 bajtami (pojedyncze piksele) — to `/fp:fast` (inne
  zaokrąglenia w każdej ścieżce), także bez zawężania przedziału; obraz identyczny. → ~2,0 s/60.
- Statystyka (`GT3DBG_TRISTAT=1`): ~47 tys. trójkątów/klatkę, średnio ~28 px — koszt na prymityw ma znaczenie.
- **Czekanie EE na GS** (`GT3DBG_WAITSTAT=1`: czas synchronicznych opróżnień wg adresu wywołującego, symbolizacja
  `scratchpad/sym.py`): (1) `LoadClut` ~35% — teraz **ładowanie palety jako operacja w kolejce** (wersje palety
  `ClutVersion` liczone przez wątek `m_flusher` na początku zbioru; zbiór zamykany, gdy jego prymityw zapisuje źródło
  palety; źródło dopisywane do obszarów odczytu, żeby wgrania w to miejsce czekały w kolejce; `PS2X_GS_NOCLUTDEFER=1`
  wyłącza); (2) `Present` (wątek okna) robił pełne opróżnienie pod `m_mutex` co klatkę — teraz **kopia VRAM jako
  znacznik w kolejce**, czeka tylko wątek okna (`PS2X_GS_SYNCPRESENT=1` = stare); (3) **odczyt GS→EE co klatkę**
  (GT3 czyta blok 64×8 CT32 z rotujących adresów 0x3960–0x3FA0, na początku 64×32 z 0x1E20 — pierścień zapytań, np.
  widoczność słońca/oślepienie): teraz znacznik w kolejce liczy odczyt we właściwym miejscu strumienia, a EE dostaje
  wynik poprzedniego zapytania o tym samym rozmiarze/formacie (opóźnienie 1–2 klatek, `GT3_GS2EE_LAG`, domyślnie 2;
  przy większym opóźnieniu EE czeka tylko na najstarszy znacznik). `PS2X_GS_SYNCREADBACK=1` = synchronicznie,
  `GT3_GS2EE_KEYADDR=1` = klucz z adresem (wtedy praktycznie zawsze synchronicznie). → ~1,5 s/60 (~40 vsync/s).
- **Naprawiony wyścig w `RowPool`** (pula pasów): pasy brane atomowym licznikiem bez generacji — spóźniony wątek
  poprzedniego zadania mógł wziąć pas nowego ze starym `m_fn` (awaria w `DrawDeferredSet`, zrzut WER) albo zdjąć
  licznik w toku poniżej zera (wywołujący kręci się w nieskończoność). **Prawdopodobna przyczyna rzadkich zawieszeń
  przy wczytywaniu.** Teraz przydział pod blokadą z numerem generacji, koniec przez zmienną warunkową.
- Diagnoza awarii: WER LocalDumps włączone dla ps2EntryRunner.exe (folder `scratchpad/dumps`), analiza
  `scratchpad/crash.py <dmp>` (rejestry z kontekstu wyjątku + capstone + sym.py).
- **Do przetestowania ręcznie:** wyścig Arcade — czy efekt oślepienia słońcem / flary zachowuje się normalnie
  (odczyt GS→EE z opóźnieniem); jeśli coś miga albo jest dziwnie jasne: `PS2X_GS_SYNCREADBACK=1`. Ogólna płynność
  i brak zawieszeń przy wczytywaniu.
- Dalej (seria 2 c.d.):
  - **Sprzężenie „samo-odwzorowane”** (`isSelfMapped`: sprite czyta własną ramkę 1:1, u = x + c, próbkowanie punktowe —
    GT3 nakłada filtr kolorów sceny paskami 32×512) rysowane równolegle w zwykłych zbiorach (nie szeregowo);
    `PS2X_GS_NOSELFMAP=1` wyłącza. Odczyt własnej ramki nie trafia do obszarów odczytu (te same wiersze).
  - Wczesny test Z przed próbkowaniem tekstury (`PS2X_GS_NOEARLYZ=1`), paleta T4 dekodowana raz na prymityw,
    zawijanie współrzędnych raz na oś, filtrowanie dwuliniowe całkowitoliczbowo SSE2 (różnica ≤ 1 na kanał;
    `PS2X_GS_FLOATLERP=1` = float), odczyt T4/T8/CT32 bez wywołań, licznik migawek palety lokalny dla wątku.
  - Wgranie kolidujące tylko ze zbiorami w kolejce idzie do kolejki przed bieżącym zbiorem (bez zamykania go;
    `PS2X_GS_UPLOADBREAK=1` = stare). W praktyce ~1000 zamknięć/s i tak zostaje (gra wgrywa w miejsce, z którego
    czyta bieżący zbiór).
  - **Wgrania jako surowe bajty**: EE dopisuje bajty i przesuwa stan transferu arytmetycznie, rozpakowanie robi
    `m_flusher` (`ReplayUpload`); wcześniej nagrywanie po pikselu brało ~23% wątku EE (`PS2X_GS_UPLOADREC=1` = stare).
  - Wątek EE był wąskim gardłem (pomiar czasu CPU wątków: `scratchpad/thr.ps1`; profil jednego wątku: zrzut
    `xperf -i t.etl -o dump.csv -symbols` + `scratchpad/eeprof.py`). VU1 ~50% wątku EE, z tego ~25% obsługa flag.
  - **VU1 AOT**: XGKICK naraz (długość z GIFtagów, jedno kopiowanie; `GT3_AOT_SLOWKICK=1`), flagi iloczynu zerowego
    bez long double, **szybka ścieżka żywych flag FMAC** w generatorze (wynik/iloczyn normalny niezerowy → flagi =
    znaki, wpis przez `aotFlagsPlain`; `GT3_AOT_SLOWFLAGS=1` = pełna ścieżka), `AOT_COMMIT` (commit tylko gdy coś
    dojrzało). Weryfikacja AOT: 0 różnic. **Pułapka:** zwiększenie głębokości analizy żywotności flag w generatorze
    (64 → 512 par) dawało różnice w weryfikacji (~250/140 tys.) — analiza jest gdzieś niepoprawna przy długich
    ścieżkach; zostaje 64 (`GT3_AOT_DEPTH`). Wejście `3c68` czyta flagi poprzedniego programu, więc koniec programu
    musi zostać żywy; JR liczony zachowawczo po wszystkich początkach bloków (powroty z BAL nie są w logu).
  - Nowe wejścia VU1 (1978, 17b8, 1b28) dopisane do `gt3-data/recomp/vu1/entries.txt` i przegenerowane.
  - **Tempo vsync**: terminy vsync liczone od poprzedniego terminu — po wolnym fragmencie emulacja „nadrabiała”
    (gra szybsza niż 60 Hz). Teraz zaległość > 100 ms jest porzucana (`GT3_VSYNC_CATCHUP=1` = stare).
  - Skrypt pomiaru `scratchpad/race.ps1` wypisuje też średnią z pierwszych 8 odcinków wyścigu (przelot kamery +
    odliczanie + start — najcięższy, porównywalny fragment).
  - **Wynik:** wyścig Arcade (Super Speedway) w większości **pełne 60 kl./s** (1,00 s/60 vsync, ograniczone tempem),
    z wieloma autami w kadrze ~50–55 kl./s (1,1–1,2), przelot kamery/odliczanie ~1,3–1,4. Na początku sesji 3,6.
  - **Do przetestowania ręcznie:** płynność wyścigu i czy gra nie przyspiesza po wczytywaniu; dźwięk (IOP wsadowo).
  - Pomiar bez regulacji tempa: `GT3_NOPACE=<sekunda>` (od tej chwili bez czekania na czas rzeczywisty — wcześniej
    menu przelatuje i sekwencja pada się rozjeżdża). `race.ps1` podaje teraz średnie odcinków 2–9 (przelot kamery,
    odliczanie, start) i 10–17 (jazda); pierwszy odcinek (przejście) pomijany, bo próg go raz łapie, raz nie.
  - W jeździe ogranicza wątek GS (`m_flusher` zajęty ~100%; sprawność pasów ~0,85 — `[bandstat]` przy
    `GT3DBG_WAITSTAT=1`), w przelocie kamery wątek EE. Bez zysku (wykluczone): mniej wątków puli (wolniej), niższy
    priorytet puli (`PS2X_GS_POOLPRIO`), aktywne czekanie w puli (`PS2X_GS_SPIN`, domyślnie 0), usunięcie commitu przed
    żywym FMAC w AOT (wolniej — częstsze pełne commity).
  - Wgrania: ~7000/s, ~100 MB/s (GT3 co klatkę przesyła tekstury). Rozpakowanie bez wywołań (`UpWriter`, P4/P8/CT32;
    `PS2X_GS_SLOWUPLOADWRITE=1`) i równolegle grupami po 32 wiersze dla dużych (`PS2X_GS_SERIALUPLOAD=1`).
  - Trójkąty: atrybuty (z, kolor, s/t/q, u/v, mgła) jako funkcja liniowa px w wierszu (`PS2X_GS_SLOWATTR=1` = stare),
    wynik wczesnego testu Z przekazywany do zapisu (bez drugiego odczytu Z).
  - **Wynik (bez regulacji tempa): jazda 1,00 s/60 vsync (pełne 60 kl./s), przelot kamery/odliczanie ~1,2.**
    Menu i ekrany przejść bez zmian (porównane zrzuty).
  - Dalej: szybka ścieżka UNPACK VIF1 (bez maski, MODE 0, CL ≥ WL; `GT3_VIF_SLOWUNPACK=1`), szybkie opróżnianie
    potoków VU1 na końcu programu (przeskok do ostatniego cyklu gotowości; `PS2X_VU_SLOWFLUSH=1`), wpisy flag
    zatwierdzane w kolejności wydania (ważne przy rzadszych commitach). Tempo w granicach szumu.
  - **Pułapka pomiarowa:** pojedyncze przebiegi potrafią się różnić o ~20% (raz 1,44 zamiast 1,2 przy tym samym
    kodzie) — porównania A/B robić po 3 przebiegi. Usunięcie commitu przed żywym FMAC wyglądało na zysk tylko dlatego,
    że pełny potok flag przerywał programy VU1 (`[VU1 reserved upper] ... 0xffffffff` w logu); z poprawnym commitem przy
    braku slotu jest wolniej (1,44/1,13) — wycofane. Sprawdzać log pod kątem `reserved`.
  - Demo rajdowe (bez regulacji tempa) 0,6–1,0 s/60 — z zapasem. Kafli na niebie w demie nie widać (3 przebiegi,
    zawsze ta sama trasa rajdowa) — nie odtworzone. 6 przebiegów `hanghunt` bez zawieszeń i awarii.
  - Następny duży krok (jeśli przelot kamery ma mieć 60 kl./s): VU1/VIF1/GIF na osobnym wątku (jak na PS2, VU1 działa
    równolegle z EE). Wątek EE: VU1 ~44%, VIF ~8%, GS ~13%, kod gry ~8%. Ryzyko: synchronizacja stanu VIF1/DMA,
    przerwań i kolejności ścieżek GIF (PATH1/2 z wątku VU, PATH3 z EE).
  - **Miara klatek:** `[gt3stat] ... fin= flip=` — `flip` = liczba vsynców, przy których zmienił się DISPFB1/2 (zamiana
    buforów = wyrenderowana klatka), `fin` = zdarzenia GS FINISH. `race.ps1` wypisuje „kl/s (zamiany buforów)”.
    Przy asynchronicznym GS samo s/60 vsync myli (vsync idzie równo, a gra gubi klatki). Wynik bez wątku GIF:
    przelot kamery 40–46 kl./s, jazda 60 kl./s.
  - **Próba: wątek GIF** (`GT3_GIF_THREAD=1`, domyślnie wyłączony): pakiety GIF po arbitrażu do kolejki FIFO
    przetwarzanej przez osobny wątek; metody GS wołane z EE poza kolejką czekają na jej opróżnienie (`g_gsGifDrain`,
    `GT3DBG_WAITSTAT=1` → `[gifdrain]`), natywne skróty PATH3 wyłączone w tym trybie. Obraz poprawny, przelot kamery
    46–50 kl./s (+10%), ale przed wyścigiem ~4 s przestoju (licznik DMA VIF1 stoi — gra czeka na zdarzenie GS, pewnie
    limit 120 vblanków) → start wyścigu ~3,4 s później. Do zbadania, jeśli ta droga ma być domyślna.
    Wykluczone (2 próby): zgubione przerwanie FINISH (FINISH przychodzący przed skasowaniem poprzedniego jest teraz
    zgłaszany po skasowaniu — `g_gsFinishPending`, tylko w trybie wątku GIF) — przestój bez zmian (fin=2, licznik DMA
    VIF1 stoi ~4 s przy ~40 s, po wyborze auta). Następny krok: zrzut wątków EE w czasie przestoju (na co czeka).

### Wydajność (kamień 6, 2026-11-05)

- Profilowanie: `xperf` (Windows Performance Toolkit, jest w `Program Files (x86)\Windows Kits\10`, konto ma
  admina) + PDB z samymi symbolami publicznymi: w `out\build\dev` ustawione
  `CMAKE_EXE_LINKER_FLAGS_RELEASE=/INCREMENTAL:NO /DEBUG` (tylko relink). Sesja:
  `xperf -on PROC_THREAD+LOADER+PROFILE -stackwalk Profile`, `xperf -d t.etl`, potem z `_NT_SYMBOL_PATH`
  na katalog exe: `xperf -i t.etl -symbols -a profile -detail` (płasko) lub `-a stack -butterfly` (HTML).
  Funkcje statyczne/anonimowe są przypisywane do najbliższego symbolu publicznego (np. „vector::assign”).
- Wynik (wyścig): wątek EE = 100% jednego rdzenia; z tego rasteryzacja GS ~60% (wywoływana synchronicznie
  przez XGKICK VU1 → GIF → `GSCpuBackend::Submit`), interpreter VU1 ~30%, kod gry mało. Wyścig to ~5 mln
  pikseli/klatkę (scena ~1,9 mln w trójkątach + ~6 pełnoekranowych przebiegów sprite'ów DOF/kopii) przy
  ~40 ns/piksel → ~240 ms/klatkę. Na 60 kl./s potrzeba ~3 ns/piksel: bez wielowątkowej/SIMD rasteryzacji
  (albo backendu GPU) się nie da.
- Wykluczone / bez efektu: (1) „cache” stron tekstur (memcpy 8 KB przy zmianie strony) — wyłączony,
  brak zmiany czasu; (2) kopiowanie reszty danych VIF1 przy każdym bicie I (O(n²)) — teraz przesunięcie,
  brak zmiany czasu; (3) **wątek rasteryzacji** (kolejka poleceń, odczyty czekają na opróżnienie;
  `PS2X_GS_THREAD=1`, domyślnie wyłączony): ekran języka 21 → 28 vblank/s, ale po wyborze języka gra
  utyka na animacji przejścia (przyczyna nieznana; logika gry ucieka przed rysowaniem) — do zbadania.
- **Działa: równoległe pasy wierszy** w DrawSprite/DrawTriangle dla prymitywów ≥ 8192 px (pula wątków
  `RowPool` w gs_cpu_backend.cpp, synchronicznie — wywołujący czeka, więc gra nie widzi różnicy;
  `PS2X_GS_RASTER_THREADS=N`, 1 = wyłącz). Menu/ekran języka: 21 → **60 vsync/s** (pełna prędkość),
  wyścig 2,7 → 3,3 kl./s. W wyścigu wątek EE: ~50% rasteryzacja (głównie małe trójkąty ~270 px na wątku EE),
  ~43% interpreter VU1. Następne: interpreter VU1 i koszt piksela małych trójkątów.
- Interpreter VU (ps2_vu1_core.cpp) jest dokładny co do cyklu; `commitReadyPipelines` skanował wszystkie
  potoki 2× na cykl. Teraz pamięta najbliższy cykl gotowości (tablica po `this`, bo zmiana `ps2_vu1.h` =
  pełna przebudowa; `PS2X_VU_NOCOMMITCACHE=1` wyłącza): wyścig ~19 → ~16–18 s na 60 vsync (~3,5 kl./s).
- **Odkładanie prymitywów (działa):** `Submit` odkłada do 1024 prymitywów, `FlushDeferredUnlocked` rysuje je
  równolegle pasami wierszy ekranu (każdy wątek przechodzi wszystkie prymitywy w kolejności, przycięte
  scissorem do swojego pasa → kolejność pikseli zachowana). Opróżnianie przy każdej innej metodzie backendu
  (CLUT, transfery, odczyty, snapshot do prezentacji). Synchronicznie, więc bez problemu wątku GS.
  `PS2X_GS_NODEFER=1` wyłącza. Wyścig ~13 s/60 vsync (~4,6 kl./s), obraz i menu bez zmian.
- Profil z prawdziwymi symbolami: na końcu `ps2xRuntime/CMakeLists.txt` lokalnie dopisane
  `set_source_files_properties(<pliki VU/GS> PROPERTIES COMPILE_OPTIONS "/Zi")` (linia `# GT3DBG-PROFILE`,
  wykluczona z gt3.patch przez `":!ps2xRuntime/CMakeLists.txt"`). Bez tego anonimowe funkcje są przypisywane
  do sąsiednich symboli publicznych (fałszywe „vector::assign” itp.).
- VU: producenci obniżają `next` (najbliższy cykl gotowości), skan i minimum w jednym przejściu,
  `advanceTo` przeskakuje cykle bez zdarzeń (gdy nie trwa XGKICK). Wyścig ~12 s/60 vsync (~5 kl./s).
  Profil (wyścig): rasteryzacja trójkątów (lambda DrawTriangle, WritePixel, combineTexture, ReadTexture,
  LookupCLUT, lerpChannel) wciąż największa, potem VU (commitReadyPipelines ~3,5 s/20 s, run, normalizeOperand).
- Pasy: granice pasa w `thread_local t_bandY0/1` (DrawSprite/DrawTriangle/WritePixel je respektują) zamiast
  kopii prymitywu z przyciętym scissorem; zakres Y prymitywu liczony raz; pasy po ≥4 wiersze, do 8×wątki.
  Prymitywy ze sprzężeniem (tekstura nakłada się na bufor ramki) rysowane szeregowo. Wyścig ~10 s/60 vsync
  (~6 kl./s). Pułapka: lambda nie przechwytuje zmiennych `thread_local` — w wątkach puli to inne obiekty
  (crash przy starcie); przekazywać przez zwykłą referencję.
- Wątek EE (wyścig): ~38% czekanie na rysowanie pasów (opróżnianie głównie przez LoadClut), ~45% VU1.
- Pomiar licznikami (chrono w VU1Interpreter::run i FlushDeferredUnlocked): na ~10 s wyścigu VU1 run ~8 s
  (z GIF/GS przez XGKICK), opróżnianie ~2,5 s → **interpreter VU1 jest głównym wąskim gardłem**.
- Wykluczone: (1) migawki CLUT zamiast opróżniania przy LoadClut — brak zysku, wycofane; (2) przebudowy
  cache dekodera VU (MPG) — rzadkie (<500 na przebieg).
- VU: `normalizeFmacResult` liczył każdy wynik FMAC drugi raz w `long double` tylko dla flag; dla normalnych
  wyników float (nie 0/denormal/inf/±MAX) wartość się nie zmienia, flagi = znak → szybka ścieżka
  (`PS2X_VU_EXACT_FLAGS=1` przywraca). VU ~8,3 → ~7 s na okno, wyścig ~9,7 s/60 vsync (~6 kl./s).
  Dalej w VU: kopiowanie VF przed/po instrukcji (opóźnione zapisy), calculatePairReadyCycle, krokowanie XGKICK.
- VU drobne: XGKICK robił `m_xgkick = {}` (zerowanie+kopia 64 KB bufora pakietu przy każdym XGKICK) —
  teraz zerowanie pól; kopiowanie qwordu memcpy. Maski zajętych slotów potoków w commitReadyPipelines.
  Razem wyścig ~9,1 s/60 vsync (~6,5 kl./s). Zyski z mikrooptymalizacji interpretera VU maleją (2–5%);
  większy krok wymagałby rekompilatora mikrokodu VU1 albo VU1 na osobnym wątku (asynchronicznie z EE,
  jak na PS2) — oba duże.
- Build dev bez LTCG: małe funkcje VU wywoływane między plikami (normalizeOperand ~1,8 s/20 s) nie są
  wstawiane. Inline `normalizeOperand` w upper/lower (makro na lokalną funkcję) → ~8,4 s/60 vsync (~7 kl./s).
  /GL tylko dla 3 plików VU dało ~3% (szum) — nie wprowadzone.
- Rasteryzer: `std::floor/ceil/lround` (wywołania ucrtbase, MSVC bez SSE4.1) zamienione na rzutowania;
  mały zysk (rysowanie jest na wątkach puli). Wyścig ~8 s/60 vsync (~7,5 kl./s).
- Pułapka: `ps2xRuntime/CMakeLists.txt` ma końce LF — skrypt dzielący po CRLF wyczyścił plik (przywrócony
  z gita). Lokalna linia `# GT3DBG-PROFILE` (/Zi dla plików VU/GS/VIF) jest poza gt3.patch.
- **Kamień 5, otwarte:** powtórka demo i przejście do ekranu tytułowego mają zepsute kolory (fiolet/biel
  na jednej z losowych tras demo, zielony odcień przy przejściu z logo GT3). Zwykły wyścig demo poprawny.
- **Przejście/powtórka = korekcja kolorów „channel shuffle”** (log rysowań: `GT3_DRAWLOG=<vsync>` w GT3DBG,
  usunięty): bufor ekranu 0xA0 (CT24) czytany jako PSMT8 (tbp 0x1400, tbw 2, CLUT 0x3E80), 3 przebiegi
  sprite'ów 64×32 do FBP 0x1F3 (FBMSK ff000000): R (rgba 80,0,0, abe=0, uv 0,0–8,64), +B (uv 8,0–16,64),
  +G (uv 4,2–12,66), blend 0x68 + FIX 0x80 (addytywnie); potem paski 8×32 (T8 tbp 0x3E84, CLUT 0x3E60..)
  z powrotem do 0xA0. Zgodnie z columnTable8: T8 (0,0)=bajt R, (8,0)=B, (4,2)=G.
  Poprawka: sprite'y próbkowane w całkowitych współrzędnych pikseli z ułamkowym XY/UV (wcześniej +0,5 i UV
  obcięte → przy 2 tekslach/piksel inny wiersz PSMT8). `PS2X_GS_SPRITE_HALFPIXEL=1` = stare. Efekt: odcień
  z zielonego na cyjanowy (B już działa), **R nadal brak** — następny krok: zrzut 0x1F3 po przebiegu R
  i porównanie z bajtami R bufora 0xA0; sprawdzić, czy przebieg R (abe=0) nie jest nadpisywany.
- Ustalone (log w DrawSprite): sprite'y 8×16 px, u 1:1, v krok 4 (wiersze 0,4,8… = bajty R wg columnTable8;
  stare +0,5 dawało wiersze 2,6,10 = G → zielony odcień). Kolory wierzchołków poprawne (R: 80,0,0; B; G),
  teksele trafiają w bajty. Cyjan bierze się z **palety 0x3E80**: wpisy mają R≈0x17, G≈B≈0x80 (np. 0x00828217),
  więc kanał R wychodzi ~5× za ciemny. Do sprawdzenia: skąd paleta 0x3E80 (upload z EE czy rysowana
  wcześniej w klatce; przebiegi do FBP 0x191 CT16/0x1F4) i czy na PS2 przejście też jest zabarwione.
  **Trop:** paleta 0x3E80 jest wgrywana z EE co klatkę (BITBLT dir=0, CT32 32×32 do dbp 0x3E80), a jej
  wpisy są niemonotoniczne/losowe (np. 00:0080200a 11:00302528 22:00c004b2…), więc to nie krzywa korekcji —
  podejrzany błąd w kodzie EE liczącym tablicę (FPU/VU0 makro, jak wcześniej CVT.W.S). Następnie: znaleźć
  źródło w RDRAM (MADR łańcucha PATH3 dla tego BITBLT albo szukanie wzorca w zrzucie RDRAM) i funkcję,
  która tę tablicę wypełnia; porównać wynik z oczekiwaną krzywą (np. gamma/fade).
  Sprawdzone: LoadClut (CSM1, 16×16 z cbp, bw 1) poprawny. Dane wgrania 0x3E80 leżą w RDRAM pod 0xCED0C0
  i 0xDAA180 (4 KB, różne kopie), wyglądają na dane skompresowane/losowe (~210 wartości na kanał), nie
  na LUT. Hipoteza: 0x3E80 współdzielą inne dane (np. tekstura) i prawdziwa tablica korekcji jest
  nadpisywana albo wgrywana w innej kolejności (arbitraż PATH2/PATH3, zależność od FINISH/SIGNAL).
  Odłożone — wpływa tylko na przejście demo→tytuł i powtórkę.
  Uwaga: `m_vtxQueue[0]` w logu frontendu to nie v0 bieżącego prymitywu (bufor cykliczny) — kolory
  wierzchołków logować z `batch.vertices` w backendzie.
- **Do sprawdzenia:** zielony/fioletowy odcień przy przejściu z demo do ekranu tytułowego. Raz w powtórce demo (znak wodny „GRAN TURISMO 3”) obraz miał zepsute kolory
  (biało-niebiesko-fioletowe). Nie powtórzyło się w tym samym momencie w kolejnym przebiegu; podejrzane
  obejście DOF (`g_gt3CompositeZPass`, ZBUF 0x1A1) w innym przebiegu powtórki.
- Kierunki: szybsze ścieżki pikselowe (trójkąty: krawędzie inkrementalnie zamiast pełnych barycentrycznych
  w float/double na całym bbox; specjalizacja WritePixel/SampleTexture pod PSMCT32/PSMT4/Z24), równoległe
  pasy wierszy dla dużych sprite'ów, interpreter VU1 (normalizeFmac*/commitReadyPipelines są drogie).
- Pliki RoFS (GT3.VOL): spis jest zaszyfrowany na płycie, w RAM rozpakowany (nazwy ok. 0x4CB000).
  Bazy: wyszukiwanie binarne po 64-bitowym hashu (0x232658/0x232768), rekordy `paramdb_eu.db` itd.
- Diagnoza: wrappery `replaceFunction(addr, lambda)` + `lookupFunction` (oryginał) świetnie logują argumenty;
  uwaga: funkcje nie-liście mogą „wrócić” w połowie (pc wewnątrz) — wyniki czytać tylko z funkcji-liści.
  Zrzut RDRAM do pliku z bloku `[gt3stat]` + wyszukiwanie wzorców w Pythonie.
- Diagnoza wątków EE: tymczasowy zrzut w bloku `[gt3stat]` (EeScheduler.cpp): status/pc/ra wątków
  i adresy kodu ze stosu — działa dobrze do znalezienia pętli oczekiwania (wątek główny = id 1,
  wątek renderujący = id 9, entry 0x1013C0, wywołuje vtable sceny z gp−0x6EE0).
- Uwaga: `sed -i` z Git Bash i `Set-Content` w PowerShell psują CRLF/BOM w plikach PS2Recomp —
  wtedy `git apply -R gt3_diag.patch` nie przechodzi. Edytować narzędziem Edit.
- Narzędzie: `capstone` (pip) do deasemblacji IRX; uwaga, w pliku nie nazywać skryptu `dis.py` (kolizja z modułem).
  Indeksy importów: zaślepka `jr ra` pod adresem X ma numer funkcji w X+4.
