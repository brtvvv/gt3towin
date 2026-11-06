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
