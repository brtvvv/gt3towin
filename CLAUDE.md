# CLAUDE.md: instrukcje dla Claude Code (gt3towin)

Projekt: dekompilacja Gran Turismo 3 A-Spec (PS2, PAL v2.00, SCES_502.94) do C/C++,
ktĂłry kompiluje siÄ™ bajt w bajt do oryginaĹ‚u. Cel to natywny port na PC, pĂłĹşniej PSP.
WĹ‚aĹ›ciciel: Bartosz (GitHub `brtvvv`).

**Pisz do uĹĽytkownika po polsku.**
Instrukcje dla niego podawaj krok po kroku, jednÄ… rzecz naraz.

## Twarde zasady

- Repo jest PUBLICZNE. Nigdy nie commituj plikĂłw gry ani nic, co z nich wygenerowano:
  `orig/`, `asm/`, `build/`, `*.bin`, `*.GT3`, `*.iso`.
  Commitujemy tylko wĹ‚asny kod (`src/`), narzÄ™dzia (`tools/`) i listy nazw funkcji (`work/`).
- Commit i push robi `sh tools/status.sh`: aktualizuje STATUS.md, commituje `src/*` i pushuje.
  Uruchamiaj go co kilkadziesiÄ…t dopasowaĹ„.
- Nie zgaduj w nieskoĹ„czonoĹ›Ä‡. Na funkcjÄ™ daj maksymalnie 2â€“3 prĂłby,
  potem dopisz jÄ… do `work/skip.txt` i idĹş dalej.

## Ĺšrodowisko

- W chmurze (claude.ai/code) najpierw uruchom `bash tools/setup_cloud.sh`.
  Pobiera plik gry z PRYWATNEGO repo brtvvv/gt3-data; jeĹ›li klon siÄ™ nie uda,
  dodaj to repo do sesji.
- Lokalnie (WSL2): `bash tools/setup_local.sh /mnt/c/.../CORE.GT3`.
- Kompilator jest w `$GT3_COMPILERS` (domyĹ›lnie `~/compilers`).
- Nigdy nie kopiuj niczego z gt3-data do tego publicznego repo.

## OszczÄ™dzanie tokenĂłw (najwaĹĽniejsze)

RÄ™czne dopasowywanie kosztuje ok. 2 tys. tokenĂłw na funkcjÄ™. ZostaĹ‚o ok. 4 tys. funkcji.
KolejnoĹ›Ä‡ pracy:

1. **Najpierw automaty, ktĂłre nie zuĹĽywajÄ… tokenĂłw.**
   `bash tools/run_local.sh 60` puszcza m2c na wszystkich rdzeniach, ocenia szkice
   i odpala decomp-permuter na bliskich trafieniach.
   Uruchamiaj w tle (`run_in_background`) i nie czytaj jego wyjĹ›cia na bieĹĽÄ…co.
   Wynik sprawdzaj przez `sh tools/status.sh` albo liczniki plikĂłw.
2. **Rodziny funkcji.** `tools/sib.py` szuka funkcji o identycznych opcode'ach
   jak juĹĽ dopasowane. Takie funkcje generuj skryptem z szablonu (podmiana adresĂłw
   i staĹ‚ych) zamiast pisaÄ‡ je rÄ™cznie.
3. **Dopiero potem rÄ™cznie.** Pobieraj partie: `sh tools/nexta.sh 20 | grep -v '^nop$'`.
   Pisz wszystkie szkice partii naraz (heredoki do katalogu roboczego),
   potem jedno `python3 tools/wf.py <katalog>/*.c*`.
   Przy nietrafionych `python3 tools/dd.py <plik>` pokazuje rĂłĹĽnicÄ™ opcode'Ăłw.
   Linie `+` to oryginaĹ‚, `-` to twoja wersja.
4. Nie wypisuj peĹ‚nego asemblera bez potrzeby, nie streszczaj wynikĂłw,
   nie powtarzaj kodu w odpowiedziach.

## NarzÄ™dzia

