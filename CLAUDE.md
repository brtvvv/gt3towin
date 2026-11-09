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

Stan (2026-11-09): menu, Arcade, **GT Mode: salon, zakup auta, zapis/odczyt postępu, wyścigi (Sunday Cup) i testy licencji
(z DEMO/powtórką)**, **filmy: opening i tła menu (emulacja IPU, domyślnie)**, dźwięk SPU2 z pogłosem, mapowanie klawiszy
(`keys.ini`), spusty pada i kierownica (konfiguracja w `keys.ini`), pełny ekran/proporcje. Wyścig 60 kl./s w jeździe,
przelot kamery ~47–50 kl./s. **Wątek VIF1 domyślnie (2026-11-09, `GT3_VIF1_THREAD=0` = stare)**: w ciężkich scenach
gra biegnie w tempie rzeczywistym (vsync 60/s, gubi klatki jak PS2) zamiast zwalniać — demo rajdowe było w połowie
tempa (vsync 31/s), licencja B-1 ~35 kl./s w zwolnionym tempie. Wątek GIF też domyślnie (`GT3_GIF_THREAD=0`).
Pamięć stabilna (~195 MB). Salon aut nie migocze (poprawka ZTE=0 bez zapisu Z).
Szczegóły i historia: sekcje niżej oraz docs/HISTORIA_RECOMP.md.

**Czekam na użytkownika:** odsłuch dźwięku i test klawiatury/pada/kierownicy (lista „Do przetestowania ręcznie” niżej).

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
1. **Więcej kl./s w ciężkich scenach** (kamień 4): licencja ~43 kl./s, przelot ~51, demo rajdowe ~32 (tempo gry zawsze
   rzeczywiste). Przelot/licencja: ogranicza opóźnienie wymiany EE↔VIF1 i VU1 na wątku VIF1 (szczegóły i wykluczone
   kierunki w sekcji wydajności niżej). Demo: rasteryzacja na wątku GS (DrawTriangle 42%, pełnoekranowe DrawSprite 36%;
   gorące: próbkowanie + combineTexture + zapis piksela ~gs_cpu_backend.cpp:2818) → SIMD rasteryzatora (duża praca).
   Bez wpływu: `PS2X_GS_PARMIN` (próg puli wierszy), dzielenie w UNPACK. Profil linii: `GT3_SAMPLE_LINES=funkcja`.
