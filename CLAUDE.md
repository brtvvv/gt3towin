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