| Polecenie | Co robi |
|---|---|
| `sh tools/nexta.sh N [lista]` | kolejne N niedopasowanych funkcji z listy (domyĹ›lnie `work/small.txt`), sam asm |
| `sh tools/w.sh func_X cpp 'kod'` | kompiluje, porĂłwnuje, przy MATCH zapisuje do `src/manual/` |
| `python3 tools/wf.py plik...` | to samo, ale kod z pliku (nazwa pliku = nazwa funkcji; moĹĽna `#define`, `// @flags`) |
| `python3 tools/dd.py plik` | diff opcode'Ăłw twoja wersja vs oryginaĹ‚ |
| `python3 tools/try.py plik` | sprawdza wszystkie funkcje w pliku |
| `python3 tools/funcasm.py func_X` | asm jednej funkcji |
| `python3 tools/sib.py` | funkcje-rodzeĹ„stwo o identycznych opcode'ach |
| `python3 tools/ginit2.py` | generator statycznych inicjalizatorĂłw (`_GLOBAL_$I$`) |
| `python3 tools/mkwrap.py`, `libmatch.py` | dopasowania funkcji bibliotecznych (newlib) |
| `sh tools/status.sh` | STATUS.md + commit + push |

Listy robocze sÄ… w `work/`:
- `small.txt`: niedopasowane funkcje â‰¤40 instrukcji, posortowane po rozmiarze,
- `skip.txt`: pominiÄ™te,
- `fastmath.txt`: funkcje z `min.s`/`max.s`,
- `close/`: szkice bardzo bliskie dopasowania.

## Kompilator i wzorce (sprawdzone)

- ee-gcc 2.9-ee-991111-01, flagi `-O2 -G8`. Kod gry to C++, funkcje piszemy jako `extern "C"`.
  Kod jest pod 0x100000.
- **Sibcall** (`j func` na koĹ„cu) wychodzi tylko z pliku `.c`.
  W `.cpp` wywoĹ‚anie koĹ„czÄ…ce funkcjÄ™ to `jal` + epilog.
  Typ zwracany przez wywoĹ‚ywanÄ… funkcjÄ™ (int/void) zmienia wybĂłr v0/v1.
- **StaĹ‚e `unsigned`** (`0xFFFFFFFDu`, `0xFFFFFFFFu`) dajÄ… `lui/ori` zamiast `li -3`/`li -1`.
- **Zmienne w `.sdata`** (adres przez `$gp`): `extern int X;`.
  JeĹ›li oryginaĹ‚ uĹĽywa `lui/%lo`, zadeklaruj jako tablicÄ™: `extern int X[];` i uĹĽyj `X[0]`.
- **Scratchpad (0x70003000)** wymaga makra-bariery przypisanego do zmiennej lokalnej:
  `#define SPR ({ char *_s = (char *)0x70003000; __asm__("" : "+r"(_s)); _s; })`
- **volatile** na zmiennej globalnej blokuje wypeĹ‚nienie delay slotu (zakoĹ„czenie `jr ra; nop`).
- `-ffast-math` (przez `// @flags -ffast-math` w pliku) daje `min.s`/`max.s` i `sqrt.s`.
  Uwaga: oryginalne `sqrt.s`/`rsqrt.s` majÄ… inne kodowanie niĹĽ nasz gas, wiÄ™c te funkcje pomijamy.
- **WywoĹ‚ania wirtualne (gcc2):** wpis vtable ma 8 bajtĂłw (`short delta`, wskaĹşnik funkcji).
  Indeks metody = (offset w vtable â’ 8) / 8.
  vptr leĹĽy ZA danymi klasy, ktĂłra wprowadza wirtualne metody:
  `struct B0 { char p[0x1C]; virtual void f0(); ... };` daje vptr na 0x1C.
  LiczbÄ™ dummy metod generuj w powĹ‚oce: `$(for i in $(seq 0 N); do printf 'virtual void f%d(); ' $i; done)`.
  Gdy w instrukcjach wywoĹ‚ania uĹĽywany jest a1, metoda jest bez argumentĂłw i zwraca int.
- **Zwrot struktury przez ukryty wskaĹşnik:** struktura >8 bajtĂłw z konstruktorem,
  `return R(a, b);`. Struktura 8-bajtowa zbudowana na stosie: `return *(long *)&p;`.
- **Placement new:** `inline void *operator new(size_t, void *p) throw() { return p; }`
  (`throw()` daje sprawdzenie null).