2. GT Mode szerzej: wyścig do mety (nagroda, wyniki, powtórka — autopad nie dojeżdża; potrzebny autopilot czytający
   pozycję auta z pamięci albo test ręczny), Tune Shop, kolejne licencje, inne trasy GT (filmy końcowe — sprawdzone).
   Sprawdzone: licencja B-1 (jazda → FAIL → menu → DEMO), wyścig Arcade 170 s bez wycieków. Arcade: Super Speedway,
   Mid-Field, Smokey/Swiss Alps (rajd), Trial Mountain bez zawieszeń (też z wątkiem GIF; Mid-Field II zablokowana na
   tym zapisie). Z zapisem: wybór trasy ~21 s, Prawo co 2 s = następna trasa, potem X co 3 s. Sunday Cup z wątkiem GIF OK.
   Licencja B-2 (Viper GTS) też pełny cykl: sekwencja B-1 z `29:0020:0.3` (Prawo na liście testów), dalsze X przesunięte.
   Tune Shop (z mapy: Prawo + X; Suspension → zakup) i GT Auto (2× Lewo + X; myjnia pobiera 50 Cr, model auta) OK.
   Machine Test (2× Lewo, Góra, X): Maximum Speed Trial na Test Course — jazda, pomiar „Best” 155,7 km/h (Cuore) OK.
   Arcade: Time Attack (Dół + X: Time Trial na Mid-Field, AUTO DRIVE, Time Attack Menu) i Bonus Items (4× Dół z odstępem
   1,5 s — przy 1 s gra gubi naciśnięcia) OK; 2 Player Battle wymaga drugiego pada (test ręczny n).
   **Licencja B-1 ZALICZONA (złoto 0'35.057)**: sekwencja B-1 do `34:4000:0.3`, potem `38:4000:42.4,80.4:8000:12`
   (gaz, potem hamulec Kwadrat) → puchar 3D „GOLD” i ekran NAME ENTRY poprawne. Trafia ~1/3 przebiegów (start testu
   pływa o ~1 s; G=42 staje przed strefą, G=43 przestrzeli). `GT3_AUTOPAD_VSYNC=1` = czas sekwencji z vsynców gry
   (nie poprawił powtarzalności — zmienny czas wczytywania). Do zrobienia: NAME ENTRY → OK (Dół ×6, X), zapis licencji.
   Decyzja (2026-11-09): przelot 49 kl./s na razie akceptowany; wątek VIF1 = osobny, wielogodzinny projekt.
   Sekwencje: DEMO licencji = B-1 + `42:4000:40,114:0020:0.3,116:0020:0.3,118:4000:0.3`; race.ps1 ma `-Pad/-Hold/-Timeout`.
3. Dźwięk: czeka na odsłuch użytkownika (PMON/sweep niepotrzebne — GT3 ich nie używa; gaussowska już jest).
4. Kamień 5: GS na GPU — ocena opcji (2026-11-09):
   (A) pełny backend GPU za interfejsem `GSRasterBackend` (gs_backend.h: Submit/LoadClut/UploadImage/ReadVram/Present)
       jak renderer HW PCSX2 — wyższa rozdzielczość, ale GT3 używa sztuczek zależnych od układu VRAM (kopia Z jako
       tekstury w DOF, palety 0x3E80, odczyt GS→EE do flary, sprite'y kopiujące bufory) → miesiące pracy, wysokie ryzyko;
   (B) programowy rasteryzator w 2× rozdzielczości — 4× koszt wypełniania, te same problemy z kopiami przez VRAM; odrzucone;
   (C) filtry na wyjściu (prezentacja raylib: wygładzanie skalowania, ostrzenie) — tanie, bez ryzyka.
   Decyzja: (C) teraz, (A) jako osobny projekt po osiągnięciu 60 kl./s wszędzie.

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
   Metoda: stan wątków IOP przed/po zdarzeniu + deasemblacja IRX (`tools/irxdis.py plik.irx baza od do`; skoki `jal`
   w IRX są względne do bazy modułu; tablica importów: nagłówek 0x41E00000 + nazwa biblioteki, potem pary `jr ra;
   addiu zero,zero,N` = funkcja N, np. thsemap 6 Signal/8 WaitSema, thbase 0x18 SleepThread, sysclib 4/5 setjmp/longjmp).
   Sekwencje (zapis z Cuore; GT3_AUTOPAD wymaga `sek:maska:czas` — poniżej dopisać `:0.3` do wpisów bez czasu): Sunday Cup `9:0040,11:4000,17:0080,19:4000,24:4000,28:4000,31:0020,33:4000,37:0020,
   39:4000,43:4000,47:4000,51:4000,55:4000,59:4000:60` (start ~56 s); licencja B-1:
   `9:0040,11:4000,17:0010,19:0080,21:4000,26:4000,30:4000,34:4000,38:4000,42:4000:40`. Trójkąt (0x1000) = wstecz.
   Zakup Cuore + zapis: zob. `C:\gt3-data\recomp\tools` (sekwencja w historii; po zakupie Trójkąt → mapa).
1b. (zrobione) Poprawka ZTE naprawiła też wybór koloru w Arcade (model 3D auta) i tło Mid-Field w menu trasy.
   Arcade z zapisem: `9:4000,13:4000,17:4000` → wybór trasy ~20 s (Prawo = następna trasa), dalej X → klasa → auto/kolor.

**ROZWIĄZANE (2026-11-09): śmieci na ekranie auta w salonie / po zakupie.** Przyczyna: backend GS ignorował
TEST.ZTE — przy ZTE=0 stosował ZTST (=0 NEVER) i odrzucał wszystkie piksele. GT3 kopiuje scenę salonu (fbp 0x165)
sprite'ami z TEST=0 do bufora poświaty 0x115 i dalej na ekran; kopia nic nie zapisywała, zostawała stara zawartość
VRAM (tekstury T4 czytane jako CT32). Teraz ZTE=0 = test Z wyłączony (`gsEffectiveZtst`, gs_cpu_backend.cpp;
`PS2X_GS_ZTE_IGNORE=1` = stare). Model auta w salonie i ekran „purchase complete” poprawne, wyścig bez zmian.
Metoda, która zadziałała: `GT3_EVLOG` (lista rysowań klatki z TEST) + `GT3_TEXDUMP=tbp:tbp` (zrzut bufora/tekstury
w chwili pierwszego rysowania, które go czyta, do `C:/gt3-data/runs/tex_<tbp>_N.ppm`) — porównanie źródła i wyniku
kopii wskazało przebieg, który nic nie zapisuje. `GT3_EVVTX=1` dodaje wierzchołki sprite'ów.

**Do przetestowania ręcznie (zbiorczo):** (0) **DŹWIĘK** (nowe, 2026-11-09): uruchomić grę i posłuchać menu (muzyka
GT Mode), dźwięków kursora i wyścigu (muzyka + silnik). Albo odsłuchać nagrania `C:\gt3-data\runs\gt3_menu_spu2.wav`
(muzyka od ~13 s), `gt3_race_spu2.wav` (wyścig od ~38 s) i `gt3_opening_spu2.wav` (film otwierający, 35 s). Zgłosić: szum zamiast muzyki? zła wysokość/tempo?
trzaski? Wyłączenie dźwięku: `PS2X_SPU2_MUTE=1`, cała emulacja SPU2 off: `PS2X_SPU2_OFF=1`.
(a) GT Mode od zera: kupić auto w Car Dealer, zapisać (My Home → Save Game → slot 1 → OK), wyjść z gry, uruchomić
ponownie — kredyty i auto muszą się zgadzać (u mnie działa: 6 860 Cr + Cuore). Uwaga: stary zapis w `mc0` jest
mój testowy (Cuore) — można go usunąć, by zacząć od nowa. (b) Wyścig GT (Go Race → Beginner League → Sunday Cup →
Entry) i test licencji B-1 do końca: wyniki, nagroda, powtórka. (c) Klawiatura bez `GT3_AUTOPAD` (X/Spacja =
Krzyżyk, V = Trójkąt/wstecz, Enter = Start, strzałki) i pad (XInput) — czy działa sterowanie w wyścigu.
(d) F11 pełny ekran, F10 proporcje. (e) Flara słońca [moje ustalenia 2026-11-09: GT3 co ~0,2 s czyta przez GS→EE
blok 64×8 CT32 z rotujących adresów (sbp 0x3680…0x3FA0, `GT3_RBLOG=1`); runtime oddaje wynik poprzedniego zapytania
o tym samym rozmiarze bez względu na adres (`GT3_GS2EE_KEYADDR=1` = także po adresie). Scenariusz „auto utknęło przodem
do ściany” w race.ps1 `-Hold 60` jest niedeterministyczny (~2/3 przebiegów) — porównanie wariantów niejednoznaczne]: w moim teście (auto stojące przodem do ściany Super Speedway)
flara rysowała się na środku ściany — sprawdzić, czy przy jeździe flara znika za przeszkodami; jeśli nie, porównać
z `PS2X_GS_SYNCREADBACK=1` (synchroniczny odczyt GS→EE do testu widoczności słońca) i zgłosić.
(g) **Mapowanie klawiszy** (nowe): w folderze gry jest `keys.ini.example` — skopiować jako `keys.ini`, zmienić np.
`CROSS = X, SPACE` na inne klawisze, uruchomić grę i sprawdzić, czy działa (w logu `[keys] wczytano...`; błędne nazwy
są zgłaszane). Bez pliku = domyślne klawisze. Inna ścieżka: `PS2X_KEYS=plik`.
(h) **Kierownica FANATEC / pad** (nowe): runtime widzi u Ciebie urządzenia: 0 „Handbrake”, 1 „TK Shifter Adapter”,
2 i 3 „FANATEC Wheel” (wcześniej „Handbrake” był używany jako pad 0 — mógł np. skręcać auto). Teraz pad wybierany
po nazwie (Xbox/XInput/Controller/DualSense…) albo `PS2X_PAD_INDEX=n`; spusty pada = nacisk gazu (Krzyżyk) i hamulca
(Kwadrat), `PS2X_PAD_NO_TRIGGERS=1` = stare. Kierownica: (1) w folderze gry w cmd: `set PS2X_PAD_LOG=1` i uruchomić
`ps2EntryRunner.exe CORE.elf 2> padlog.txt`, w menu kręcić kierownicą i wciskać pedały, zamknąć; (2) w padlog.txt
linie `[padlog] n 'nazwa': ...` — które liczby się zmieniają (oś skrętu, gazu, hamulca) i jakie są przy puszczonych
pedałach; (3) wpisać do keys.ini sekcję WHEEL/STEER_AXIS/GAS_AXIS/GAS_REST/BRAKE_AXIS/BRAKE_REST (opis
w keys.ini.example) albo przesłać mi padlog.txt. Uwaga: osie przy pierwszym odczycie były 0 (nie mogłem skalibrować).
(i) **Tempo gry** (nowe, wątek VIF1 domyślnie): w teście licencji B-1 i na trasach rajdowych gra powinna mieć
normalną prędkość (zegar testu ≈ prawdziwe sekundy), choć z ~35 kl./s. Jeśli coś miga/zacina się bardziej niż
wcześniej, uruchomić z `set GT3_VIF1_THREAD=0` i porównać.
(j) **16:9** (sprawdzone automatycznie 2026-11-09): menu tytułowe → Option (ostatnia pozycja; menu się zawija) →
pierwsza ikona → VIEW SELECT 16:9, potem w oknie F10 aż do 16:9 (albo `PS2X_ASPECT=169`). Wyścig ma poprawne
proporcje. Ustawienie gry zapisuje się przez Save Game. Do oceny: czy 16:9 wygląda dobrze na Twoim monitorze.
(k) **Replay Theatre** (nowe): menu tytułowe → Replay Theatre (Dół ×2 + X) → Demonstration → pierwsza (License
B-1) → X. U mnie powtórka gra z niskiej kamery jadącej po torze **bez widocznego auta** (tak samo podgląd w menu
licencji). Powtórka własnego przejazdu (menu licencji → REPLAY) zaczyna się ujęciem TV z poprawnie narysowanym autem,
potem ten sam niski widok — najpewniej zamierzona kamera; jeśli na PS2 jest inaczej — zgłosić. Load Replay pokazuje
obie karty (slot 1 z zapisem: 8 096 KB wolne).
(l) **Filtr obrazu** (nowe): F9 przełącza wygładzanie skalowania (sharp/point/bilinear) — który wygląda najlepiej
w oknie i na pełnym ekranie (F11)?
(m) **Interpolacja gaussowska** (nowe): porównać `C:\gt3-data\runs\gt3_menu_gauss.wav` z `gt3_menu_linear.wav`
(muzyka od ~13 s) — gaussowska powinna brzmieć łagodniej/mniej „metalicznie”, jak na PS2.
(n) **2 Player Battle** (nie da się automatycznie — autopad steruje tylko portem 0): od 2026-11-09 port 1 (gracz 2) =
drugi rozpoznany gamepad (gracz 1 = pierwszy pad + klawiatura); wcześniej port 1 dostawał to samo co port 0
(`PS2X_PAD_MIRROR=1` = stare). Arcade → 2 Player Battle z dwoma padami: czy gracz 2 steruje swoim autem i czy
podzielony ekran działa płynnie.
(f) **Filmy** (nowe): po starcie gra film otwierający (Start pomija) — czy ma dźwięk i czy po końcu (>3 min) gra
sama przechodzi do ekranu tytułowego; tła menu (ekran tytułowy, Arcade, wybór poziomu, podgląd tras) — płynność,
błędne kwadraty, zawieszenia przy przechodzeniu między menu. Wyłączenie filmów: `GT3_NO_MOVIES=1`.

Menu tytułowe (z zapisem, ~8 s): Arcade, Gran Turismo, Replay Theatre, Load Game, Save Game, File Operation, Option
(Dół ×6 + X; zawija się — z Option jedno Dół = Arcade). Opcja VIEW SELECT 4:3/16:9 działa (gra rysuje anamorficznie).
**Filtr obrazu (2026-11-09, kamień 5 opcja C):** domyślnie „sharp bilinear” (shader GLSL w pętli prezentacji
ps2_runtime.cpp; równe krawędzie przy skali niecałkowitej), **F9** = sharp → point (stare) → bilinear,
`PS2X_FILTER=sharp|point|bilinear`.
**Okno (2026-11-09):** domyślnie 960×720, obraz 4:3 na całe okno, panel debugera ukryty (F1 pokazuje;
`PS2X_DEBUG_PANEL=1` od startu). **F11** = pełny ekran (okno bez ramki), **F10** = proporcje 4:3 → 16:9 → rozciągnięte
→ natywne (stare). `PS2X_WINDOW=1280x960`, `PS2X_ASPECT=43|169|stretch|native`. 16:9 ma sens z opcją
panoramiczną w ustawieniach gry (obraz anamorficzny).

**Dźwięk — SPU2 (2026-11-09, kamień 3, wersja 1):** nowy moduł `ps2xIOP/src/emulator/core/spu2.{h,cpp}` (nowe pliki:
przed `save.ps1` musi być `git add -N` w PS2Recomp, inaczej nie wejdą do gt3.patch). IopMemory kieruje rejestry
0x1F900000–0x1F9007FF do Spu2 (16-bit, efekty KON/KOFF/zapis portu danych), DMA kanałów 4/7 kopiuje dane RAM IOP ↔
pamięć SPU (TSA rdzenia), AutoDMA (ADMAS) → kolejka PCM. Pętla IOP (`serviceSpu2`, iop_emulator.cpp) taktuje próbkę
co 768 cykli i zgłasza IRQ 9 z SPDIF_IRQINFO przy trafieniu IRQA (zastępuje dawne przybliżenie `serviceSpu2Irq`).
Pogłos (2026-11-09): algorytm psx-spx co drugą próbkę (24 kHz), bufor ESA..EEA, wysyłki VMIXEL/VMIXER + MMIX
(0x200/0x100, 0x20/0x10, 0x2/0x1), wyjście × EVOL; GT3: EVOL 0x0FFF (subtelny), bufory 0xEC810–0xEFFFF i 0xFC810–
0xFFFFF; `PS2X_SPU2_NOREVERB=1` wyłącza; `PS2X_SPU2_LOG=1` wypisuje parametry pogłosu. Miksowanie wg PCSX2: MMIX (0x800/0x400 głosy, 0x80/0x40 wejście PCM×BVOL, 0x8/0x4 wyjście rdzenia 0×AVOL do rdzenia 1),
MVOL. **Interpolacja gaussowska** 4-punktowa jak w SPU (tabela 512 wsp. z psx-spx, sumy ~0x7F80; domyślnie od
2026-11-09; `PS2X_SPU2_INTERP=linear` = liniowa, `PS2X_SPU2_OLDINTERP=1` = najstarsza) — w menu −5 dB powyżej 16 kHz
(mniej aliasingu), RMS bez zmian; wyścig też (bez przesterowań, `C:\gt3-data\runs\gt3_race_gauss.wav`).
GT3 nie używa PMON ani sweepu głośności (diagnostyka `[spu2] PMON`/`sweep` w e.txt — w menu i wyścigu pusto),
więc ich brak nie ma znaczenia. Wyjście: raylib AudioStream 48 kHz (callback, `ps2xSpu2Pull`), bufor maks. 4096 ramek
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
Wolne miejsce w GetInfo = 8 MB minus zawartość katalogu karty (2026-11-09; `PS2X_MC_FIXEDFREE=1` = stałe 8 MB).
Zapis: `mc0/BESCES-50294GAMEDATA/` (dane 70 464 B, icon.sys, icon0.ico, thumbnail). Z zapisem gra przy starcie
sama go wczytuje i **pomija wybór języka** (menu trybu po ~8 s) — sekwencje pada dla „czystej karty” wtedy nie pasują
(czystą kartę daje usunięcie/zmiana nazwy `mc0`). GT Mode z zapisem: `9:0040:0.3,11:4000:0.3` → mapa ok. 16 s.
Wątek pod 0x266800 kręci się w nieskończoność na bindzie RPC `PJOY` (0x594F4A50, pewnie kierownica USB) — nieszkodliwe.

## Port PC (PS2Recomp): kluczowe wnioski (skrót; szczegóły i historia: docs/HISTORIA_RECOMP.md)

**Budowa i uruchomienie.** Kod runtime: `C:\PS2Recomp` (cudze repo — NIGDY commit; nasze zmiany = `C:\gt3-data\recomp\gt3.patch`
+ `gt3_diag.patch`, generuje `tools/save.ps1`; nowe pliki najpierw `git add -N`). Build dev: `out\build\dev`
(`PS2X_FAST_LINK=ON`, przebudowa ~1 min; zmiana nagłówków runtime = pełna ~45 min). Gra:
`C:\Users\brtvvv\Downloads\Gran Turismo 3 - A-Spec (Europe, Australia) (En,Fr,De,Es,It) (v2.00)` (CORE.elf, GT3.VOL, IRX,
`mc0/` karta). Rekompilacja kodu gry (runner, `ps2xRuntime/src/runner`, unity) tylko lokalnie/gt3-data.
Profilowanie: xperf + PDB (`/DEBUG`), `tools/eeprof.py`, `thr.ps1`. Awarie: WER LocalDumps + `tools/crash.py`;
zawieszenia: `tools/mkdump.py` + `tools/hang.py`.

**Architektura i wnioski (najważniejsze):**
- EE: kod gry statycznie przetłumaczony; planista wątków EE (`EeScheduler.cpp`), punkty kontrolne w pętlach
  (`g_ps2CheckpointExit` — funkcja z pętlą na początku nie może „wrócić” przy pc == entry).
- Błędy rekompilatora poprawione w generatorze (ps2xRecomp) i lokalnie w runnerze: `cvt.w.s` obcina do zera,
  `SQRT.S` bierze źródło z pola ft, `VCLIP` bity +/− i |w|. Przy regeneracji runnera poprawki wchodzą z generatora.
- VU0 (makra COP2) — wspólny stan dla wszystkich wątków EE (`gt3Vu0Load/Save`); rejestry VI to trwały stan gry.
- VU1: interpreter dokładny + **AOT mikrokodu** (`tools/vu1aot.py`, `gt3_vu1_aot.inc` z gt3-data/recomp/vu1,
  weryfikacja `GT3_VU1AOT_VERIFY=K`, `GT3_NO_VU1AOT=1`). Nowe wejścia VU1 z logu → przegenerować.
- VIF1: łańcuch DMA czytany leniwie, stall na bicie I, UNPACK CL=0, carry komend; GS FINISH (INTC 0) zgłaszany.
- GS (CPU): odkładanie prymitywów + pula pasów + kolejka zbiorów (`m_flusher`), hazardy RAW/WAR na stronach 8 KB,
  wgrania i LoadClut w kolejce, odczyt GS→EE z opóźnieniem 1–2 klatek (`GT3_GS2EE_LAG`), szybkie ścieżki trójkątów/
  sprite'ów. Obejście DOF (`g_gt3CompositeZPass`, `GT3_NO_DOF_HACK=1`). **TEST.ZTE=0 = brak testu Z**.
- Filmy: IPU emulowane (gt3_ipu.cpp, dekoder z PCSX2), libmpeg gry gra filmy normalnie. Obrazy „ipum”
  (0x266090) nadal dekoduje FFmpeg (`gt3DecodeIpum`).
- IOP: moduły z płyty na emulatorze IOP; RPC blokujące i NOWAIT dokańczane w tle; `setjmp/longjmp` prawdziwe;
  SPU2 emulowane (`ps2xIOP/src/emulator/core/spu2.*`).
- Karta pamięci: libmc gry = stuby HLE (`Kernel/Stubs/MemoryCard.cpp`), pierwsze GetInfo = −1, TRUNC > APPEND.
- Pad: klawiatura zawsze + gamepad raylib; `GT3_AUTOPAD="sek:maska:czas,..."` do testów.
- **Wydajność — stan (2026-11-09):** wątek GIF i wątek VIF1 domyślnie (`GT3_GIF_THREAD=0` / `GT3_VIF1_THREAD=0` =
  synchronicznie). Wątek VIF1: wznowienie po STC = zadanie dla wątku roboczego, zapisy IO z EE do kolejki, odczyty
  sprzętu czekają (wyjątki: GIF_CHCR bez odłożonych zapisów, pamięć VU0); przerwania z wątków przez
  `g_ps2PendingIntcMask` + zdarzenie planisty `Dmac` i drain przy vblank. Wątek GIF: spin 4000 przed uśpieniem
  (`GT3_GIF_SPIN`), DISPFB czeka na opróżnienie kolejki (`gt3DispDrain`). Wyniki: jazda 60, przelot ~51, licencja ~43
  (tempo gry zawsze rzeczywiste), demo rajdowe ~32 (ogranicza rasteryzacja). Wąskie gardło w grze: wątek VIF1 (VU1:
  commitReadyPipelines, flagi FMAC; processVIF1Data). Wykluczone/zbadane: kopia pakietów VIF1, resetScheduler,
  dzielenie w UNPACK, spin wątku VIF1 (8 rdzeni), HLE bitu I bez flag (GT3 zawsze ma flagi NUM — semafory PATH2/3:
  handler INTC5 0x25B5C0, druga strona DMAC2 0x25B738, bajty 0x4A8395..98). Narzędzia: `GT3_SAMPLE=od:dł`
  (+`GT3_SAMPLE_LINES=funkcja`), `tools/fly.ps1 -N 3`, `GT3_V1STAT=1`, `GT3_OVERLAPSTAT=1`, `GT3_INTCLOG`, `GT3_VIF1STAT`.
  Przelot (profil 2026-11-09): żaden wątek nie jest nasycony (GIF 72% — głównie spin, VIF1 65%, GS 53%, EE 30%) →
  ogranicza opóźnienie wymiany EE↔VIF1 na bitach I (~3 400/s). Wykluczone: spin wątku VIF1 (`GT3_V1_SPIN` 4000/20000:
  48–49 vs 51 kl./s) i spin planisty EE przed uśpieniem (`GT3_EE_SPIN`: ~40 kl./s). HLE semaforów bitu I na wątku VIF1
  (`GT3_V1_HLESEM=1`, domyślnie off; muteks `g_gt3SemMx` + owinięte 0x25B5C0/0x25B6D8/0x25B738/0x252330, interpreter nie
  zgłasza INTC5 na wątku VIF1): działa bez zawieszeń, ~55% bitów I bez EE, ~45% i tak czeka na DMAC2 (koniec PATH3), ale
  przelot 42 vs 51,7 kl./s — gorzej. Próba 2: popchnięcie transferów (arbiter + processPendingTransfers) przy czekaniu
  → 45,8; próba 3 (domyślny wariant): HLE tylko gdy handler zrobiłby STC, inaczej zwykłe INTC5 na EE (`GT3_V1_HLE_ALL=1`
  = wszystko) → 46,3. EE czeka przy tym mniej (`[v1stat]`), mimo to wolniej — przyczyna nieznana. **Kierunek zamknięty
  po 3 próbach** (kod zostaje, off). Statystyki `[hlesem]` przy `GT3_V1STAT=1`.
  Szczegółowa historia (wątek GIF 5 prób, artefakty DISPFB, migotanie salonu ZTE, etap 1 VIF1): docs/HISTORIA_RECOMP.md.
**Pamięć (2026-11-09):** kolejka zbiorów GS (`EnqueueSet`) nie miała limitu — przy intensywnych wgraniach (intro,
demo, wczytywanie) proces rósł do 3–4,6 GB. Teraz limit 256 MB danych w kolejce (`PS2X_GS_MAXQMB`) i 1024 zbiorów
(`PS2X_GS_MAXSETS`; mały limit, np. 32, spowalnia jazdę ~30%), `PS2X_GS_NOQUEUELIMIT=1` = bez limitu. Szczyt ~270 MB.
**Filmy (IPU) — ROZWIĄZANE (2026-11-09): opening i tła menu grają poprawnie, domyślnie włączone.**
Emulacja IPU: `ps2xRuntime/src/lib/gt3_ipu.cpp` + `gt3_ipu_core.inc` (dekoder z PCSX2 `IPU_MultiISA.cpp`, generator
`tools/ipugen.py`; kod pochodny z GPL TYLKO w prywatnym gt3.patch; wzorce w `C:\gt3-data\recomp\ref\`), dołączone
`#include` na końcu ps2_memory.cpp. FIFO wejścia = kolejka qwordów dopełniana do 8 qw z leniwego DMA toIPU (ch4,
normal + chain; IFC = min(8, rozmiar)), komendy synchronicznie (brak danych → BUSY, ponowienie przy odczycie CTRL/BP/
DMA), wyjście → DMA fromIPU (ch3, też do scratchpadu: MADR bit 31). Zapisy FIFO 0x10007010 (macierze IQ/VQ), odczyt
0x10007000, `ld` z rejestrów IPU (64 bity).
Kluczowe poprawki (każda dawała inny objaw): (1) odczyt CHCR ch3/ch4 nie może gasić STR (runtime udawał koniec DMA);
(2) `decoder.picture_structure = FRAME_PICTURE` jak w ipuReset PCSX2 (inaczej VDEC typu MB w P/B → śmieci);
(3) wznowienie łańcucha DMA z QWC>0 kończy się po reszcie, jeśli CHCR.ID = refe/end (libmpeg odtwarza kontekst IPU
po CSC; bez tego IPU czytało stare bloki pierścienia → zapętlony opening, błędne makrobloki w tłach).
libmpeg (bez symboli): play 0x25FD38(obj, nazwa), komendy 0x25FAD8 (op 4 = stan), BDEC na makroblok → RAW16 w SPR
0x70000780 → programowa MC (0x262F40, MMI) → RAW8 (kolumnami MB, 0x180 B/MB) → CSC po 0x300 MB (0x264C28) → RGB32;
kontekst IPU wokół CSC (0x264FC8 zapis / 0x264EB0 odtworzenie: MADR −= (IFC+FP)·16); pierścień wideo 64×16 KB
0xAC7300 z tagami `ref` od 0xAC6E00, koniec danych = `refe`, obsługa braku danych 0x260D88 (callback libmpeg).
Strumień PSS z IOP: PDISTR.IRX (pierścień CD 0x93890…, wyjście 0xD40D0 8×4 KB → EE 0xABED80).
Filmy końcowe sprawdzone (2026-11-09): `GT3_MOVIE_SUBST=ending_long_full` / `ending_short_full` (+`GT3_WITH_OPENING=1`)
gra wskazany `stream/<nazwa>.pss` zamiast openingu — oba grają poprawnie, krótki kończy się powrotem do tytułu;
laguna_full (krótki klip) też OK.
Inne filmy: title_full, arcade_menu_full, level_menu_full, laguna_full, menu_bg/menu_bg2, arcade_top, arcade_level.
Przełączniki: `GT3_SKIP_OPENING=1` (pomija tylko stream/opening.pss; run.ps1/race.ps1 ustawiają go domyślnie, żeby
sekwencje pada pasowały; `-Env "GT3_WITH_OPENING=1"` = z openingiem), `GT3_NO_MOVIES=1` / `GT3_NO_IPU=1` = dawne
pomijanie wszystkich filmów, `GT3_IPU_OLDRESUME=1` = stare wznawianie DMA. Obejście DOF i dekodowanie „ipum” przez
FFmpeg są niezależne od filmów. Wyścig bez zmian (race.ps1 1,34/1,06).
Diagnostyka: `GT3_IPULOG=1` ([ipu-st] co 1 s: liczniki komend, stan FIFO), `GT3_IPUVERIFY=1` (spójność kontekstu),
`GT3_IPUTAGLOG=1` (tagi refe/next, starty ch4), `GT3_IPUESDUMP=plik.m2v` (strumień do FFmpeg — porównanie wzorcowe),
`GT3_IPUOUTDUMP` (wyjście BDEC, `tools/ipuimg2.py`), `GT3_IPUCSCDUMP`, `GT3_SIFLOG=1` (SIF DMA IOP→EE + hash),
`GT3_SPRDMALOG=1`. Metoda, która zadziałała: zrzut strumienia ES → ffmpeg (wzorzec) vs. zrzuty buforów gry
(`GT3_MEMDUMP`) — zawęża błąd do IPU / kodu gry / zasilania danymi.

**Pułapki:** `sed -i`/`Set-Content` psują CRLF/BOM w plikach PS2Recomp (edytować narzędziem Edit);
PowerShell 5.1 `Get-Content -Raw` czyta UTF-8 bez BOM jako ANSI (zepsute polskie znaki) — używać
`[IO.File]::ReadAllText(p, [Text.Encoding]::UTF8)`, a w here-stringach `@"..."@` znak ` jest ucieczką (gubi backticki);
`ps2xRuntime/CMakeLists.txt` ma LF; lambdy nie przechwytują `thread_local`; `powershell -File` psuje przecinki
w argumentach (`run.ps1 -Env` — listy dawać przez `:`); comsvcs MiniDump tworzy plik tylko dla administratora;
pojedyncze pomiary wydajności różnią się o ~20% (A/B po 3 przebiegi); zrzuty `GT3_THRDUMP` są robione w chwili vsync
(wątek renderujący zawsze „czeka na vsync”).

**Kamienie:** 1 grywalność (Arcade, GT Mode, zapis — jest; XInput i klawiatura do potwierdzenia), 2 grafika (filmy — jest,
paleta 0x3E80 = zamierzony filtr powtórek), 3 dźwięk (SPU2 v1 + pogłos — do odsłuchu), 4 60 kl./s wszędzie
(przelot kamery, wczytywanie), 5 PC (rozdzielczość = GS na GPU, 16:9, pełny ekran F11 — jest).