- **Przekazywanie argumentĂłw:** nietkniÄ™te rejestry a0â€“a3/t0â€“t3 oznaczajÄ…, ĹĽe funkcja
  przekazuje argumenty dalej. Zadeklaruj je i przekaĹĽ jawnie.
- **PÄ™tle:** licznik z wskaĹşnikiem i `slt` na koĹ„cu to zwykle `for (i=0;i<N;i++) s->e[i]...`.
  Wersja wskaĹşnikowa (`for (E *e=...; e<end; e++)`) daje `sltu`/sprawdzenie na wejĹ›ciu.
  Wczytanie n raz przed pÄ™tlÄ…: `int n = s->n;`.
  `p += stride` na wskaĹşniku: `E *e = s->e; for (...; e++)`.
- **Indeks z duĹĽym offsetem:** jeĹ›li oryginaĹ‚ robi `(s + i*size) + off`, napisz
  `char *q = (char *)s + i * size; E *e = (E *)(q + off);`.
- **KolejnoĹ›Ä‡ gaĹ‚Ä™zi:** `bnel`/`beql` oraz ukĹ‚ad return zaleĹĽÄ… od tego, czy warunek
  jest zapisany pozytywnie czy negatywnie. Przy rĂłĹĽnicy w gaĹ‚Ä™ziach odwrĂłÄ‡ `if`.
  Pomaga teĹĽ `int r = ...; if (...) r = ...; return r;`.
- `movn`/`movz`: `int k = 1; if (!f) k = 0x100;` vs `int k = 0x100; if (f) k = 1;` dajÄ… rĂłĹĽne warianty.
- KolejnoĹ›Ä‡ porĂłwnania ma znaczenie (`x == r` vs `r == x` to `beql v0,v1` vs `beql v1,v0`).
- **64-bit:** `long` ma 64 bity. `(r >> n) & m` na long daje `dsll32/dsra32`.
  `(unsigned long)(unsigned)x * K` daje `multu` z Ĺ‚Ä…czeniem hi:lo.
- **Varargs:** `#include "../lib/ginclude/stdarg.h"`, potem `va_start` i wywoĹ‚anie wersji v-.
  Przy prĂłbach przez `wf.py` (plik w /tmp) podaj Ĺ›cieĹĽkÄ™ absolutnÄ…,
  a po MATCH zamieĹ„ jÄ… na wzglÄ™dnÄ… w `src/manual/`.
- **Biblioteki:** newlib (`src/lib/`): mprec.c, strtol, vfprintf (`-DINTEGER_ONLY`, `vfprintf-ee.c`).
  vfscanf siÄ™ nie zgadza (pominiÄ™te).
- **Nie do zrobienia tÄ… metodÄ…** (od razu do skip):
  rÄ™czne instrukcje (`ei`, `syscall`, `sync.p`), wstawki VU0 (`vmula`, `qmtc2`),
  tablice skokĂłw bez danych, funkcje z `lw` w delay slocie `jal`.

## Stan

OkoĹ‚o 7740 z ~11 700 funkcji (66%), okoĹ‚o 28% instrukcji.
SzczegĂłĹ‚y sÄ… w STATUS.md (aktualizuje go `tools/status.sh`).

## GT3 PC: AKTUALNY STAN I NASTÄPNE ZADANIA (czytaj najpierw)

Stan (2026-11-09): menu, Arcade, **GT Mode: salon, zakup auta, zapis/odczyt postÄ™pu, wyĹ›cigi (Sunday Cup) i testy licencji**,
wyĹ›cig ~60 kl./s w jeĹşdzie (przelot kamery ~40â€“46). SzczegĂłĹ‚y i historia: sekcje niĹĽej.

NarzÄ™dzia sesyjne sÄ… w prywatnym **`C:\gt3-data\recomp\tools`** (nie w scratchpadzie): `build.ps1` (przebudowa
out\build\dev), `run.ps1 -Name X -Pad "..." -At "s1,s2" [-Env "K=V;K2=V2"]` (autopad + zrzuty okna do
`C:\gt3-data\runs\X`, `e.txt` = stderr), `race.ps1`, `save.ps1 -Msg` (gt3.patch + gt3_diag.patch, commit+push gt3-data),
`eedis.py od do` (deasemblacja; Python: `C:\Users\brtvvv\AppData\Local\Programs\Python\Python313\python.exe`),
`calls.py adr` (kto robi `jal adr`), `xref.py adr` (lui/addiu do adresu), `hanghunt.ps1`, `crash.py`, `sym.py`.
Diagnostyka w runtime: `GT3_TRACEFN=adr,adr` (log a0â€“a3/ra i v0 funkcji, maks. 8, 40 wywoĹ‚aĹ„),
`GT3_RPCLOG=<sid hex | 0 = wszystkie>` (bind + wywoĹ‚ania SIF RPC), `GT3_MCLOG=1` (HLE MCSERV na IOP),
`GT3_TRACEN=N` (limit wywoĹ‚aĹ„), `GT3_TRACEDUMP=1` (32 B spod a1 po powrocie; napis spod a0 wypisywany zawsze),
`GT3_MEMDUMP=adr:dl:sek[:plik]` (zrzut RDRAM w sekundzie zegara gry, ~4 s mniej niĹĽ czas skryptu),
`GT3_EVLOG=<vsync>` (zdarzenia GS jednej klatki: DRAW z FRAME/TEX0/ALPHA, XFER), `GT3_GIFSRCLOG=1` (duĹĽe pakiety GIF).
Uwaga: `GT3_TRACEFN` Ĺ‚apie wywoĹ‚ania przez tablicÄ™ funkcji; funkcje nie-liĹ›cie mogÄ… â€žwrĂłciÄ‡â€ť w poĹ‚owie (pcâ‰ ra).
Kody pada (`GT3_AUTOPAD` maska): GĂłra 0010, Prawo 0020, DĂłĹ‚ 0040, Lewo 0080, KrzyĹĽyk 4000, Start 0008.
GT Mode (z zapisem): mapa ~16 s; z My Home GĂłra â†’ Car Dealer; X â†’ JPN â†’ Daihatsu â†’ Cuore (11 140 Cr).

NastÄ™pne zadania (kolejnoĹ›Ä‡ wg wpĹ‚ywu na grywalnoĹ›Ä‡):
1. GT Mode dalej: licencja, wyĹ›cig, zakup auta, zapis po postÄ™pie â†’ wczytanie (czy stan siÄ™ zgadza).
1a. **ROZWIÄ„ZANE (2026-11-09): zawieszenia wyĹ›cigĂłw GT Mode i testĂłw licencji** (~2 s po starcie, obraz staĹ‚).
   Przyczyna: w HLE sysclib IOP setjmp/longjmp byĹ‚y atrapami. LIBPDI (strumieĹ„ muzyki PBGM) przy zatrzymaniu
   utworu wychodzi longjmp-em z pÄ™tli kopiujÄ…cej FIFO; bez tego wÄ…tek kopiujÄ…cy (prio 23) krÄ™ciĹ‚ siÄ™ bez koĹ„ca
   i zagĹ‚adzaĹ‚ handler RPC PBGM (prio 24) â†’ komenda PBGM fn3 nie wracaĹ‚a. Zdarza siÄ™ przy przeĹ‚Ä…czeniu muzyki
   (stop + start krĂłtkiego, niezapÄ™tlonego utworu przed wyĹ›cigiem GT / testem). Teraz prawdziwe setjmp/longjmp
   (jmp_buf: ra, sp, fp, s0â€“s7, gp; iop_sysclib.cpp, GT3_IOP_FAKE_SETJMP=1 = stara atrapa). Sunday Cup
   (Super Speedway, Cuore) i test B-1 jadÄ…, Arcade bez zmian.
   Przy okazji: RPC NOWAIT dokaĹ„czane w tle zamiast synchronicznie do ~22 s (GT3_NOWAIT_SYNC=1 = stare),
   iWakeupThread na bieĹĽÄ…cym wÄ…tku zwiÄ™ksza licznik (GT3_WAKEUP_SELF_STRICT=1 = stare).
   Diagnostyka IOP: GT3_IOPTHR=1 (co 0,25 s: czas wÄ…tkĂłw IOP + co 1 s stan wszystkich wÄ…tkĂłw [iop-thr]),
   GT3_CDLOG=1 (sceCdRead i nieobsĹ‚uĹĽone funkcje cdvdman), GT3_IRQSTAT=1, GT3_RPCLOG=sid|0 (ra + 32 B danych).
   Metoda: stan wÄ…tkĂłw IOP przed/po zdarzeniu + deasemblacja IRX (	ools/irxdis.py plik.irx baza od do; skoki jal
   w IRX sÄ… wzglÄ™dne do bazy moduĹ‚u; tablica importĂłw: nagĹ‚Ăłwek 0x41E00000 + nazwa biblioteki, potem pary jr ra;
   addiu zero,zero,N = funkcja N, np. thsemap 6 Signal/8 WaitSema, thbase 0x18 SleepThread, sysclib 4/5 setjmp/longjmp).
   Sekwencje (z zapisem z Cuore): Sunday Cup 9:0040,11:4000,17:0080,19:4000,24:4000,28:4000,31:0020,33:4000,37:0020,
   39:4000,43:4000,47:4000,51:4000,55:4000,59:4000:60 (start ~56 s); licencja B-1: patrz wyĹĽej (GĂłra, Lewo z mapy).
   W GT3 TrĂłjkÄ…t (0x1000) = wstecz.
2. (zrobione) Poprawka ZTE naprawiĹ‚a teĹĽ wybĂłr koloru w Arcade (model 3D auta) i tĹ‚o Mid-Field w menu trasy.
   Arcade z zapisem: `9:4000,13:4000,17:4000` â†’ wybĂłr trasy ~20 s (Prawo = nastÄ™pna trasa), dalej X â†’ klasa â†’ auto/kolor.

**ROZWIÄ„ZANE (2026-11-09): Ĺ›mieci na ekranie auta w salonie / po zakupie.** Przyczyna: backend GS ignorowaĹ‚
TEST.ZTE â€” przy ZTE=0 stosowaĹ‚ ZTST (=0 NEVER) i odrzucaĹ‚ wszystkie piksele. GT3 kopiuje scenÄ™ salonu (fbp 0x165)
sprite'ami z TEST=0 do bufora poĹ›wiaty 0x115 i dalej na ekran; kopia nic nie zapisywaĹ‚a, zostawaĹ‚a stara zawartoĹ›Ä‡
VRAM (tekstury T4 czytane jako CT32). Teraz ZTE=0 = test Z wyĹ‚Ä…czony (`gsEffectiveZtst`, gs_cpu_backend.cpp;
`PS2X_GS_ZTE_IGNORE=1` = stare). Model auta w salonie i ekran â€žpurchase completeâ€ť poprawne, wyĹ›cig bez zmian.
Metoda, ktĂłra zadziaĹ‚aĹ‚a: `GT3_EVLOG` (lista rysowaĹ„ klatki z TEST) + `GT3_TEXDUMP=tbp:tbp` (zrzut bufora/tekstury
w chwili pierwszego rysowania, ktĂłre go czyta, do `C:/gt3-data/runs/tex_<tbp>_N.ppm`) â€” porĂłwnanie ĹşrĂłdĹ‚a i wyniku
kopii wskazaĹ‚o przebieg, ktĂłry nic nie zapisuje. `GT3_EVVTX=1` dodaje wierzchoĹ‚ki sprite'Ăłw.
3. WÄ…tek GIF (przelot kamery 60 kl./s) â€” przestĂłj ~4 s przed wyĹ›cigiem, do zbadania (zrzut wÄ…tkĂłw EE).
4. DĹşwiÄ™k (SPU2), filmy (IPU/FFmpeg), XInput, peĹ‚ny ekran, 16:9.

**Do przetestowania rÄ™cznie (zbiorczo):** (0) **DĹąWIÄK** (nowe, 2026-11-09): uruchomiÄ‡ grÄ™ i posĹ‚uchaÄ‡ menu (muzyka
GT Mode), dĹşwiÄ™kĂłw kursora i wyĹ›cigu (muzyka + silnik). Albo odsĹ‚uchaÄ‡ nagrania `C:\gt3-data\runs\gt3_menu_spu2.wav`
(muzyka od ~13 s) i `gt3_race_spu2.wav` (wyĹ›cig od ~38 s). ZgĹ‚osiÄ‡: szum zamiast muzyki? zĹ‚a wysokoĹ›Ä‡/tempo?
trzaski? WyĹ‚Ä…czenie dĹşwiÄ™ku: `PS2X_SPU2_MUTE=1`, caĹ‚a emulacja SPU2 off: `PS2X_SPU2_OFF=1`.
(a) zapis: GT Mode â†’ My Home â†’ Save Game â†’ slot 1 â†’ OK (strzaĹ‚ka w lewo,
X); po restarcie gry sprawdziÄ‡, czy kredyty/auta siÄ™ zgadzajÄ…. (b) Klawiatura bez `GT3_AUTOPAD` (X/Spacja = KrzyĹĽyk,
Enter = Start, strzaĹ‚ki). (c) WyĹ›cig Arcade do mety, pĹ‚ynnoĹ›Ä‡, brak zawieszeĹ„. Starsze punkty â€” sekcje niĹĽej.

**Okno (2026-11-09):** domyĹ›lnie 960Ă—720, obraz 4:3 na caĹ‚e okno, panel debugera ukryty (F1 pokazuje;
`PS2X_DEBUG_PANEL=1` od startu). **F11** = peĹ‚ny ekran (okno bez ramki), **F10** = proporcje 4:3 â†’ 16:9 â†’ rozciÄ…gniÄ™te
â†’ natywne (stare). `PS2X_WINDOW=1280x960`, `PS2X_ASPECT=43|169|stretch|native`. 16:9 ma sens z opcjÄ…
panoramicznÄ… w ustawieniach gry (obraz anamorficzny).

**DĹşwiÄ™k â€” SPU2 (2026-11-09, kamieĹ„ 3, wersja 1):** nowy moduĹ‚ `ps2xIOP/src/emulator/core/spu2.{h,cpp}` (nowe pliki:
przed `save.ps1` musi byÄ‡ `git add -N` w PS2Recomp, inaczej nie wejdÄ… do gt3.patch). IopMemory kieruje rejestry
0x1F900000â€“0x1F9007FF do Spu2 (16-bit, efekty KON/KOFF/zapis portu danych), DMA kanaĹ‚Ăłw 4/7 kopiuje dane RAM IOP â†”
pamiÄ™Ä‡ SPU (TSA rdzenia), AutoDMA (ADMAS) â†’ kolejka PCM. PÄ™tla IOP (`serviceSpu2`, iop_emulator.cpp) taktuje prĂłbkÄ™
co 768 cykli i zgĹ‚asza IRQ 9 z SPDIF_IRQINFO przy trafieniu IRQA (zastÄ™puje dawne przybliĹĽenie `serviceSpu2Irq`).
Miksowanie wg PCSX2: MMIX (0x800/0x400 gĹ‚osy, 0x80/0x40 wejĹ›cie PCMĂ—BVOL, 0x8/0x4 wyjĹ›cie rdzenia 0Ă—AVOL do rdzenia 1),
MVOL. Brak: pogĹ‚osu (efekty), PMON, interpolacji gaussowskiej (liniowa), dokĹ‚adnych przejĹ›Ä‡ gĹ‚oĹ›noĹ›ci (sweep = od razu
wartoĹ›Ä‡ docelowa). WyjĹ›cie: raylib AudioStream 48 kHz (callback, `ps2xSpu2Pull`), bufor maks. 4096 ramek
(`PS2X_SPU2_LATENCY`). Diagnostyka: `PS2X_SPU2_LOG=1` (co sekundÄ™ KON/aktywne gĹ‚osy/DMA/IRQ/RMS),
`PS2X_SPU2_VLOG=1` (stan gĹ‚osĂłw), `PS2X_SPU2_DMALOG=1`, `PS2X_SPU2_RAW=plik.raw` (s16 stereo 48 kHz;
`tools/raw2wav.py`, `tools/spec.py raw t0 t1 png` = spektrogram w dB), `PS2X_SPU2_SOLO=rdzeĹ„:maska_hex`.
Ustalenia GT3: menu GT Mode = muzyka sekwencerowa (~70 KON/s, rdzeĹ„ 0); wyĹ›cig: strumieĹ„ muzyki ADPCM 44,1 kHz
na gĹ‚osach 22/23 rdzenia 1 (bufory 0xEC000/0xFC000, DMA kanaĹ‚em 4 po 1 KB, ~49 IRQ/s), efekty/silnik na pozostaĹ‚ych
gĹ‚osach obu rdzeni (24/24 aktywne). Tempo wyĹ›cigu bez zmian (60 kl./s w jeĹşdzie).

Karta pamiÄ™ci (2026-11-09): libmc gry (0x274040.. sceMcInit/Open/Read/Write/GetInfo/Syncâ€¦) jest podmieniony
przez rekompilator na stuby HLE `ps2_stubs::sceMc*` (Kernel/Stubs/MemoryCard.cpp, pliki w `<folder gry>/mc0`, `mc1`).
ModuĹ‚y MCMAN/MCSERV z pĹ‚yty Ĺ‚adujÄ… siÄ™ na IOP, ale gra ich nie uĹĽywa. BĹ‚Ä…d: HLE GetInfo zawsze zwracaĹ‚o 0
(â€žta sama kartaâ€ť); gra (0x23F5B8) pyta o format/wolne miejsce tylko po â’1 (â€žnowa kartaâ€ť), wiÄ™c karta wyglÄ…daĹ‚a na
niesformatowanÄ… (â€žFormat Memory Card and saveâ€ť). Teraz pierwsze GetInfo na port zwraca â’1 (`PS2X_MC_NOCHANGED=1` = stare).
Zapis: `mc0/BESCES-50294GAMEDATA/` (dane 70 464 B, icon.sys, icon0.ico, thumbnail). Z zapisem gra przy starcie
sama go wczytuje i **pomija wybĂłr jÄ™zyka** (menu trybu po ~8 s) â€” sekwencje pada dla â€žczystej kartyâ€ť wtedy nie pasujÄ…
(czystÄ… kartÄ™ daje usuniÄ™cie/zmiana nazwy `mc0`). GT Mode z zapisem: `9:0040:0.3,11:4000:0.3` â†’ mapa ok. 16 s.
WÄ…tek pod 0x266800 krÄ™ci siÄ™ w nieskoĹ„czonoĹ›Ä‡ na bindzie RPC `PJOY` (0x594F4A50, pewnie kierownica USB) â€” nieszkodliwe.

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
- Filmy: odtwarzacz libmpeg pomijany (`GT3_PLAY_MOVIES=1` włącza; IPU nie jest emulowane). Obrazy „ipum”
  (0x266090) dekoduje FFmpeg (`gt3DecodeIpum`).
- IOP: moduły z płyty na emulatorze IOP; RPC blokujące i NOWAIT dokańczane w tle; `setjmp/longjmp` prawdziwe;
  SPU2 emulowane (`ps2xIOP/src/emulator/core/spu2.*`).
- Karta pamięci: libmc gry = stuby HLE (`Kernel/Stubs/MemoryCard.cpp`), pierwsze GetInfo = −1, TRUNC > APPEND.
- Pad: klawiatura zawsze + gamepad raylib; `GT3_AUTOPAD="sek:maska:czas,..."` do testów.
- Wydajność (wyścig Arcade): jazda 60 kl./s, przelot kamery ~40–46 kl./s; ogranicza wątek GS (`m_flusher`) i wątek EE.
  Eksperyment wątku GIF (`GT3_GIF_THREAD=1`) ma przestój ~4 s przed wyścigiem (łańcuch VIF1 po kontynuacji po
  odczycie GS→EE nie kończy się) — domyślnie wyłączony.

**Pułapki:** `sed -i`/`Set-Content` psują CRLF/BOM w plikach PS2Recomp (edytować narzędziem Edit);
`ps2xRuntime/CMakeLists.txt` ma LF; lambdy nie przechwytują `thread_local`; `powershell -File` psuje przecinki
w argumentach (`run.ps1 -Env` — listy dawać przez `:`); comsvcs MiniDump tworzy plik tylko dla administratora;
pojedyncze pomiary wydajności różnią się o ~20% (A/B po 3 przebiegi); zrzuty `GT3_THRDUMP` są robione w chwili vsync
(wątek renderujący zawsze „czeka na vsync”).

**Kamienie:** 1 grywalność (Arcade, GT Mode, zapis — jest; XInput i klawiatura do potwierdzenia), 2 grafika (filmy,
paleta 0x3E80 = zamierzony filtr powtórek), 3 dźwięk (SPU2 v1 — do odsłuchu; brak pogłosu), 4 60 kl./s wszędzie
(przelot kamery, wczytywanie), 5 PC (rozdzielczość = GS na GPU, 16:9, pełny ekran F11 — jest).
