# Historia prac nad portem GT3 (PS2Recomp) — szczegółowe notatki

Przeniesione z CLAUDE.md 2026-11-09. Aktualny stan i skrót wniosków: CLAUDE.md.

## Rekompilacja statyczna (PS2Recomp)

- NarzÄ™dzie: github.com/ran-j/PS2Recomp. Build samego rekompilatora:
  `cmake -S . -B out/build -DCMAKE_BUILD_TYPE=Release -DPS2X_BUILD_RUNTIME=OFF -DPS2X_BUILD_ANALYZER=OFF -DPS2X_BUILD_TEST=OFF -DPS2X_BUILD_STUDIO=OFF && cmake --build out/build`.
- U nas: `sh tools/mkelf.sh` (ELF + mapa funkcji z asm/0.s, z wejĹ›ciem 0x100008),
  potem `<PS2Recomp>/out/build/ps2xRecomp/ps2_recomp tools/gt3_recomp.toml` â†’ `build/recomp/`.
- Wynik testu (2026-11-03): 11 433 funkcje przetĹ‚umaczone, 0 bĹ‚Ä™dĂłw,
  0 nieobsĹ‚uĹĽonych instrukcji, 1614 skokĂłw poĹ›rednich (vtable) obsĹ‚uĹĽonych przez fallback.
  300 losowych plikĂłw przechodzi kompilacjÄ™ (`-fsyntax-only`, includy:
  ps2xRuntime/include, ps2xIOP/include, ps2xRuntime/src/lib, ps2xRuntime/src/lib/Kernel;
  pusty `ps2_recompiled_stubs.h`).
- `build/recomp/` to kod wygenerowany z gry: NIGDY do repo.
- NastÄ™pny etap: zbudowaÄ‡ ps2xRuntime z wygenerowanym kodem (runner) i uruchomiÄ‡.
  Potrzebne moduĹ‚y IOP (`*.IRX`) z pĹ‚yty.

### Diagnoza â€ž<1 FPSâ€ť (2026-11-04)

- Na PC: Release + `-DPS2X_ENABLE_AGRESSIVE_LOGS=OFF -DPS2X_ENABLE_RUNTIME_LOGS=OFF -DPS2X_ENABLE_IOP_RPC_TRACE=OFF`
  (domyĹ›lnie logi sÄ… wĹ‚Ä…czone i loguje kaĹĽde wywoĹ‚anie funkcji). Proces zuĹĽywa ~3% CPU, czyli czeka, nie liczy.
- Kopia w chmurze: `/home/claude/ps2recomp` z `gt3.patch` (jest w prywatnym gt3-data/recomp),
  build `out/rt` (Linux: `-march=native`, nagĹ‚Ăłwki `ps2_recompiled_*.h` przenieĹ›Ä‡ do `ps2xRuntime/include`),
  dane pĹ‚yty zĹ‚oĹĽone w `/home/claude/gt3run` (GT3.VOL z gt3-data/vol/part_*), uruchamianie pod Xvfb.
- Pomiar: zegar gry idzie peĹ‚ne 60 Hz (licznik 0x4A8380 = liczba vblank), wÄ…tek gĹ‚Ăłwny budzi siÄ™ co vblank.
  Prawie caĹ‚y czas w pÄ™tli 0x1CCC38 (ekran tytuĹ‚owy: czeka na przycisk, odlicza do dema),
  a obraz (DMA VIF1) aktualizuje siÄ™ raz na ~2 s. Hipoteza: to w duĹĽej czÄ™Ĺ›ci statyczny ekran tytuĹ‚owy,
  nie spowolnienie. Do sprawdzenia: czy Enter (= Start) przechodzi dalej; szary pas to pewnie
  nieprawidĹ‚owo rysowany napis â€žPress Startâ€ť.
- ObsĹ‚uga przerwania DMA w grze: 0x25B738 (wznawia Ĺ‚aĹ„cuch GIF przez CHCR.STR, odblokowuje VIF1 przez FBRST.STC).

### Naprawa (2026-11-05): VIF1 0,5/s â†’ 21/s (poprawki w gt3-data/recomp/gt3.patch)

- Przyczyna â€žklatki co 2 sâ€ť: klatka liczyĹ‚a siÄ™ w ~20 ms, potem gra czekaĹ‚a dokĹ‚adnie 120 vblankĂłw (timeout).
  Gra synchronizuje VIF1 (PATH2) i GIF (PATH3) semaforami w 0x4A8380 (+0x16/+0x17/+0x18):
  VIFcode z bitem I (np. `0x91010000` FLUSH, flagi w polu NUM: bit16/17/18) â†’ przerwanie INTC VIF1
  (handler 0x25B5C0 czyta VIF1_STAT.INT i VIF1_CODE), tag GIF z IRQ i bitami 16/17 â†’ handler DMA 0x25B738.
  GS FINISH: handler INTC 0 = 0x25B6D8 (+0x15). Odczyt GSâ†’EE przez VIF1 (DIR=0) w 0x25B950/0x25B9C8.
- Co byĹ‚o Ĺşle w runtime (wszystko potrzebne razem):
  1. Brak zatrzymania VIF1 na bicie I i brak INTC 5 (teraz: stall, reszta danych czeka na FBRST.STC,
     koniec DMA VIF1 odroczony). Bez tego nadal 0,5/s (`GT3_NO_VIFSTALL=1` wyĹ‚Ä…cza).
  2. Odczyt VIF1_STAT/CODE/MARK zwracaĹ‚ ostatni zapis CPU zamiast stanu interpretera.
  3. **UNPACK przy STCYCL CL=0, WL>0** (gra uĹĽywa `0x0400`): interpreter wymuszaĹ‚ CL=1 i czytaĹ‚ dane,
     ktĂłrych nie ma â†’ rozjazd strumienia VIF (Ĺ›mieciowe VIFcode'y, np. float â’1.0 jako komenda).
     Teraz to czyste wypeĹ‚nianie z ROW/COL bez danych. MoĹĽliwy wpĹ‚yw teĹĽ na bĹ‚Ä™dy grafiki.
  4. ĹaĹ„cuch DMA, ktĂłry nie przesĹ‚aĹ‚ danych (tag QWC=0 z IRQ), nie zgĹ‚aszaĹ‚ koĹ„ca.
  5. VIF1 DIR=0 (GSâ†’EE) obsĹ‚uĹĽony przez `consumeLocalToHostBytes` (na ekranie tytuĹ‚owym nieuĹĽywany).
- Teraz klatka renderuje siÄ™ co vblank, ale host nie nadÄ…ĹĽa: ~21 vblank/s czasu rzeczywistego (CPU-bound).
- Szybkie iteracje: build `out\build\dev` z `-DPS2X_FAST_LINK=ON` (bez /GL i /LTCG; opcja dodana
  w ReleaseMode.cmake). PeĹ‚na kompilacja raz ~45 min, potem przebudowa+link ~1 min.
  Build `fast` z LTCG linkuje siÄ™ >40 min. `measure.ps1 -BuildDir out\build\dev`.
- Zmiany w nagĹ‚Ăłwkach runtime (ps2_memory.h, ps2_runtime.h) przebudowujÄ… wszystkie 11 tys. plikĂłw
  gry â€” stan dodatkowy trzymaÄ‡ w zmiennych globalnych w .cpp.
- Ekran po starcie to **SELECT LANGUAGE** (animowany). Pad dziaĹ‚a: funkcje libpad gry sÄ… juĹĽ stubami
  runtime (0x272DC8 Init, 0x273028 PortOpen, 0x273378 Read, 0x2733F8 GetState, 0x2737D8 InfoMode,
  0x273910 SetMainMode, 0x273510 GetReqStateâ€¦); sterownik pada gry: wÄ…tek 0x2303A8.
  Syntetyczne klawisze (keybd_event) nie docierajÄ… do raylib, wiÄ™c do testĂłw jest
  `GT3_AUTOPAD="sek:maska:czas,..."` (np. `15:0040:0.4,20:4000:0.4` = DĂłĹ‚, potem KrzyĹĽyk).
  DĂłĹ‚ przesuwa kursor; KrzyĹĽyk uruchamia wÄ…tki EE 0x25FF90/0x260760, po czym emulacja staje:
  `[IOP] RPC handler on server thread did not finish`, wÄ…tek IOP 26 (entry 0x75ADC, pc 0x77928).
  **NastÄ™pny problem do zbadania: IOP RPC po wyborze jÄ™zyka** (oraz wydajnoĹ›Ä‡: ~21 kl./s).

### Po wyborze jÄ™zyka: film intro (2026-11-05, poprawki w gt3-data/recomp/gt3.patch)

- Po KrzyĹĽyku gra odtwarza film: moduĹ‚y IOP z pĹ‚yty LIBPDI (0x69E00), PDICDVD (0x6C600), PDISPU2 (0x6DB00),
  PDISTR (0x71C00). ĹaĹ„cuch: wÄ…tek IOP 69 czyta CD (MPEG-2 PS z GT3.VOL, LSN ~185178) â†’ FIFO 0x74CC0 â†’
  wÄ…tek 70 (demux) â†’ wideo FIFO 0x74FD8 (EE czyta przez RPC `MPG1` fn 2, wÄ…tek EE 10) i audio FIFO 0x74F50
  â†’ wÄ…tek 71 (nagĹ‚Ăłwek `SShd`/`SSbd`, PCM 44,1 kHz) â†’ FIFO 0x74E08 â†’ wÄ…tek 72 â†’ DMA SPU2 do 0x1D8000/0x1F8000
  â†’ gĹ‚osy 22/23 rdzenia 1, odĹ›wieĹĽanie przez IRQ SPU2 (IRQA w 4 czÄ™Ĺ›ciach po 0x200 B).
- Naprawione:
  1. **Interpreter IOP: `lwl`/`lwr` ignorowaĹ‚y Ĺ‚adowanie w toku** (load delay). `memcpy` z LIBPDI robi
     `lwr t4; lwl t4` pod rzÄ…d â†’ przesuniÄ™te bajty (Ĺ›mieciowy nagĹ‚Ăłwek audio). Teraz Ĺ‚Ä…czÄ… siÄ™ z pendingLoad.
  2. **RPC blokujÄ…ce wykonywaĹ‚o siÄ™ synchronicznie i wstrzymywaĹ‚o caĹ‚e EE**, gdy handler IOP czekaĹ‚ na dane
     (np. `MPG1` fn 2 czeka na FIFO). Teraz: krĂłtki budĹĽet (~28 ms IOP), potem handler zostaje na wÄ…tku IOP,
     a wÄ…tek EE czeka przez `waitExternal`; koniec â†’ `ExternalWake`. WyĹ‚Ä…czenie: `GT3_NO_ASYNCRPC=1`.
  3. **Brak IRQ SPU2 (IRQ 9)**: emulator nie odtwarza gĹ‚osĂłw. PrzybliĹĽenie: co 512 prĂłbek (48 kHz) dla rdzenia
     z ATTR bit 6 i ustawionym IRQA ustaw NAX gĹ‚osĂłw = IRQA, `SPDIF_IRQINFO` (0x1F9007C2) = bit rdzenia,
     wyĹ›lij IRQ 9. Callback PDISPU2 (0x6DE04) czyta NAX i przestawia IRQA. `GT3_NO_SPUIRQ=1` wyĹ‚Ä…cza.
- Stan: po KrzyĹĽyku film startuje, Start (pominiÄ™cie) wysyĹ‚a `MPG2` fn 3 i audio pĹ‚ynie, ale ekran jest czarny,
  a wÄ…tek EE 11 (0x260760) krÄ™ci siÄ™ na IPU (komendy FDEC, 0x265400/0x265358): **IPU nie jest emulowane**
  (rejestry 0x10002000.. to atrapy). NastÄ™pny krok: emulacja IPU albo HLE libmpeg (stuby w Kernel/Stubs/MPEG.cpp)
  albo pominiÄ™cie filmu.
- **Pomijanie filmĂłw** (ps2_runtime.cpp, tylko GT3 PAL, `GT3_PLAY_MOVIES=1` wyĹ‚Ä…cza): obiekt odtwarzacza
  (libmpeg Sony wlinkowany statycznie, tworzenie 0x2604F8): `play` 0x25FD38 â†’ 0, komendy 0x25FAD8
  (a1 = op; op 3 â†’ 0, op 4 â†’ 4 â€žzamkniÄ™tyâ€ť), â€žczy graâ€ť 0x25FDF0 (flaga gpâ’0x48BC) â†’ 0.
  PÄ™tle gry: 0x1CE310 (start), 0x1CE438 (stop: op 3, potem op 4 aĹĽ 1/4, potem aĹĽ 4).
  Ekran tytuĹ‚owy (pÄ™tla 0x1CCC38) ma film w tle â†’ po pominiÄ™ciu czarny, czeka na Start.
  Po KrzyĹĽyku (jÄ™zyk) i Starcie gra idzie dalej: czarny ekran z biaĹ‚ym kwadracikiem, wÄ…tek gĹ‚Ăłwny
  liczy (przeszukiwanie tablic 0x23EC30), ~6 vblank/s. **NastÄ™pny krok: co rysuje/Ĺ‚aduje ten etap
  i dlaczego tak wolno (menu gĹ‚Ăłwne?).**
- **BĹ‚Ä…d rekompilatora: `FPU_CVT_W_S` uĹĽywaĹ‚o `nearbyintf`** (zaokrÄ…glenie), a R5900 `cvt.w.s` zawsze obcina
  w stronÄ™ zera (+ nasycenie). Skutek w GT3: losowanie aut demo `(int)(rand*N)` dawaĹ‚o indeks N â†’ lista aut
  wypeĹ‚niona 0x16AD â†’ brak rekordu w bazie (tabela 31) â†’ silnik 0 â†’ `sound/engine/00000` nie istnieje â†’
  wieczne ponawianie Ĺ‚adowania (0x242CF8/0x241BF8 zwraca â’1). Poprawka w `ps2_runtime_macros.h` (peĹ‚na
  przebudowa ~45 min). **Teraz: ekran tytuĹ‚owy â†’ demo wyĹ›cigu (grafika: tekstury-Ĺ›mieci) â†’ menu gĹ‚Ăłwne
  â€žArcade Modeâ€ť (logo GT3, Polyphony).** NastÄ™pne: nawigacja po menu (pad), grafika wyĹ›cigu, wydajnoĹ›Ä‡.
- **Nawigacja po menu dziaĹ‚a** (2026-11-05): `GT3_AUTOPAD="15:4000:0.4,23:0040:0.3,27:4000:0.3"` =
  jÄ™zyk (KrzyĹĽyk) â†’ menu trybu ok. 22 s (Arcade/Gran Turismo Mode/Replay Theatre) â†’ DĂłĹ‚ â†’ KrzyĹĽyk â†’
  mapa trybu GT (My Home, Go Race, Car Dealerâ€¦, â€ž1 day 18,000 Crâ€ť) ok. 30 s. Grafika menu poprawna.
  Bez wciĹ›niÄ™cia gra po chwili odpala demo wyĹ›cigu (grafika zepsuta: zielono-czerwone pasy) i wraca do menu.
  **NastÄ™pne: grafika wyĹ›cigu (kamieĹ„ 5) i wydajnoĹ›Ä‡ (menu ~?, wyĹ›cig wolny).**
- **WyĹ›cig (demo) â€” grafika stoi** (kamieĹ„ 5): po wejĹ›ciu w wyĹ›cig licznik koĹ„cĂłw DMA VIF1 przestaje rosnÄ…Ä‡,
  na ekranie zostaje stary bufor (zielono-czerwone kafle). WyĹ›wietlanie: tylko CRT2, DISPFB2 FBP 0/0xA0 PSMCT24,
  rysowanie FRAME fbp0 PSMCT24, ZBUF 417 PSMZ24 â€” konfiguracja sensowna. Przyczyna: VIF1 staje na bicie I.
  Znalezione i poprawione bĹ‚Ä™dy interpretera VIF1: (a) komenda, ktĂłrej dane nie mieszczÄ… siÄ™ w porcji DMA,
  byĹ‚a porzucana â†’ teraz `g_vif1Carry`; (b) DIRECT z pakietem GIF IMAGE dĹ‚uĹĽszym niĹĽ komenda â€žzjadaĹ‚â€ť
  nastÄ™pne VIFcode'y â†’ teraz kontynuacja obrazu dopiero w danych kolejnego DIRECT (`submitDirectPayload`).
  Po tym wciÄ…ĹĽ stoi: raz na prawidĹ‚owym FLUSH z bitem I (`0x91010000`, gra nie wysyĹ‚a FBRST.STC),
  raz po UNPACK z bitem I (`0xEE39C0D9`) dane wznowione wyglÄ…dajÄ… na niebÄ™dÄ…ce VIFcode'ami (TTE? rozmiar UNPACK?).
  **Do zbadania: obsĹ‚uga przerwania VIF1 w wyĹ›cigu (handler 0x25B5C0, bity NUM 16/17/18) i TTE w Ĺ‚aĹ„cuchu.**
- Handler VIF1 0x25B5C0: INT=0 â†’ STC; NUM bit18 â†’ `--sem18` (0x4A8398), STC gdy â‰Ą0; bit16 â†’ `--sem16`
  (0x4A8396), STC gdy â‰Ą0; bit17 â†’ `++sem17`, gdy 0 â†’ restart GIF (D2 QWC=0, STR). Brak STC = czeka na GIF
  (handler DMA 0x25B738 podnosi semafory z tagĂłw GIF z IRQ). D_CTRL=1 (bez stall control, bez MFIFO).
- Dodane: **Ĺ‚aĹ„cuch DMA VIF1 czytany leniwie** (tag po tagu, dane od razu do VIF1, przerwa przy zatrzymaniu
  na bicie I, wznowienie od TADR przy FBRST.STC; `GT3_EAGER_VIF1=1` = stare zachowanie) oraz ADDR/MADR/TADR
  z bitem SPR â†’ scratchpad. Menu dziaĹ‚a jak wczeĹ›niej. **WyĹ›cig dalej stoi**: VIF1 trafia na tag
  `0xFFFCA91C` (ID 7, IRQ, qwc 0xA91C) z VIFcode `0xED1CC0D9` (UNPACK z bitem I, NUM=0x1C â†’ sem18=â’1),
  niespĂłjny z normalnym wzorcem Ĺ‚aĹ„cucha (cnt qwcâ‰7 + UNPACK, ref + MSCAL 0x343). Gra buduje Ĺ‚aĹ„cuchy w
  0x355120/0x3F5120 (podwĂłjny bufor). Hipoteza: Ĺ‚aĹ„cuch powinien skoĹ„czyÄ‡ siÄ™ wczeĹ›niej (pominiÄ™ty tag END?)
  albo CPU nie zdÄ…ĹĽyĹ‚o dopisaÄ‡ â€” trzeba przeĹ›ledziÄ‡, kto zapisuje te tagi (kod budujÄ…cy pakiety aut).
- **Wykluczone (3 podejĹ›cia bez efektu dla stalla w wyĹ›cigu):** (1) carry komend VIF / kontynuacja DIRECT,
  (2) bit SPR w adresach DMA, (3) leniwe czytanie Ĺ‚aĹ„cucha VIF1. Eksperyment 4 (opĂłĹşnione wznowienie
  Ĺ‚aĹ„cucha po STC â€” o vblank albo o N cykli EE) psuje juĹĽ start gry (dmac1=1; przy bezczynnoĹ›ci EE czas
  nie przechodzi przez `accountCycles`) â€” wycofany. Zostaje: Ĺ›ledzenie zapisĂłw do tagĂłw 0x355120/0x3F5120
  (np. wrapper na funkcjÄ™ budujÄ…cÄ… pakiety aut) albo porĂłwnanie z PCSX2 (log DMA/VIF).
- **ROZWIÄ„ZANE (2026-11-05): wyĹ›cig siÄ™ renderuje** (niebo, gĂłry, drzewa; tor/teren jeszcze ze
  zielono-czerwonymi Ĺ›mieciowymi teksturami; ~3 kl./s). ZĹ‚e tagi pochodziĹ‚y z 0x24F960: licznik
  rejestrĂłw GS = 0x25B3B0(obj, bufor) = (koniec â’ start) >> 4, a â€žkoniecâ€ť wynosiĹ‚ **1** (zamiast wskaĹşnika
  z 0x25B378) â†’ licznik â’(adres/16) â†’ tag `0xFFFCA91C`, NLOOP `0xFFFCA91B`, UNPACK z bitem I.
  ObejĹ›cie: 0x25B3B0 wykonywane natywnie (ps2_runtime.cpp, `GT3_NO_NATIVE_GSREG=1` wyĹ‚Ä…cza).
  **Prawdziwy bĹ‚Ä…d jest w runtime**: `v0` zwrĂłcone przez wywoĹ‚anie bywa nadpisane (wartoĹ›ciÄ… 1, jak zwracajÄ…
  handlery przerwaĹ„ gry) miÄ™dzy powrotem z funkcji a uĹĽyciem â€” prawdopodobnie przy wznawianiu po punkcie
  kontrolnym/przeĹ‚Ä…czeniu (np. kontekst wÄ…tku gĹ‚Ăłwnego vs `m_cpuContext`). MoĹĽe psuÄ‡ teĹĽ inne miejsca.
- **Przyczyna znaleziona i naprawiona ogĂłlnie**: `PS2Runtime::dispatchGuestBranch` po wywoĹ‚aniu funkcji robiĹ‚
  `if (ctx->pc == entryPc) ctx->pc = fallthroughPc;` (dla stubĂłw, ktĂłre nie ustawiajÄ… pc). Gdy wygenerowana
  funkcja ma pÄ™tlÄ™ wracajÄ…cÄ… na swĂłj pierwszy adres (0x25B378) i wychodzi na punkcie kontrolnym
  (`eeCheckpointDue()` â†’ `return` z pc = poczÄ…tek pÄ™tli = entry), runtime uznawaĹ‚ jÄ… za zakoĹ„czonÄ… i woĹ‚ajÄ…cy
  jechaĹ‚ dalej ze Ĺ›mieciowym v0. Teraz `eeCheckpointDue()` ustawia `thread_local g_ps2CheckpointExit`,
  a dispatch przy `pc == entry` i tej fladze zwija stos (wznowienie od pc). Natywne obejĹ›cie 0x25B3B0 usuniÄ™te.
  Dotyczy caĹ‚ej gry (kaĹĽda funkcja z pÄ™tlÄ… na poczÄ…tku).
- **Tekstury toru (zielono-czerwone gradienty)**: w wyĹ›cigu tekstury to gĹ‚Ăłwnie PSMT4 (psm 0x14, CLUT CT32)
  pod TBP 0x3420â€“0x3900, czyli **w obszarze bufora Z** (ZBP 417 stron = blok 0x3420; jest teĹĽ odczyt Z jako
  CT24 pod 0x3420 â€” efekt gĹ‚Ä™bi). Gra wgrywa tekstury do pamiÄ™ci Z po jej uĹĽyciu i od razu z nich rysuje.
  Gradienty = wartoĹ›ci Z czytane jako tekstura â†’ **wgrania tekstur (PATH3/GIF) docierajÄ… do VRAM za pĂłĹşno
  wzglÄ™dem rysowania (PATH1/2 przez VIF1)**. Do sprawdzenia: Ĺ‚aĹ„cuch DMA GIF czytany z wyprzedzeniem (jak byĹ‚o
  z VIF1), kolejnoĹ›Ä‡ w arbitrze GIF, MSKPATH3/FLUSHA.
  **Korekta (log sekwencji GS):** w samym wyĹ›cigu ZBUF = 257 stron (blok 0x2020), wiÄ™c tekstury NIE kolidujÄ…
  z Z (417 byĹ‚o w innym momencie). KolejnoĹ›Ä‡ jest dobra: najpierw BITBLT (DPSM CT32, DBW 1) do 0x3420..0x36E4,
  potem TEX0 PSMT4 (tbw 2, CLUT CT32 CSM1) z tego obszaru. Sprawdzone i poprawne w kodzie: ZMSK, LoadClut
  (CLD/CSA/CSM1), TEX2. Pozostaje: przeliczenie CT32â†’T4 (swizzle) albo zawartoĹ›Ä‡ wgraĹ„.
  **NastÄ™pny krok: zrzut VRAM GS w wyĹ›cigu + dekodowanie PSMT4 z paletÄ… w Pythonie (tablice GSdx).**
- Zrobione: zrzut indeksĂłw PSMT4 funkcjami emulatora (LoadClut â†’ PGM) pokazuje **poprawne tekstury**
  (logo GT, banery Suzuki/CitroĂ«n, skaĹ‚a, strzaĹ‚ka) â†’ wgrania + swizzle CT32â†’T4 sÄ… OK. WierzchoĹ‚ki: PRIM
  TME=1, STQ sensowne, RGBA 0x80; rysowania toru to PSMT4 tbw 2, REPEAT. Rasteryzacja synchroniczna
  (Submit â†’ DrawPrimitive), wiÄ™c CLUT nie â€žuciekaâ€ť; LookupCLUT/LoadClutUnlocked dla T4+CT32 poprawne.
  Podejrzenie: zielono-czerwone kafle to inne przebiegi â€” TEX0 psm 0x01 (CT24) na tbp 0x3420 (wczeĹ›niej ZBP
  417) i na buforach ramki (tbp 0/0x1400): efekty gĹ‚Ä™bi/rozmycia czytajÄ…ce obszar, w ktĂłrym w emulatorze
  jest atlas indeksĂłw zamiast Z. **Do zrobienia: lista rysowaĹ„ jednej klatki (GS debug history / Runtime
  Debugger) â€” ktĂłry przebieg maluje kafle i jaki ma FRAME/ZBUF/TEX0.**
- **Lista rysowaĹ„ klatki + zrzuty VRAM (2026-11-05):** scena 3D rysuje siÄ™ do FBP 0xF1 (blok 0x1E20, CT32)
  i **jest w VRAM idealna** (tor, banery CitroĂ«n/Magneti Marelli/Red Line, drzewa). Psuje siÄ™ kompozycja (DOF):
  1) kopia Z sceny (blok 0xA00, PSMZ24 jako tekstura) â†’ FRAME 0x1A1 (blok 0x3420) w PSMZ24, sprite'y 32 px,
     RGBA 0x80 (MODULATE = toĹĽsamoĹ›Ä‡), ZTST ALWAYS, kompresja 2:1 w pionie;
  2) przebiegi rozmycia do FBP 0x50 / 0x191;
  3) koĹ„cowo sprite'y sceny (tex 0x1E20) â†’ bufor ekranu 0xA0 z **ZBUF 0x1A1, ZTST GEQUAL, z = 1**.
  U nas kopia gĹ‚Ä™bi ma wartoĹ›ci 0x21128â€“0x49B89, wiÄ™c test przechodzi tylko na niebie (Z â‰¤ 1), a resztÄ™
  bufora ekranu zostawia ze starymi Ĺ›mieciami (zielono-czerwone = Z jako kolor). Na PS2 musi przechodziÄ‡
  szerzej â†’ podejrzane: semantyka Z24 (zapis/odczyt PSMZ24 jako tekstury lub FRAME, skala Z wierzchoĹ‚kĂłw
  sceny, ZBUF psm vs wartoĹ›ci > 24 bit) â€” porĂłwnaÄ‡ z PCSX2 (GSdx: Z24 jako tekstura, konwersja `z` do 24 bit).
- **ObejĹ›cie (2026-11-05, kamieĹ„ 5 prawie zrobiony):** w backendzie CPU test Z GEQUAL z ZBUF 0x1A1 i ZMSK=1
  zawsze zaliczony (`g_gt3CompositeZPass`, ustawiane w ps2_runtime.cpp dla GT3; `GT3_NO_DOF_HACK=1` wyĹ‚Ä…cza).
  WyĹ›cig wyglÄ…da poprawnie (tor, banery, publicznoĹ›Ä‡, niebo); menu bez zmian. Traci siÄ™ tylko efekt DOF.
  Prawdziwa przyczyna (dlaczego kopia Z24 ma wartoĹ›ci > 1) nadal nieznana. **NastÄ™pne: kamieĹ„ 6, wydajnoĹ›Ä‡
  (wyĹ›cig ~3 kl./s, menu ~21 vblank/s).**

### Tryb Arcade (2026-11-06)

- Menu Arcade (Single Race â†’ Level Selection) dziaĹ‚a; wszystkie menu majÄ… filmy w tle (`stream/*_full.pss`,
  odtwarzacz pomijany â€” bez wpĹ‚ywu). Po wyborze poziomu ekran byĹ‚ czarny: wÄ…tek gĹ‚Ăłwny wisiaĹ‚ w **0x266090 â€”
  dekodowanie obrazu przez IPU** (a0 = bufor RGBA32, a1 = nagĹ‚Ăłwek, szer./wys. 16-bit pod +8/+10; czeka na
  semafor DMA IPU, flaga gpâ’0x4690). IPU nie jest emulowane. ZaĹ›lepka w ps2_runtime.cpp wypeĹ‚nia bufor
  ciemnoszarym kolorem (`GT3_NO_IPU_STUB=1` wyĹ‚Ä…cza). Teraz: wybĂłr trasy (Super Speedway), klasy, auta
  (model auta czÄ™Ĺ›ciowo znieksztaĹ‚cony) â†’ start wyĹ›cigu daje **biaĹ‚y ekran ze Ĺ›mieciami** â€” nastÄ™pny problem.
  Sekwencja pada: `12:4000:0.3,19:4000:0.3,24:4000:0.3,30:4000:0.3,38:4000:0.3,46:4000:0.3,54:4000:0.3`.
- NarzÄ™dzia diagnozy: `scratchpad/eedis.py <od> <do>` (capstone, deasemblacja CORE.elf z gt3-data);
  zrzut wÄ…tkĂłw EE (pc/ra + adresy kodu ze stosu) w bloku `[gt3stat]` â€” wzorzec: wait na 0x286dc8 = WaitSema.
  Nazwy filmĂłw: a1 funkcji play 0x25FD38 to Ĺ›cieĹĽka (`stream/laguna_full.pss` itd.).
- Na przyszĹ‚oĹ›Ä‡: prawdziwe IPU (IDEC/BDEC + CSC) daĹ‚oby podglÄ…dy tras i filmy.
- **Zrobione (2026-11-06): obrazy â€žipumâ€ť dekodowane przez FFmpeg** (doĹ‚Ä…czony do runtime, avcodec 61 ma
  `AV_CODEC_ID_IPU` + parser): `gt3DecodeIpum` w Kernel/Stubs/MPEG.cpp (nagĹ‚Ăłwek 16 B: â€žipumâ€ť, rozmiar od +8,
  szer., wys., klatki; YUVâ†’RGBA swscale, alfa 0x80, wyjĹ›cie w kolejnoĹ›ci makroblokĂłw 16Ă—16 jak DMA z IPU;
  `GT3_IPU_LINEAR=1` liniowo). PodglÄ…d trasy (Super Speedway) i ekran klasy pokazujÄ… prawdziwe zdjÄ™cia.
  ZdjÄ™cie auta przy wyborze koloru idzie innÄ… Ĺ›cieĹĽkÄ… (nie 0x266090) â€” nadal kolorowe Ĺ›mieciowe bloki.
  WywoĹ‚ania biblioteki IPU (0x2644B8â€“0x266038, xref rejestrĂłw 0x10002000/10) spoza niej: tylko 0x1CD5C0 â†’ 0x266090
  oraz odtwarzacz libmpeg (0x25F668â€“0x25FFB0 â†’ 0x2600xxâ€“0x261Cxx), ktĂłry jest pomijany. ZdjÄ™cie auta to wiÄ™c
  prawdopodobnie strumieĹ„ filmu (pomijany) albo niezainicjowany bufor â€” do zrobienia przy emulacji filmĂłw.
- GrywalnoĹ›Ä‡ (Arcade, KrzyĹĽyk trzymany od 46 s): przy â€ž1â€ť (~87 s) kamera zderzakowa z lusterkiem, obrotomierz
  przy czerwonym polu â†’ gaz z pada dziaĹ‚a w wyĹ›cigu. Start (â€žGOâ€ť) wypada po 90 s â€” jazdy nie da siÄ™ sprawdziÄ‡
  w limicie pomiaru bez przyspieszenia wczytywania menu/wyĹ›cigu.
  Ponowne naciskanie KrzyĹĽyka nie pomija przelotu kamery/odliczania.
- Wykluczone (VU): natychmiastowe flagi MAC/status w trybie szybkim (bez potoku flag) â€” szybciej (~4,6â€“6,8 s/60,
  â€žSTARTâ€ť przed 90 s), ale **psuje scenÄ™** (czarne kliny w wyĹ›cigu): mikrokod VU1 czyta flagi z opĂłĹşnieniem 4 cykli
  (np. obcinanie). Wycofane â€” flagi muszÄ… zostaÄ‡ w potoku.
- **WyĹ›cig Arcade dziaĹ‚a (kamieĹ„ 4 dla prawdziwej gry):** pad `12,17,21,25,30,35,40,45,50:4000:0.3` (co ~5 s
  KrzyĹĽyk) â†’ ok. 55 s start na Super Speedway: przelot kamery, HUD (6th, Lap 1/2, obrotomierz reaguje na gaz),
  ~8,5 kl./s. Obrazy IPU to â€žipumâ€ť 640Ă—512 (tĹ‚a menu). Ekran po wyborze auta jest biaĹ‚y (tĹ‚o ipum = szare +
  efekt), wybĂłr koloru ma rozsypane tekstury modelu auta.
- **KamieĹ„ 5, gĹ‚Ăłwny bĹ‚Ä…d: modele aut nie sÄ… rysowane** â€” ani gracza, ani rywali (widaÄ‡ tylko cienie), takĹĽe w
  demo. NastÄ™pny krok: lista rysowaĹ„ klatki wyĹ›cigu (GT3_DRAWLOG) â€” czy rysowania aut w ogĂłle trafiajÄ… do GS
  (inna Ĺ›cieĹĽka VU1/VIF, np. MPG/MSCAL innego mikroprogramu, PATH3), czy sÄ… odrzucane (test Z/alfa, scissor).
  Zbadane (2026-11-06): w strumieniu GS klatki wyĹ›cigu (GT3_DRAWLOG, histogram fbp/psm) sÄ… tylko tekstury T4
  trasy (fbp 0xF1 fbw 10), maĹ‚e przebiegi do bufora fbw 2 (odbicia/kamery), 6Ă—400 trĂłjkÄ…tĂłw CT16 do 0x191
  (prĂłbkujÄ… scenÄ™ 0x1E20), kompozycja DOF i HUD â€” **nic przypominajÄ…cego karoseriÄ™**. Wykluczone:
  (1) moje zmiany wydajnoĹ›ci (wszystkie przeĹ‚Ä…czniki na stare zachowanie â€” auta nadal brak), (2) VU1 â€”
  kaĹĽdy z ~20 mikroprogramĂłw robi XGKICK, brak zarezerwowanych instrukcji, (3) urywanie mikroprogramĂłw VU0
  (VCALLMS 0x0/0x120/0x1D0/0x2D0, limit 4096 cykli nie jest osiÄ…gany). Brak bĹ‚Ä™dĂłw odczytu plikĂłw w logu.
  NastÄ™pne kierunki: makro-instrukcje COP2 w kodzie EE (macierze aut), widocznoĹ›Ä‡/LOD aut liczone na EE,
  porĂłwnanie Ĺ‚aĹ„cucha VIF1 (MSCAL/UNPACK) z PCSX2.
  Dalej wykluczone: (4) test Z â€” wymuszony ZTST ALWAYS w scenie (fbw 10) nie pokazuje aut. Ekran wyboru
  auta/koloru to zdjÄ™cia 2D (peĹ‚noekranowa tekstura CT32 0x1E20 z obrazĂłw IPU), nie model 3D â€” nieprzydatny.
  **Trop:** cieĹ„ auta jest rysowany (trĂłjkÄ…ty abe=1 zmsk=1, T4, np. tbp 0x3665, ok. 179 sztuk) w miejscu auta;
  znaleĹşÄ‡ funkcjÄ™ EE budujÄ…cÄ… pakiet cienia (wywoĹ‚anie VIF/MSCAL), karoseria powinna byÄ‡ rysowana obok â€”
  sprawdziÄ‡, dlaczego jej gaĹ‚Ä…Ĺş jest pomijana.
- Ustalenia (wrappery `replaceFunction` + `lookupFunction` na oryginaĹ‚, `scratchpad/xref.py` szuka lui/addiu
  do adresu, RTTI gcc2: napis `12RaceCarModel` â†’ funkcja `__tf` 0x1AC638 â†’ vtable 0x332498):
  Ĺ›cieĹĽka modelu `cars/{day,eve,night}/<id>` skĹ‚adana w 0x21FA18(id, bufor, pora), wczytywanie plikĂłw
  0x2428C8(nazwa, cel, rozmiarâ€¦). **Modele aut i opon siÄ™ wczytujÄ…** (demo: `cars/day/sb0039`,
  `cars/day/mi0063`, `tire/n23`, `tire/n31`) â†’ problem jest w rysowaniu. Metody wirtualne RaceCarModel
  (0x1AAD18, 0x191068, 0x190E30, 0x190DB8) prawie nie sÄ… woĹ‚ane (vt3 2Ă—) â€” rysowanie idzie innÄ… Ĺ›cieĹĽkÄ…
  (`Q28CarModel8Callback`, `ModelSet`). Makra FPU div/sqrt/rsqrt w ps2_runtime_macros.h wyglÄ…dajÄ… poprawnie.
- Liczniki wywoĹ‚aĹ„ (szablon `gt3ProfWrap<I>` na 240 funkcjach 0x21F000â€“0x228000 z functions.csv, rĂłĹĽnica
  dwĂłch zrzutĂłw ~120 vsync w wyĹ›cigu demo): **kod aut dziaĹ‚a co klatkÄ™** â€” 0x21FE00/0x21FE78/0x21FEE8â€¦
  po 240 (2 auta), 0x21FEC8 960, 0x2232D8/0x223338/0x2235D0 po 480 (koĹ‚a?), 0x225E08/0x225F08/0x227F68 ~14 tys.,
  0x226158 ~43 tys., 0x226588 ~48 tys. (ModelSet â€” takĹĽe trasa). Rysowanie aut jest wiÄ™c zlecane, ale nie
  trafia do GS â†’ szukaÄ‡ miÄ™dzy tym kodem a VIF1: czy pakiety aut trafiajÄ… do Ĺ‚aĹ„cucha DMA VIF1 (np. inny
  kanaĹ‚/Ĺ›cieĹĽka: VIF0/VU0, SPR, osobny Ĺ‚aĹ„cuch), czy sÄ… budowane z bĹ‚Ä™dnymi danymi (np. liczba wierzchoĹ‚kĂłw 0).
- Dalej wykluczone: (5) DMA scratchpada â€” kanaĹ‚y 8/9 (fromSPR/toSPR) w ogĂłle nie startujÄ… (runtime i tak
  obsĹ‚uguje tylko tryb normalny). Kod aut zapisuje staĹ‚e do SPR (0x250688 â†’ 0x70003AF0.., np. przezroczystoĹ›Ä‡
  `1 â’ f[+0x30]` w 0x21FEF8). **Problem aut odĹ‚oĹĽony** po 5 wykluczonych kierunkach. Do zrobienia pĂłĹşniej:
  porĂłwnanie z PCSX2 (zrzut Ĺ‚aĹ„cucha VIF1/GIF jednej klatki wyĹ›cigu) albo Ĺ›ledzenie bufora pakietĂłw aut.

### WydajnoĹ›Ä‡ c.d. (2026-11-06)

- Profil wyĹ›cigu: wÄ…tek EE ~44% interpreter VU1, ~30% czeka na rysowanie pasami (RowPool::run).
- OprĂłĹĽnienia odĹ‚oĹĽonych prymitywĂłw: Ĺ›rednio 9â€“18 prymitywĂłw na oprĂłĹĽnienie; przyczyny ~55% LoadClut,
  ~28% BeginTransfer (wgrania), ~10% TextureFlush, ~6% prezentacja. PrĂłba: migawki CLUT + brak oprĂłĹĽnienia
  przy TextureFlush + test nakĹ‚adania obszaru wgrania (tekstura/ramka/Z odĹ‚oĹĽonych prymitywĂłw) â€” oprĂłĹĽnieĹ„
  przez LoadClut 16,8 tys. â†’ 1,3â€“2 tys., przez wgrania o poĹ‚owÄ™ mniej, ale **tempo bez zmian** (~8,4 s/60 vsync)
  â†’ wycofane. WÄ…skie gardĹ‚o to sama praca rysowania wykonywana, gdy EE czeka. NastÄ™pny krok: asynchroniczne
  oprĂłĹĽnianie (pula rysuje, EE liczy dalej; czekanie tylko przy konflikcie obszarĂłw/odczytach VRAM) â€” wtedy
  migawki CLUT i testy nakĹ‚adania z tej prĂłby bÄ™dÄ… potrzebne.
- **Zrobione: asynchroniczne oprĂłĹĽnianie** (gs_cpu_backend): przy 1024 odĹ‚oĹĽonych prymitywach zbiĂłr (z migawkami
  CLUT) przechodzi do wÄ…tku `m_flusher`, ktĂłry rysuje go pulÄ… pasĂłw, a EE liczy dalej. Czekanie (`WaitInflight`)
  tylko przy synchronicznym oprĂłĹĽnieniu (odczyty VRAM, prezentacja, feedback, transfery GSâ†’EE/lokalne) albo gdy
  LoadClut/wgranie nakĹ‚ada siÄ™ na obszary odĹ‚oĹĽonych lub rysowanych prymitywĂłw (`PendingTouches`: ramka, Z,
  tekstura â€” szacunek z nadmiarem). TextureFlush nie oprĂłĹĽnia. `PS2X_GS_SYNCFLUSH=1` = stare zachowanie.
  WyĹ›cig ~8,4 â†’ ~6â€“7 s/60 vsync (~8â€“10 kl./s). Na drugiej (losowej) trasie demo raz widaÄ‡ kafle-Ĺ›mieci na
  niebie â€” nie wiadomo, czy to wyĹ›cig danych, czy wczeĹ›niejszy bĹ‚Ä…d tej trasy (sprawdziÄ‡ z PS2X_GS_SYNCFLUSH=1).
- Poprawki (Arcade, Super Speedway jako test deterministyczny): (1) szacunki obszarĂłw VRAM liniowo w bajtach
  byĹ‚y zĹ‚e dla formatĂłw z przeplotem (PSMT4: strona 128Ă—128, maĹ‚y prostokÄ…t dotyka blokĂłw w caĹ‚ej stronie) â†’
  brak litery w â€žSUPER SPEEDWAYâ€ť, czarna scena; teraz zakresy wyrĂłwnane do stron 8 KB + zapas 128 wierszy.
  (2) Pomijanie oprĂłĹĽnienia przy LoadClut (migawki CLUT) gubiĹ‚o panel ASM/TCS â€” LoadClut znĂłw zawsze oprĂłĹĽnia
  (bez straty tempa). Wynik: HUD i scena poprawne, ~6,7 s/60 vsync (~9 kl./s).
- Profil EE: kod gry tylko ~14% wÄ…tku EE (reszta VIF1/VU1/GS). **Tryb szybki VU (domyĹ›lny)**: zapisy VF/VI/ACC
  od razu do rejestrĂłw (na VU i tak sÄ… blokady przy hazardach), bez kopii stary/nowy, kolejek i markPairWrites;
  flagi, Q/P (DIV/EFU, WAITQ/WAITP) i zapisy do pamiÄ™ci nadal przez potoki. `PS2X_VU_EXACT=1` = dokĹ‚adny model.
  WyĹ›cig ~6,7 â†’ ~5,9 s/60 vsync (~10 kl./s), obraz bez zmian.
- **Nowy bĹ‚Ä…d (kamieĹ„ 5):** przy odliczaniu w Arcade (widok z auta) dolna czÄ™Ĺ›Ä‡ sceny jest czarna â€” bliski tor
  nie jest rysowany (widaÄ‡ tylko niebo). MoĹĽliwe wspĂłlne ĹşrĂłdĹ‚o z brakiem aut: geometria blisko kamery (Ĺ›cieĹĽka
  obcinania/clip w mikrokodzie VU1, CLIP/FCAND/FCOR). Teraz da siÄ™ to obejrzeÄ‡ w 90 s (odliczanie ~85 s).
- Lista rysowaĹ„ klatki odliczania: scena gĹ‚Ăłwna (fbp 0xF1 fbw 10) ma tylko kilka trĂłjkÄ…tĂłw â€” **tor jest
  odrzucany po stronie EE** (jak auta), nie przez GS. Test widocznoĹ›ci obiektĂłw: 0x226158 (ModelSet) liczy
  makro VCLIP dla dwĂłch punktĂłw i czyta flagi przez CFC2 vi18; przy w<0 zamienia bity â€ž+â€ť (0x15) i â€žâ’â€ť (0x2A).
- **BĹ‚Ä…d rekompilatora VCLIP (makro COP2) poprawiony**: miaĹ‚ zamienione bity +/â’ (bit 0 musi byÄ‡ +x) i porĂłwnywaĹ‚
  z w zamiast |w| (`ps2xRecomp/src/lib/vu_translator.cpp`; w 7 wygenerowanych plikach runnera ten sam kod
  podmieniony lokalnie â€” przy regeneracji runnera poprawka wejdzie z generatora). Obraz bez zmian (auta i bliski
  tor nadal brak) â€” kolejne podejrzane makra COP2 (VMADD/VOPMSUB/VDIVâ€¦) albo dane w VU0 (vf24â€“27, vf20).
  Interpreter VU (CLIP/FC*) sprawdzony â€” poprawny. Runner jest budowany unity (`Unity/unity_N_cxx.cxx`).
- Rejestry VU0 (COP2) byĹ‚y osobne w kontekĹ›cie kaĹĽdego wÄ…tku EE (nowy wÄ…tek = zera); na PS2 VU0 jest wspĂłlny.
  Teraz wspĂłlny stan (EeScheduler: `gt3Vu0Load/Save` wokĂłĹ‚ wykonania kodu; `PS2X_VU0_PER_THREAD=1` = stare).
  Obraz bez zmian. Wykluczone dla brakujÄ…cego toru/aut (Ĺ‚Ä…cznie): zmiany wydajnoĹ›ci, VU1 XGKICK, limit VU0,
  test Z, DMA SPR, kolejnoĹ›Ä‡ bitĂłw VCLIP, osobne VU0 na wÄ…tek. Generator makr COP2 czÄ™Ĺ›ciowo sprawdzony
  (VMOVE/VABS/VMR32 maski i obrĂłt poprawne). NastÄ™pne: porĂłwnanie z PCSX2 albo Ĺ›ledzenie wyniku testu
  widocznoĹ›ci w 0x226158 (ktĂłre obiekty odrzuca i dlaczego â€” zrzut vf1/vf2/flag dla kilku obiektĂłw).
- **Ĺšledzenie testu widocznoĹ›ci (log w lokalnym pliku runnera):** 0x226158 â†’ 0x2497C0 â†’ 0x24F778 robi
  `vcallms 0x120`; mikroprogram VU0 0x120 (zrzut pamiÄ™ci kodu VU0): `LQ vf24..27 â† VU0mem[8..11]`,
  potem vf24..27 = (vf28..31 = macierz obiektu) Ă— VU0mem[8..11] (kameraÂ·projekcja). Wynik vf24..27 to
  macierz testu VCLIP. ~60% obiektĂłw odrzucanych w wyĹ›cigu (normalne). **Przy odliczaniu tor (obiekt 0x9BECC0)
  dostaje macierz afinicznÄ…** (kolumna w = 0, w = 1, skala ~0,01) zamiast projekcyjnej (skala 2,4/3,3, kol. zâ‰w)
  â†’ wszystkie punkty poza |x|,|y|,|z| â‰¤ 1 â†’ odrzucony. Czyli VU0mem[8..11] trzyma w tym momencie zĹ‚Ä… macierz
  (innÄ… kamerÄ™/2D, np. ortho 0.00313/â’0.00446 z HUD), wszystko na jednym wÄ…tku EE (nie przeplot wÄ…tkĂłw).
  ĹšcieĹĽka: s1â‰ 0 (obiekt przecina granicÄ™) â†’ 0x252500 (wariant z obcinaniem), s1=0 â†’ 0x252790;
  wymuszenie s1=0 pokazuje bliskÄ… geometriÄ™ odwrĂłconÄ… (w<0), wiÄ™c Ĺ›cieĹĽka obcinania sama dziaĹ‚a.
  **NastÄ™pne:** kto zapisuje VU0mem[8..11] (0x11004080) tuĹĽ przed ModelSet toru przy odliczaniu
  (woĹ‚ajÄ…cy 0x24F778: 0x2497AC/0x2497E8, 0x24F428, 0x24F5EC, 0x25103C) â€” moĹĽliwe zĹ‚e ĹşrĂłdĹ‚o macierzy kamery
  (np. kamera auta gracza, ktĂłrego model teĹĽ nie jest rysowany).
- **ROZWIÄ„ZANE (2026-11-06): auta sÄ… rysowane** (gracz i rywale, demo i Arcade). VU0mem[8..11] (macierz kamery,
  zapis 0x255FB8 przez vi10=8) nadpisywaĹ‚ push stosu macierzy 0x256088 (`vsqi` przez vi11; init 0x2514E8:
  vi11=0x10, vi12=0x50, vi13=0x60; pop 0x256108 `vlqd --vi`). vi11 wracaĹ‚ do 0 tuĹĽ po inicjalizacji, bo kontekst
  wÄ…tku bywa zerowany/odtwarzany w caĹ‚oĹ›ci, a wspĂłlny stan VU0 wczytywano tylko przy zmianie kontekstu.
  Teraz `gt3Vu0Load` kopiuje wspĂłlny stan VU0 przed kaĹĽdym wykonaniem. MoraĹ‚: rejestry VI VU0 to trwaĹ‚y stan gry
  (wskaĹşniki stosĂłw w pamiÄ™ci VU0) â€” kaĹĽde cofniÄ™cie kontekstu EE psuje grafikÄ™.
  Ta sama poprawka usunÄ™Ĺ‚a czarny bliski tor przy odliczaniu. Demo rajdowe (auta, trasa, banery) wyglÄ…da poprawnie.
  Szybsza sekwencja Arcade (odliczanie â€ž3â€ť ok. 90 s): `12,16,19,22,25,28,31,34,37,40,43:4000:0.3,46:4000:44`.
  Zostaje w kamieniu 5: kolory przejĹ›cia demoâ†’tytuĹ‚/powtĂłrki (paleta 0x3E80), szare obrazy IPU (zaĹ›lepka).
- **Paleta 0x3E80 (powtĂłrka niebieskozielona, ok. 85 s demo):** log zdarzeĹ„ GS (XFER/TEX0/DRAW) pokazaĹ‚, ĹĽe
  0x3E80 to wgranie **PSMCT24 16Ă—16** (768 B, 3 B/piksel) tuĹĽ przed przebiegami 0x1F3 (TEX0 CLD=5, CSM1);
  wczeĹ›niejsze â€žlosoweâ€ť wartoĹ›ci to obszar tekstur trasy wgrywany w innych momentach klatki. Dane z EE to gĹ‚adka
  krzywa tonalna: G=B â‰ rosnÄ…ce do 0xFF, **R â‰ 255Â·(G/255)^4** (np. G 0x92 â†’ R 0x1E) â†’ cyjan jest w danych gry.
  Wgranie CT24 jest poprawne (dodane i tak: przenoszenie niepeĹ‚nego piksela CT24 miÄ™dzy porcjami).
  Do sprawdzenia: czy to zamierzony filtr powtĂłrki, czy bĹ‚Ä…d w kodzie EE liczÄ…cym krzywÄ… (pow/exp, makra FPU)
  â€” porĂłwnaÄ‡ z PCSX2 albo znaleĹşÄ‡ funkcjÄ™ budujÄ…cÄ… tablicÄ™ (ĹşrĂłdĹ‚o BITBLT w RDRAM) i jej parametry na kanaĹ‚.
  OdĹ‚oĹĽone (brak nazw funkcji, moĹĽe byÄ‡ zamierzone).
  **ZamkniÄ™te (2026-11-06): to zamierzony efekt** â€” kilka sekund pĂłĹşniej powtĂłrka demo jest czarno-biaĹ‚a
  (monochromatyczny filtr), czyli gra przeĹ‚Ä…cza stylizowane filtry kolorĂłw w powtĂłrce dema.
  Sekwencja pada z KrzyĹĽykiem co 2,5 s od 11 s nie trafia w menu (gra wchodzi w demo) â€” uĹĽywaÄ‡ sekwencji co 3 s od 12 s.

### WydajnoĹ›Ä‡ c.d. (2026-11-06, po naprawie aut)
- WyĹ›cig z autami: ~7 s/60 vsync. Profil (20 s, wszystkie wÄ…tki): proces ~2,4 rdzenia; GS ~31 s CPU (pula),
  VU1 ~9,7 s (wÄ…tek EE), kod gry ~0,2 s. CzuĹ‚oĹ›Ä‡ na wÄ…tki rasteryzacji: 1 â†’ ~15 s, 3 â†’ ~8,5 s, 7 â†’ ~7 s/60 vsync
  (oba: VU1 na wÄ…tku EE i rasteryzacja przy synchronicznych oprĂłĹĽnieniach, np. LoadClut).
- Zrobione: `calculatePairReadyCycle` w trybie szybkim VU pomija tablice gotowoĹ›ci (bez efektu mierzalnego);
  pamiÄ™Ä‡ podrÄ™czna zdekodowanej palety na prymityw (znacznik `t_clutSerial`, nowy w DrawPrimitive i w kaĹĽdej
  porcji `parallelRows`; `PS2X_GS_NOCLUTCACHE=1` wyĹ‚Ä…cza) â†’ ~6,4â€“6,9 s/60 vsync.
- NastÄ™pne kandydaty: WritePixel (7,7 s; wskaĹşniki funkcji ReadVram/WriteVram na piksel, dwa przeliczenia adresu
  dla RMW), SampleTexture/ReadTexture, VU1 na osobnym wÄ…tku (najwiÄ™kszy krok).
- `ps2_gs_memory.cpp` kompilowany wewnÄ…trz gs_cpu_backend.cpp (`PS2_GSMEM_IMPL`), Read/WriteVramUnlocked bez
  wskaĹşnika funkcji dla CT32/CT24/Z24/Z32 â€” mniej CPU rasteryzacji, tempo wyĹ›cigu w granicach szumu (~6,5â€“7 s).
- **Pomiar czekania EE (chrono wokĂłĹ‚ FlushDeferredUnlocked/WaitInflight):** w wyĹ›cigu ~2,7 s na 10 s (~27%)
  to synchroniczne oprĂłĹĽnienie w `LoadClut` (~12 tys./s, kaĹĽdy zapis TEX0, takĹĽe bez Ĺ‚adowania palety);
  transfery ~0,2 s, reszta pomijalna. PrĂłba: oprĂłĹĽniaÄ‡ tylko przy faktycznym Ĺ‚adowaniu (indeksowany PSM + CLD)
  â†’ poĹ‚owa wywoĹ‚aĹ„, ale **czas czekania bez zmian** (czeka siÄ™ na tÄ™ samÄ… pracÄ™) i pojawiĹ‚y siÄ™ Ĺ›mieci na kole
  auta przy odliczaniu (czÄ™ste oprĂłĹĽnienia maskujÄ… bĹ‚Ä…d szacunku nakĹ‚adania wgraĹ„/rysowaĹ„) â†’ wycofane.
  Wniosek: EE czeka na pracÄ™ rasteryzacji, wiÄ™c trzeba jej mniej (koszt piksela) albo rysowania naprawdÄ™
  rĂłwnolegĹ‚ego z EE (migawki CLUT + poprawne wykrywanie konfliktĂłw VRAM).
- **ROZWIÄ„ZANE: prawdziwa przyczyna znikania HUD (ASM/TCS) i Ĺ›mieci na kole** â€” wyĹ›cig miÄ™dzy pasami wierszy
  w jednym odĹ‚oĹĽonym zbiorze: prymityw rysujÄ…cy do tekstury (render-to-texture) i pĂłĹşniejszy prymityw czytajÄ…cy jÄ…
  w innych wierszach ekranu rysowaĹ‚y siÄ™ w rĂłĹĽnych wÄ…tkach bez kolejnoĹ›ci (`isFeedbackDraw` Ĺ‚apie tylko odczyt
  wĹ‚asnej ramki). CzÄ™ste oprĂłĹĽnienia przy kaĹĽdym TEX0 maskowaĹ‚y bĹ‚Ä…d. Kontrola (`LoadClut` z i bez czekania,
  porĂłwnanie palet) wykluczyĹ‚a palety i wgrania. Teraz Submit Ĺ›ledzi obszary zapisu (ramka/Z) i odczytu (tekstura)
  zbioru (`m_defWrites/m_defReads`) i przy konflikcie RAW/WAR zamyka zbiĂłr (`FlushDeferredAsync`;
  `PS2X_GS_NOHAZARD=1` wyĹ‚Ä…cza). Zakresy liczone dokĹ‚adnie w stronach 8 KB wg formatu (CT32 64Ă—32, CT16 64Ă—64,
  T8 128Ă—64, T4 128Ă—128) â€” zgrubne (4 B/piksel, +128 wierszy) dawaĹ‚y faĹ‚szywe konflikty i ~9 s/60.
  LoadClut domyĹ›lnie bez czekania (migawki; czeka tylko, gdy odĹ‚oĹĽone rysowania mogÄ… zapisaÄ‡ ĹşrĂłdĹ‚o palety;
  `PS2X_GS_CLUTWAIT=1` = stare). WyĹ›cig ~6,1â€“6,6 s/60 vsync, HUD i obraz poprawne, odliczanie â€ž2â€ť przed 90 s.
- DokĹ‚adne zakresy stron takĹĽe w `SetTouches` (PendingTouches) i `TransferNeedsFlush` (wgranie: `pageSpanBytes(dpsm,
  dbw, dsay+rrh)`): czekanie EE ~2,5 â†’ ~1,5 s na 10 s (LoadClut ~0; zostaje: peĹ‚ny zbiĂłr 1024 â†’ WaitInflight ~0,4 s,
  rysowania ze sprzÄ™ĹĽeniem ~0,4 s, wgrania ~0,7 s). WyĹ›cig ~5,8â€“6,4 s/60 vsync, odliczanie od ~80 s.
- Kolejka zbiorĂłw (`m_setQueue`, FIFO, max 4, jeden wÄ…tek `m_flusher` â†’ kolejnoĹ›Ä‡ zachowana) zamiast jednego
  â€žw locieâ€ť; rysowanie ze sprzÄ™ĹĽeniem idzie do kolejki jako zbiĂłr szeregowy (`DeferredSet::serial`), EE nie czeka.
  Obraz poprawny, tempo w granicach szumu (~5,6â€“7 s/60). PozostaĹ‚e czekanie EE: wgrania nakĹ‚adajÄ…ce siÄ™ na
  tekstury odĹ‚oĹĽonych rysowaĹ„ (do zrobienia: wgrania jako polecenia w kolejce zamiast oprĂłĹĽniania).
- VU: `calculateFmacProductSticky` (kaĹĽdy MADD/MSUB) liczyĹ‚ iloczyny drugi raz w long double â€” teraz tylko dla
  zera/denormali/inf (`PS2X_VU_EXACT_FLAGS=1` = dokĹ‚adnie). WyĹ›cig ~5,6â€“6,3 s/60 vsync, odliczanie â€ž2â€ť ok. 86 s.
- Profil (po tych zmianach): GS na puli (WritePixel 8,5, SampleTexture 5+4,8, combineTexture 4,9, trĂłjkÄ…ty 4,8,
  ReadTexture 3,4), VU1 (execUpper 3,7, run 1,6, commit 1,1, execLower 1,0, flagi 0,85), `pageSpanBytes` 0,9
  (PendingTouches przeglÄ…daĹ‚ prymitywy â€” teraz listy obszarĂłw zbioru `DeferredSet::writes/reads`),
  planista IOP na wÄ…tku EE (`beginNextReady` 1,2 + `nextWakeCycle` 0,6; teraz jedno przejĹ›cie `std::map`).
  WyĹ›cig ~5,3â€“6,6 s/60 vsync (~10 vsync/s).
- VU: normalizacja operandĂłw `execUpper` przez SSE (`vuNormalize4`) â€” w granicach szumu. Mikrooptymalizacje
  VU/GS dajÄ… juĹĽ po kilka %. Do 60 kl./s (~1 s/60 vsync) potrzebny krok strukturalny: rekompilator mikrokodu VU1
  (JIT/AOT mikroprogramĂłw, ~20 programĂłw w wyĹ›cigu) albo backend GS na GPU; VU1 na osobnym wÄ…tku da maks. ~2Ă—.

### Klawiatura (2026-11-06)

- BĹ‚Ä…d: `PSPadBackend::readState` (ps2_pad.cpp) czytaĹ‚ klawiaturÄ™ **tylko gdy nie byĹ‚o gamepada 0**. Dowolne
  urzÄ…dzenie widziane przez raylib jako gamepad (joystick, przepustnica, kierownica, wirtualny kontroler) wyĹ‚Ä…czaĹ‚o
  klawiaturÄ™ â†’ `Pressed=none`. Teraz klawiatura dziaĹ‚a zawsze, gamepad dochodzi do niej, osie majÄ… strefÄ™ martwÄ…
  0,25 (przepustnica nie â€žtrzymaâ€ť drÄ…ĹĽka). `PS2X_PAD_NO_GAMEPAD=1` ignoruje gamepady.
  Odczyt raylib jest poprawny: `PollInputEvents` w `EndDrawing` w wÄ…tku okna, rlImGui nie czyĹ›ci `IsKeyDown`.
- Klawisze (okno gry musi mieÄ‡ fokus): strzaĹ‚ki/WASD = krzyĹĽak, **X/Spacja = KrzyĹĽyk**, C/Esc = KĂłĹ‚ko,
  Z = Kwadrat, V = TrĂłjkÄ…t, Q/E = L1/R1, LShift/RShift = L2/R2, **Enter = Start**, Tab = Select.
- **Do przetestowania rÄ™cznie:** uruchomiÄ‡ bez `GT3_AUTOPAD`, kliknÄ…Ä‡ w okno gry, na ekranie jÄ™zyka
  strzaĹ‚ka w dĂłĹ‚ (kursor), X (wybĂłr), Enter (Start). Panel PAD w debuggerze: kolumna Pressed. JeĹ›li nadal
  `none`: sprĂłbowaÄ‡ z `PS2X_PAD_NO_GAMEPAD=1` i podaÄ‡, czy podĹ‚Ä…czony jest jakiĹ› kontroler/joystick.

### KamieĹ„ 6 â€” wybĂłr drogi (2026-11-06)

- (a) **AOT mikrokodu VU1**: w wyĹ›cigu jest jeden obraz kodu VU1 (hash a4460ba4, wgrany raz), 36 punktĂłw wejĹ›cia,
  1136 osiÄ…galnych par. VU1 to ~46% wÄ…tku EE (Ĺ›cieĹĽka krytyczna). Ryzyko maĹ‚e: semantyka zostaje z interpretera
  (generowany kod woĹ‚a te same execUpper/execLower ze staĹ‚Ä… instrukcjÄ…), kontrola hashu â†’ powrĂłt do interpretera.
  Zysk: do ~2Ă— caĹ‚oĹ›ci (potem wÄ…skim gardĹ‚em jest GS).
- (b) **GS na GPU**: GS pracuje na puli wÄ…tkĂłw (~31 s CPU / 20 s), EE czeka na niego tylko ~15% â€” mniejszy
  zysk na Ĺ›cieĹĽce krytycznej; ryzyko duĹĽe (dokĹ‚adnoĹ›Ä‡: CLUT, render-to-texture, PSMT4/8 swizzle, Z24, DOF).
- **WybĂłr: (a)**, potem ewentualnie (b). Etap 1 (zrobiony w ĹşrĂłdĹ‚ach): upper/lower kompilowane w ps2_vu1_core.cpp
  (`PS2_VU1_IMPL`), pÄ™tla `run()` = lambda `step` wspĂłlna dla interpretera i AOT; `gt3_vu1_aot.inc` (lokalny,
  z `scratchpad/vu1gen.py`, NIE do repo) = `switch(pc)` par ze staĹ‚ymi sĹ‚owami. `GT3_NO_VU1AOT=1` wyĹ‚Ä…cza.
  PuĹ‚apka: jedna funkcja z 1136 wstawionymi parami â†’ kompilacja >10 min i brak pamiÄ™ci (przerwana).
- Etap A (zrobiony): ĹĽywotnoĹ›Ä‡ flag MAC w interpreterze (`g_vuFlagDead`, analiza w przĂłd po Ĺ›cieĹĽkach): w GT3 flagi
  czyta tylko 10 FMAND, ~77% FMAC pomija flagi. Zysk maĹ‚y (flagi nie byĹ‚y gĹ‚Ăłwnym kosztem). `PS2X_VU_LIVEFLAGS=1`
  wyĹ‚Ä…cza. PuĹ‚apka: warianty z akumulatorem (MULA/MADDA/OPMULA, upper 0x3C..) teĹĽ zapisujÄ… flagi.
- **Etap B (zrobiony): AOT mikrokodu VU1** â€” `tools/vu1aot.py <obraz.bin> "<log1;log2>" gt3_vu1_aot.inc` generuje bloki
  podstawowe jako lambdy bez przechwytywania, doĹ‚Ä…czane wewnÄ…trz `VU1Interpreter::run` (dostÄ™p do prywatnych pĂłl bez
  zmiany nagĹ‚Ăłwka). Stan = `m_state` + kolejki Q/P/flag interpretera (commit tylko przed czytnikami), FMAC przez SSE
  z szybkÄ… Ĺ›cieĹĽkÄ… bez flag, SQ od razu, XGKICK od razu (czas zakoĹ„czenia jak interpreter: 2 cykle/qword).
  Obraz kodu VU1 w GT3 jest jeden (hash a4460ba4); dane i wygenerowany plik: gt3-data/recomp/vu1/
  (`gt3_vu1_aot.inc` skopiowaÄ‡ do ps2xRuntime/src/lib/vu/ â€” bez niego build dziaĹ‚a jak dawniej, tylko interpreter).
  WejĹ›cia: log `[gt3vu] entries` (MSCAL) + `[gt3aot] brak bloku XXXX` (cele JR) â€” po nowych wpisach w logu
  przegenerowaÄ‡. NieobsĹ‚uĹĽona instrukcja â†’ blok pomijany (interpreter).
  **Weryfikacja:** `GT3_VU1AOT_VERIFY=K` (co K-ty program: AOT i interpreter z tej samej migawki, porĂłwnanie pamiÄ™ci VU,
  VF/VI/ACC/Q/I/MAC/clip/pc i hashy pakietĂłw GIF; zostaje wynik interpretera), `GT3_VU1AOT_VERIFY_FROM=s` (od sekundy).
  Wynik: setki tysiÄ™cy programĂłw, 0 rĂłĹĽnic. `GT3_NO_VU1AOT=1` = sam interpreter.
  Tempo: wyĹ›cig ~3,7â€“5,2 s/60 vsync (byĹ‚o 5,3â€“6,6), wczytywanie/menu duĹĽo szybsze (odliczanie od ~70 s zamiast ~85 s).
  Teraz dominuje GS (rasteryzacja na puli) â†’ nastÄ™pny krok wydajnoĹ›ci to GS.
- **ROZWIÄ„ZANE (2026-11-06): zawieszenie przy starcie wyĹ›cigu (â€žGOâ€ť)** â€” dmac1 co ~240 vsync, kafle-Ĺ›mieci.
  Przyczyna: **brak przerwania GS FINISH (INTC 0)** w runtime. Od startu wyĹ›cigu gra po kaĹĽdej klatce robi odczyt
  GSâ†’EE: handler DMAC VIF1 (0x25B738) przy Ĺ‚aĹ„cuchu zatrzymanym tagiem z IRQ zwiÄ™ksza licznik +0x15 (0x4A8380),
  handler FINISH (0x25B6D8) teĹĽ; przy 2 â†’ 0x25B950 (VIF1 DIR=0, BUSDIR=1), po nim 0x25B9C8 startuje kontynuacjÄ™
  Ĺ‚aĹ„cucha; dopiero jej koniec kasuje flagÄ™ zajÄ™toĹ›ci kanaĹ‚u (+0x1D), na ktĂłrÄ… czeka wÄ…tek renderujÄ…cy (0x2520C0,
  limit 120 vblankĂłw). Teraz gs_frontend przy FINISH 0â†’1 i IMR.FINISHMSK=0 zgĹ‚asza INTC 0 (`GT3_NO_FINISH_IRQ=1`
  wyĹ‚Ä…cza). Wykluczone po drodze: (1) limit 8192 iteracji pÄ™tli Ĺ‚aĹ„cucha VIF1 (podniesiony i tak, z ostrzeĹĽeniem
  `[vif1] lancuch DMA przekroczyl limit`), (2) wyĹ›cig flagi i startu Ĺ‚aĹ„cucha (flaga ustawiana przed CHCR),
  (3) maski DMAC. **WyĹ›cig Arcade jedzie**: licznik czasu okrÄ…ĹĽenia biegnie, gaz (KrzyĹĽyk) rozpÄ™dza auto (67 km/h,
  2. bieg przy ~88 s), ok. 4 s/60 vsync w ruchu.
- Profil wyĹ›cigu w ruchu (z AOT, 20 s): VU1 juĹĽ ~2â€“3 s, dominuje GS na puli (WritePixel 13,8, SampleTexture 13,6,
  combineTexture 7,6, DrawTriangle 6,4, ReadTexture 5,2 s CPU), planista IOP na wÄ…tku EE ~2,3 s.
  Wykluczone: pomijanie skanĂłw wÄ…tkĂłw IOP w `runCycles` (licznik zmian stanu): bez zysku mierzalnego (~4,1 s/60),
  a w wersji miÄ™dzy wywoĹ‚aniami psuĹ‚o budzenie (zdarzenia z EE) â€” wycofane.
- CzuĹ‚oĹ›Ä‡ na liczbÄ™ wÄ…tkĂłw rasteryzacji (wyĹ›cig w ruchu): 2 â†’ ~6,2, 4 â†’ ~5,0, 8 â†’ ~4,1 s/60 vsync â€” wyĹ›cig jest
  ograniczony przez GS. Pula zuĹĽywa jednak Ĺ›rednio tylko ~2,75 z 7 rdzeni â†’ ogranicza opĂłĹşnienie (synchroniczne
  oprĂłĹĽnienia, maĹ‚e zbiory, jeden wÄ…tek m_flusher), nie przepustowoĹ›Ä‡.
- **Pomiar czekania EE na GS** (wyĹ›cig w ruchu, na 5 s): ~1,9 s czekania; flusher bezczynny ~2,9 s â†’ obie strony
  czekajÄ… na siebie. GĹ‚Ăłwne miejsce: `BeginTransfer` (wgranie nakĹ‚ada siÄ™ na odĹ‚oĹĽone rysowania â†’ synchroniczne
  oprĂłĹĽnienie, ~140/s). **Zrobione: wgrania hostâ†’GS jako zbiory w kolejce** â€” `UploadImage` dziaĹ‚a na EE jak dawniej,
  ale zapisy pikseli (`WriteVramUnlocked`) sÄ… nagrywane (`thread_local`, tylko EE w trakcie UploadImage) i trafiajÄ… do
  kolejki FIFO jako zbiĂłr-wgranie z obszarem zapisu (dla `PendingTouches`/LoadClut); kaĹĽde inne wywoĹ‚anie backendu
  najpierw `CloseUpload()` (pod `m_mutex`!). `PS2X_GS_NODEFERUPLOAD=1` wyĹ‚Ä…cza. Kolejka zbiorĂłw 4 â†’ 32
  (`PS2X_GS_MAXSETS`). WyĹ›cig ~4,1 â†’ ~3,6â€“3,8 s/60 vsync. Teraz EE czeka gĹ‚Ăłwnie w LoadClut (paleta z kolejkowanego
  wgrania) â€” do zrobienia: LoadClut jako polecenie w kolejce.
  Wykluczone: paleta z â€žnakĹ‚adkiâ€ť bajtĂłw kolejkowanych wgraĹ„ (bez czekania, gdy ĹşrĂłdĹ‚o palety zapisujÄ… tylko
  wgrania) â€” obraz poprawny, ale tempo bez zmian (~3,6â€“3,8 s/60) â†’ wycofane. Wniosek: dalsze przesuwanie punktĂłw
  synchronizacji EEâ†”GS daje maĹ‚o; ogranicza sama praca rasteryzacji (CPU) â€” krok strukturalny: GS na GPU.
  Wykluczone teĹĽ: pamiÄ™Ä‡ podrÄ™czna zdekodowanych tekstur (caĹ‚a tekstura â†’ tablica liniowa, uniewaĹĽnianie
  generacjami stron 8 KB podbijanymi przez zbiory/transfery): globalna blokada na prymityw Ă— pasy i ponowne
  dekodowania po podbiciach (zakresy zapisu z zapasem) â†’ wolniej (5â€“8 s/60), a peĹ‚ne dekodowanie tekstur 1024Â˛
  zawieszaĹ‚o ekran wczytywania. Wycofane. Dalszy zysk wydajnoĹ›ci tylko przez GS na GPU (duĹĽy projekt).
  Wykluczone teĹĽ: pomijanie kopii Z dla DOF (FRAME 0x1A1) â€” obraz bez zmian, tempo bez zmian (maĹ‚y koszt).
- **Stan (2026-11-06, koniec serii):** wyĹ›cig Arcade jedzie (gaz, wyprzedzanie, ~3,6â€“3,8 s/60 vsync â‰ 16 vsync/s,
  wczytanie do odliczania ~60â€“70 s). Kamienie 1â€“5 osiÄ…gniÄ™te (klawiatura do potwierdzenia przez uĹĽytkownika).
  Do 60 kl./s brakuje ~4Ă— â€” po AOT VU1 ogranicza rasteryzacja GS na CPU; nastÄ™pny krok to backend GS na GPU
  (VRAM z przeplotem PS2 w shaderach/compute, CLUT, render-to-texture, odczyty GSâ†’EE co klatkÄ™) â€” duĹĽy projekt,
  decyzja uĹĽytkownika.
- **Rzadkie zawieszenie przy wczytywaniu (~30â€“40 s, 2Ă— na ~25 przebiegĂłw)**: log [gt3stat] staje, okno nie odpowiada.
  Nie odtworzone w 9 kolejnych przebiegach. NarzÄ™dzie: `tools/hanghunt.ps1` (uruchamia grÄ™ N razy, przy zastoju logu
  robi peĹ‚ny zrzut procesu przez comsvcs MiniDump â†’ analiza `minidump` + `scratchpad/sym.py`).
- PuĹ‚apka: `CloseUpload()` przed blokadÄ… `m_mutex` â†’ wyĹ›cig z wÄ…tkiem okna â†’ uszkodzenie sterty (0xC0000374).
  Diagnoza awarii bez debuggera: WER LocalDumps (HKLM\...\Windows Error Reporting\LocalDumps\ps2EntryRunner.exe)
  + `minidump` (pip) + symbolizacja przez dbghelp z ctypes (`scratchpad/sym.py`, PDB z `/DEBUG`).
- **ROZWIÄ„ZANE: zawieszenie wyĹ›cigu ~4,6 s po starcie** (wÄ…tek renderujÄ…cy w nieskoĹ„czonej pÄ™tli 0x1EBFC8 â€” redukcja
  kÄ…ta koĹ‚a `while (a >= 2Ď€) a -= 2Ď€` przy a = 5e34). ĹaĹ„cuch (wrappery `replaceFunction` na tysiÄ…cach funkcji ze
  straĹĽnikiem wartoĹ›ci): prÄ™dkoĹ›Ä‡ koĹ‚a â† prÄ™dkoĹ›Ä‡ auta â† ciaĹ‚o fizyczne â† impuls zderzenia 0x1FDA68 â† rekord
  kontaktu z NaN â† obrys auta liczony w 0x1FBD80 (normalne krawÄ™dzi `(dy,-dx)/sqrt(dxÂ˛+dyÂ˛)`).
  **BĹ‚Ä…d rekompilatora: `SQRT.S` na R5900 bierze ĹşrĂłdĹ‚o z pola ft** (pole fs = 0), a generator uĹĽywaĹ‚ fs â†’
  sqrt(f0) zamiast sqrt(f2). Poprawione w `ps2xRecomp/src/lib/fpu_translator.cpp`; w lokalnym runnerze 30 z 69
  wystÄ…pieĹ„ poprawionych skryptem (przy regeneracji runnera poprawka wejdzie z generatora). WyĹ›cig trwa dalej,
  gracz wyprzedza (5. miejsce przy ~88 s).
- Zrobione: adres bajtowy CT32/CT24/Z32/Z24 w `WritePixel` liczony raz na bufor (RMW ramki i Z bez 4Ă— przeliczania
  przeplotu; `PS2X_GS_NOFASTADDR=1` wyĹ‚Ä…cza). Obraz bez zmian, tempo w granicach szumu (~4,0â€“4,3 s/60).
- **Do przetestowania rÄ™cznie:** Arcade â†’ Single Race â†’ wyĹ›cig; po â€žGOâ€ť jechaÄ‡ (X = gaz, strzaĹ‚ki = skrÄ™t), sprawdziÄ‡,
  czy wyĹ›cig trwa bez zawieszenia i czy obraz jest poprawny; porĂłwnaÄ‡ pĹ‚ynnoĹ›Ä‡ z `GT3_NO_VU1AOT=1`. ZgĹ‚osiÄ‡,
  jeĹ›li obraz w menu/wyĹ›cigu rĂłĹĽni siÄ™ miÄ™dzy trybami albo gra staje (wtedy teĹĽ z `GT3_NO_FINISH_IRQ=1`).
  Dodatkowo: przejechaÄ‡ caĹ‚e okrÄ…ĹĽenie z zderzeniami z innymi autami (fizyka po poprawce SQRT.S); przy
  Ĺ›mieciach w teksturach sprawdziÄ‡ z `PS2X_GS_NODEFERUPLOAD=1`.

### WydajnoĹ›Ä‡ c.d. (2026-11-06, seria 2: 3,6 â†’ ~1,5 s/60 vsync)

- Pomiar granicy: `GT3DBG_NODRAW=<s>` (od podanej sekundy nic nie rysuje) â€” wyĹ›cig bez rysowania byĹ‚ ~2,3 s/60,
  czyli strona EE teĹĽ byĹ‚a za wolna. Profil bez rysowania: planista IOP (`beginNextReady`/`nextWakeCycle`) ~22%.
- **IOP wsadowo** (`runEeCycles`): EE rozlicza cykle co kilka-kilkadziesiÄ…t, a kaĹĽde wywoĹ‚anie skanowaĹ‚o wszystkie
  wÄ…tki IOP. Teraz co `GT3_IOP_BATCH` cykli EE (domyĹ›lnie 2048 â‰ 7 Âµs; 0 = co 8). WyĹ›cig 3,6 â†’ ~3,1, bez rysowania 2,3 â†’ 1,35.
- **Szybka Ĺ›cieĹĽka trĂłjkÄ…tĂłw i sprite'Ăłw** (`PS2X_GS_SLOWTRI=1` = stara): przedziaĹ‚ X wiersza liczony analitycznie
  (zapas wg szacunku bĹ‚Ä™du float), stan potoku pikseli w strukturach lokalnych (`FastPix`, `FastTex` â€” zapisy przez
  `uint8_t*` nie zmuszajÄ… do ponownego czytania stanu), adres VRAM przyrostowo (wiersz tablicy stron raz na wiersz),
  `__forceinline` na maĹ‚ych funkcjach piksela. Weryfikacja `PS2X_GS_VERIFYTRI=K` (z `PS2X_GS_SYNCFLUSH=1
  PS2X_GS_RASTER_THREADS=1`): ~0,2% trĂłjkÄ…tĂłw rĂłĹĽni siÄ™ 1â€“3 bajtami (pojedyncze piksele) â€” to `/fp:fast` (inne
  zaokrÄ…glenia w kaĹĽdej Ĺ›cieĹĽce), takĹĽe bez zawÄ™ĹĽania przedziaĹ‚u; obraz identyczny. â†’ ~2,0 s/60.
- Statystyka (`GT3DBG_TRISTAT=1`): ~47 tys. trĂłjkÄ…tĂłw/klatkÄ™, Ĺ›rednio ~28 px â€” koszt na prymityw ma znaczenie.
- **Czekanie EE na GS** (`GT3DBG_WAITSTAT=1`: czas synchronicznych oprĂłĹĽnieĹ„ wg adresu wywoĹ‚ujÄ…cego, symbolizacja
  `scratchpad/sym.py`): (1) `LoadClut` ~35% â€” teraz **Ĺ‚adowanie palety jako operacja w kolejce** (wersje palety
  `ClutVersion` liczone przez wÄ…tek `m_flusher` na poczÄ…tku zbioru; zbiĂłr zamykany, gdy jego prymityw zapisuje ĹşrĂłdĹ‚o
  palety; ĹşrĂłdĹ‚o dopisywane do obszarĂłw odczytu, ĹĽeby wgrania w to miejsce czekaĹ‚y w kolejce; `PS2X_GS_NOCLUTDEFER=1`
  wyĹ‚Ä…cza); (2) `Present` (wÄ…tek okna) robiĹ‚ peĹ‚ne oprĂłĹĽnienie pod `m_mutex` co klatkÄ™ â€” teraz **kopia VRAM jako
  znacznik w kolejce**, czeka tylko wÄ…tek okna (`PS2X_GS_SYNCPRESENT=1` = stare); (3) **odczyt GSâ†’EE co klatkÄ™**
  (GT3 czyta blok 64Ă—8 CT32 z rotujÄ…cych adresĂłw 0x3960â€“0x3FA0, na poczÄ…tku 64Ă—32 z 0x1E20 â€” pierĹ›cieĹ„ zapytaĹ„, np.
  widocznoĹ›Ä‡ sĹ‚oĹ„ca/oĹ›lepienie): teraz znacznik w kolejce liczy odczyt we wĹ‚aĹ›ciwym miejscu strumienia, a EE dostaje
  wynik poprzedniego zapytania o tym samym rozmiarze/formacie (opĂłĹşnienie 1â€“2 klatek, `GT3_GS2EE_LAG`, domyĹ›lnie 2;
  przy wiÄ™kszym opĂłĹşnieniu EE czeka tylko na najstarszy znacznik). `PS2X_GS_SYNCREADBACK=1` = synchronicznie,
  `GT3_GS2EE_KEYADDR=1` = klucz z adresem (wtedy praktycznie zawsze synchronicznie). â†’ ~1,5 s/60 (~40 vsync/s).
- **Naprawiony wyĹ›cig w `RowPool`** (pula pasĂłw): pasy brane atomowym licznikiem bez generacji â€” spĂłĹşniony wÄ…tek
  poprzedniego zadania mĂłgĹ‚ wziÄ…Ä‡ pas nowego ze starym `m_fn` (awaria w `DrawDeferredSet`, zrzut WER) albo zdjÄ…Ä‡
  licznik w toku poniĹĽej zera (wywoĹ‚ujÄ…cy krÄ™ci siÄ™ w nieskoĹ„czonoĹ›Ä‡). **Prawdopodobna przyczyna rzadkich zawieszeĹ„
  przy wczytywaniu.** Teraz przydziaĹ‚ pod blokadÄ… z numerem generacji, koniec przez zmiennÄ… warunkowÄ….
- Diagnoza awarii: WER LocalDumps wĹ‚Ä…czone dla ps2EntryRunner.exe (folder `scratchpad/dumps`), analiza
  `scratchpad/crash.py <dmp>` (rejestry z kontekstu wyjÄ…tku + capstone + sym.py).
- **Do przetestowania rÄ™cznie:** wyĹ›cig Arcade â€” czy efekt oĹ›lepienia sĹ‚oĹ„cem / flary zachowuje siÄ™ normalnie
  (odczyt GSâ†’EE z opĂłĹşnieniem); jeĹ›li coĹ› miga albo jest dziwnie jasne: `PS2X_GS_SYNCREADBACK=1`. OgĂłlna pĹ‚ynnoĹ›Ä‡
  i brak zawieszeĹ„ przy wczytywaniu.
- Dalej (seria 2 c.d.):
  - **SprzÄ™ĹĽenie â€žsamo-odwzorowaneâ€ť** (`isSelfMapped`: sprite czyta wĹ‚asnÄ… ramkÄ™ 1:1, u = x + c, prĂłbkowanie punktowe â€”
    GT3 nakĹ‚ada filtr kolorĂłw sceny paskami 32Ă—512) rysowane rĂłwnolegle w zwykĹ‚ych zbiorach (nie szeregowo);
    `PS2X_GS_NOSELFMAP=1` wyĹ‚Ä…cza. Odczyt wĹ‚asnej ramki nie trafia do obszarĂłw odczytu (te same wiersze).
  - Wczesny test Z przed prĂłbkowaniem tekstury (`PS2X_GS_NOEARLYZ=1`), paleta T4 dekodowana raz na prymityw,
    zawijanie wspĂłĹ‚rzÄ™dnych raz na oĹ›, filtrowanie dwuliniowe caĹ‚kowitoliczbowo SSE2 (rĂłĹĽnica â‰¤ 1 na kanaĹ‚;
    `PS2X_GS_FLOATLERP=1` = float), odczyt T4/T8/CT32 bez wywoĹ‚aĹ„, licznik migawek palety lokalny dla wÄ…tku.
  - Wgranie kolidujÄ…ce tylko ze zbiorami w kolejce idzie do kolejki przed bieĹĽÄ…cym zbiorem (bez zamykania go;
    `PS2X_GS_UPLOADBREAK=1` = stare). W praktyce ~1000 zamkniÄ™Ä‡/s i tak zostaje (gra wgrywa w miejsce, z ktĂłrego
    czyta bieĹĽÄ…cy zbiĂłr).
  - **Wgrania jako surowe bajty**: EE dopisuje bajty i przesuwa stan transferu arytmetycznie, rozpakowanie robi
    `m_flusher` (`ReplayUpload`); wczeĹ›niej nagrywanie po pikselu braĹ‚o ~23% wÄ…tku EE (`PS2X_GS_UPLOADREC=1` = stare).
  - WÄ…tek EE byĹ‚ wÄ…skim gardĹ‚em (pomiar czasu CPU wÄ…tkĂłw: `scratchpad/thr.ps1`; profil jednego wÄ…tku: zrzut
    `xperf -i t.etl -o dump.csv -symbols` + `scratchpad/eeprof.py`). VU1 ~50% wÄ…tku EE, z tego ~25% obsĹ‚uga flag.
  - **VU1 AOT**: XGKICK naraz (dĹ‚ugoĹ›Ä‡ z GIFtagĂłw, jedno kopiowanie; `GT3_AOT_SLOWKICK=1`), flagi iloczynu zerowego
    bez long double, **szybka Ĺ›cieĹĽka ĹĽywych flag FMAC** w generatorze (wynik/iloczyn normalny niezerowy â†’ flagi =
    znaki, wpis przez `aotFlagsPlain`; `GT3_AOT_SLOWFLAGS=1` = peĹ‚na Ĺ›cieĹĽka), `AOT_COMMIT` (commit tylko gdy coĹ›
    dojrzaĹ‚o). Weryfikacja AOT: 0 rĂłĹĽnic. **PuĹ‚apka:** zwiÄ™kszenie gĹ‚Ä™bokoĹ›ci analizy ĹĽywotnoĹ›ci flag w generatorze
    (64 â†’ 512 par) dawaĹ‚o rĂłĹĽnice w weryfikacji (~250/140 tys.) â€” analiza jest gdzieĹ› niepoprawna przy dĹ‚ugich
    Ĺ›cieĹĽkach; zostaje 64 (`GT3_AOT_DEPTH`). WejĹ›cie `3c68` czyta flagi poprzedniego programu, wiÄ™c koniec programu
    musi zostaÄ‡ ĹĽywy; JR liczony zachowawczo po wszystkich poczÄ…tkach blokĂłw (powroty z BAL nie sÄ… w logu).
  - Nowe wejĹ›cia VU1 (1978, 17b8, 1b28) dopisane do `gt3-data/recomp/vu1/entries.txt` i przegenerowane.
  - **Tempo vsync**: terminy vsync liczone od poprzedniego terminu â€” po wolnym fragmencie emulacja â€žnadrabiaĹ‚aâ€ť
    (gra szybsza niĹĽ 60 Hz). Teraz zalegĹ‚oĹ›Ä‡ > 100 ms jest porzucana (`GT3_VSYNC_CATCHUP=1` = stare).
  - Skrypt pomiaru `scratchpad/race.ps1` wypisuje teĹĽ Ĺ›redniÄ… z pierwszych 8 odcinkĂłw wyĹ›cigu (przelot kamery +
    odliczanie + start â€” najciÄ™ĹĽszy, porĂłwnywalny fragment).
  - **Wynik:** wyĹ›cig Arcade (Super Speedway) w wiÄ™kszoĹ›ci **peĹ‚ne 60 kl./s** (1,00 s/60 vsync, ograniczone tempem),
    z wieloma autami w kadrze ~50â€“55 kl./s (1,1â€“1,2), przelot kamery/odliczanie ~1,3â€“1,4. Na poczÄ…tku sesji 3,6.
  - **Do przetestowania rÄ™cznie:** pĹ‚ynnoĹ›Ä‡ wyĹ›cigu i czy gra nie przyspiesza po wczytywaniu; dĹşwiÄ™k (IOP wsadowo).
  - Pomiar bez regulacji tempa: `GT3_NOPACE=<sekunda>` (od tej chwili bez czekania na czas rzeczywisty â€” wczeĹ›niej
    menu przelatuje i sekwencja pada siÄ™ rozjeĹĽdĹĽa). `race.ps1` podaje teraz Ĺ›rednie odcinkĂłw 2â€“9 (przelot kamery,
    odliczanie, start) i 10â€“17 (jazda); pierwszy odcinek (przejĹ›cie) pomijany, bo prĂłg go raz Ĺ‚apie, raz nie.
  - W jeĹşdzie ogranicza wÄ…tek GS (`m_flusher` zajÄ™ty ~100%; sprawnoĹ›Ä‡ pasĂłw ~0,85 â€” `[bandstat]` przy
    `GT3DBG_WAITSTAT=1`), w przelocie kamery wÄ…tek EE. Bez zysku (wykluczone): mniej wÄ…tkĂłw puli (wolniej), niĹĽszy
    priorytet puli (`PS2X_GS_POOLPRIO`), aktywne czekanie w puli (`PS2X_GS_SPIN`, domyĹ›lnie 0), usuniÄ™cie commitu przed
    ĹĽywym FMAC w AOT (wolniej â€” czÄ™stsze peĹ‚ne commity).
  - Wgrania: ~7000/s, ~100 MB/s (GT3 co klatkÄ™ przesyĹ‚a tekstury). Rozpakowanie bez wywoĹ‚aĹ„ (`UpWriter`, P4/P8/CT32;
    `PS2X_GS_SLOWUPLOADWRITE=1`) i rĂłwnolegle grupami po 32 wiersze dla duĹĽych (`PS2X_GS_SERIALUPLOAD=1`).
  - TrĂłjkÄ…ty: atrybuty (z, kolor, s/t/q, u/v, mgĹ‚a) jako funkcja liniowa px w wierszu (`PS2X_GS_SLOWATTR=1` = stare),
    wynik wczesnego testu Z przekazywany do zapisu (bez drugiego odczytu Z).
  - **Wynik (bez regulacji tempa): jazda 1,00 s/60 vsync (peĹ‚ne 60 kl./s), przelot kamery/odliczanie ~1,2.**
    Menu i ekrany przejĹ›Ä‡ bez zmian (porĂłwnane zrzuty).
  - Dalej: szybka Ĺ›cieĹĽka UNPACK VIF1 (bez maski, MODE 0, CL â‰Ą WL; `GT3_VIF_SLOWUNPACK=1`), szybkie oprĂłĹĽnianie
    potokĂłw VU1 na koĹ„cu programu (przeskok do ostatniego cyklu gotowoĹ›ci; `PS2X_VU_SLOWFLUSH=1`), wpisy flag
    zatwierdzane w kolejnoĹ›ci wydania (waĹĽne przy rzadszych commitach). Tempo w granicach szumu.
  - **PuĹ‚apka pomiarowa:** pojedyncze przebiegi potrafiÄ… siÄ™ rĂłĹĽniÄ‡ o ~20% (raz 1,44 zamiast 1,2 przy tym samym
    kodzie) â€” porĂłwnania A/B robiÄ‡ po 3 przebiegi. UsuniÄ™cie commitu przed ĹĽywym FMAC wyglÄ…daĹ‚o na zysk tylko dlatego,
    ĹĽe peĹ‚ny potok flag przerywaĹ‚ programy VU1 (`[VU1 reserved upper] ... 0xffffffff` w logu); z poprawnym commitem przy
    braku slotu jest wolniej (1,44/1,13) â€” wycofane. SprawdzaÄ‡ log pod kÄ…tem `reserved`.
  - Demo rajdowe (bez regulacji tempa) 0,6â€“1,0 s/60 â€” z zapasem. Kafli na niebie w demie nie widaÄ‡ (3 przebiegi,
    zawsze ta sama trasa rajdowa) â€” nie odtworzone. 6 przebiegĂłw `hanghunt` bez zawieszeĹ„ i awarii.
  - NastÄ™pny duĹĽy krok (jeĹ›li przelot kamery ma mieÄ‡ 60 kl./s): VU1/VIF1/GIF na osobnym wÄ…tku (jak na PS2, VU1 dziaĹ‚a
    rĂłwnolegle z EE). WÄ…tek EE: VU1 ~44%, VIF ~8%, GS ~13%, kod gry ~8%. Ryzyko: synchronizacja stanu VIF1/DMA,
    przerwaĹ„ i kolejnoĹ›ci Ĺ›cieĹĽek GIF (PATH1/2 z wÄ…tku VU, PATH3 z EE).
  - **Miara klatek:** `[gt3stat] ... fin= flip=` â€” `flip` = liczba vsyncĂłw, przy ktĂłrych zmieniĹ‚ siÄ™ DISPFB1/2 (zamiana
    buforĂłw = wyrenderowana klatka), `fin` = zdarzenia GS FINISH. `race.ps1` wypisuje â€žkl/s (zamiany buforĂłw)â€ť.
    Przy asynchronicznym GS samo s/60 vsync myli (vsync idzie rĂłwno, a gra gubi klatki). Wynik bez wÄ…tku GIF:
    przelot kamery 40â€“46 kl./s, jazda 60 kl./s.
  - **PrĂłba: wÄ…tek GIF** (`GT3_GIF_THREAD=1`, domyĹ›lnie wyĹ‚Ä…czony): pakiety GIF po arbitraĹĽu do kolejki FIFO
    przetwarzanej przez osobny wÄ…tek; metody GS woĹ‚ane z EE poza kolejkÄ… czekajÄ… na jej oprĂłĹĽnienie (`g_gsGifDrain`,
    `GT3DBG_WAITSTAT=1` â†’ `[gifdrain]`), natywne skrĂłty PATH3 wyĹ‚Ä…czone w tym trybie. Obraz poprawny, przelot kamery
    46â€“50 kl./s (+10%), ale przed wyĹ›cigiem ~4 s przestoju (licznik DMA VIF1 stoi â€” gra czeka na zdarzenie GS, pewnie
    limit 120 vblankĂłw) â†’ start wyĹ›cigu ~3,4 s pĂłĹşniej. Do zbadania, jeĹ›li ta droga ma byÄ‡ domyĹ›lna.
    Wykluczone (2 prĂłby): zgubione przerwanie FINISH (FINISH przychodzÄ…cy przed skasowaniem poprzedniego jest teraz
    zgĹ‚aszany po skasowaniu â€” `g_gsFinishPending`, tylko w trybie wÄ…tku GIF) â€” przestĂłj bez zmian (fin=2, licznik DMA
    VIF1 stoi ~4 s przy ~40 s, po wyborze auta). NastÄ™pny krok: zrzut wÄ…tkĂłw EE w czasie przestoju (na co czeka).

### WydajnoĹ›Ä‡ (kamieĹ„ 6, 2026-11-05)

- Profilowanie: `xperf` (Windows Performance Toolkit, jest w `Program Files (x86)\Windows Kits\10`, konto ma
  admina) + PDB z samymi symbolami publicznymi: w `out\build\dev` ustawione
  `CMAKE_EXE_LINKER_FLAGS_RELEASE=/INCREMENTAL:NO /DEBUG` (tylko relink). Sesja:
  `xperf -on PROC_THREAD+LOADER+PROFILE -stackwalk Profile`, `xperf -d t.etl`, potem z `_NT_SYMBOL_PATH`
  na katalog exe: `xperf -i t.etl -symbols -a profile -detail` (pĹ‚asko) lub `-a stack -butterfly` (HTML).
  Funkcje statyczne/anonimowe sÄ… przypisywane do najbliĹĽszego symbolu publicznego (np. â€žvector::assignâ€ť).
- Wynik (wyĹ›cig): wÄ…tek EE = 100% jednego rdzenia; z tego rasteryzacja GS ~60% (wywoĹ‚ywana synchronicznie
  przez XGKICK VU1 â†’ GIF â†’ `GSCpuBackend::Submit`), interpreter VU1 ~30%, kod gry maĹ‚o. WyĹ›cig to ~5 mln
  pikseli/klatkÄ™ (scena ~1,9 mln w trĂłjkÄ…tach + ~6 peĹ‚noekranowych przebiegĂłw sprite'Ăłw DOF/kopii) przy
  ~40 ns/piksel â†’ ~240 ms/klatkÄ™. Na 60 kl./s potrzeba ~3 ns/piksel: bez wielowÄ…tkowej/SIMD rasteryzacji
  (albo backendu GPU) siÄ™ nie da.
- Wykluczone / bez efektu: (1) â€žcacheâ€ť stron tekstur (memcpy 8 KB przy zmianie strony) â€” wyĹ‚Ä…czony,
  brak zmiany czasu; (2) kopiowanie reszty danych VIF1 przy kaĹĽdym bicie I (O(nÂ˛)) â€” teraz przesuniÄ™cie,
  brak zmiany czasu; (3) **wÄ…tek rasteryzacji** (kolejka poleceĹ„, odczyty czekajÄ… na oprĂłĹĽnienie;
  `PS2X_GS_THREAD=1`, domyĹ›lnie wyĹ‚Ä…czony): ekran jÄ™zyka 21 â†’ 28 vblank/s, ale po wyborze jÄ™zyka gra
  utyka na animacji przejĹ›cia (przyczyna nieznana; logika gry ucieka przed rysowaniem) â€” do zbadania.
- **DziaĹ‚a: rĂłwnolegĹ‚e pasy wierszy** w DrawSprite/DrawTriangle dla prymitywĂłw â‰Ą 8192 px (pula wÄ…tkĂłw
  `RowPool` w gs_cpu_backend.cpp, synchronicznie â€” wywoĹ‚ujÄ…cy czeka, wiÄ™c gra nie widzi rĂłĹĽnicy;
  `PS2X_GS_RASTER_THREADS=N`, 1 = wyĹ‚Ä…cz). Menu/ekran jÄ™zyka: 21 â†’ **60 vsync/s** (peĹ‚na prÄ™dkoĹ›Ä‡),
  wyĹ›cig 2,7 â†’ 3,3 kl./s. W wyĹ›cigu wÄ…tek EE: ~50% rasteryzacja (gĹ‚Ăłwnie maĹ‚e trĂłjkÄ…ty ~270 px na wÄ…tku EE),
  ~43% interpreter VU1. NastÄ™pne: interpreter VU1 i koszt piksela maĹ‚ych trĂłjkÄ…tĂłw.
- Interpreter VU (ps2_vu1_core.cpp) jest dokĹ‚adny co do cyklu; `commitReadyPipelines` skanowaĹ‚ wszystkie
  potoki 2Ă— na cykl. Teraz pamiÄ™ta najbliĹĽszy cykl gotowoĹ›ci (tablica po `this`, bo zmiana `ps2_vu1.h` =
  peĹ‚na przebudowa; `PS2X_VU_NOCOMMITCACHE=1` wyĹ‚Ä…cza): wyĹ›cig ~19 â†’ ~16â€“18 s na 60 vsync (~3,5 kl./s).
- **OdkĹ‚adanie prymitywĂłw (dziaĹ‚a):** `Submit` odkĹ‚ada do 1024 prymitywĂłw, `FlushDeferredUnlocked` rysuje je
  rĂłwnolegle pasami wierszy ekranu (kaĹĽdy wÄ…tek przechodzi wszystkie prymitywy w kolejnoĹ›ci, przyciÄ™te
  scissorem do swojego pasa â†’ kolejnoĹ›Ä‡ pikseli zachowana). OprĂłĹĽnianie przy kaĹĽdej innej metodzie backendu
  (CLUT, transfery, odczyty, snapshot do prezentacji). Synchronicznie, wiÄ™c bez problemu wÄ…tku GS.
  `PS2X_GS_NODEFER=1` wyĹ‚Ä…cza. WyĹ›cig ~13 s/60 vsync (~4,6 kl./s), obraz i menu bez zmian.
- Profil z prawdziwymi symbolami: na koĹ„cu `ps2xRuntime/CMakeLists.txt` lokalnie dopisane
  `set_source_files_properties(<pliki VU/GS> PROPERTIES COMPILE_OPTIONS "/Zi")` (linia `# GT3DBG-PROFILE`,
  wykluczona z gt3.patch przez `":!ps2xRuntime/CMakeLists.txt"`). Bez tego anonimowe funkcje sÄ… przypisywane
  do sÄ…siednich symboli publicznych (faĹ‚szywe â€žvector::assignâ€ť itp.).
- VU: producenci obniĹĽajÄ… `next` (najbliĹĽszy cykl gotowoĹ›ci), skan i minimum w jednym przejĹ›ciu,
  `advanceTo` przeskakuje cykle bez zdarzeĹ„ (gdy nie trwa XGKICK). WyĹ›cig ~12 s/60 vsync (~5 kl./s).
  Profil (wyĹ›cig): rasteryzacja trĂłjkÄ…tĂłw (lambda DrawTriangle, WritePixel, combineTexture, ReadTexture,
  LookupCLUT, lerpChannel) wciÄ…ĹĽ najwiÄ™ksza, potem VU (commitReadyPipelines ~3,5 s/20 s, run, normalizeOperand).
- Pasy: granice pasa w `thread_local t_bandY0/1` (DrawSprite/DrawTriangle/WritePixel je respektujÄ…) zamiast
  kopii prymitywu z przyciÄ™tym scissorem; zakres Y prymitywu liczony raz; pasy po â‰Ą4 wiersze, do 8Ă—wÄ…tki.
  Prymitywy ze sprzÄ™ĹĽeniem (tekstura nakĹ‚ada siÄ™ na bufor ramki) rysowane szeregowo. WyĹ›cig ~10 s/60 vsync
  (~6 kl./s). PuĹ‚apka: lambda nie przechwytuje zmiennych `thread_local` â€” w wÄ…tkach puli to inne obiekty
  (crash przy starcie); przekazywaÄ‡ przez zwykĹ‚Ä… referencjÄ™.
- WÄ…tek EE (wyĹ›cig): ~38% czekanie na rysowanie pasĂłw (oprĂłĹĽnianie gĹ‚Ăłwnie przez LoadClut), ~45% VU1.
- Pomiar licznikami (chrono w VU1Interpreter::run i FlushDeferredUnlocked): na ~10 s wyĹ›cigu VU1 run ~8 s
  (z GIF/GS przez XGKICK), oprĂłĹĽnianie ~2,5 s â†’ **interpreter VU1 jest gĹ‚Ăłwnym wÄ…skim gardĹ‚em**.
- Wykluczone: (1) migawki CLUT zamiast oprĂłĹĽniania przy LoadClut â€” brak zysku, wycofane; (2) przebudowy
  cache dekodera VU (MPG) â€” rzadkie (<500 na przebieg).
- VU: `normalizeFmacResult` liczyĹ‚ kaĹĽdy wynik FMAC drugi raz w `long double` tylko dla flag; dla normalnych
  wynikĂłw float (nie 0/denormal/inf/Â±MAX) wartoĹ›Ä‡ siÄ™ nie zmienia, flagi = znak â†’ szybka Ĺ›cieĹĽka
  (`PS2X_VU_EXACT_FLAGS=1` przywraca). VU ~8,3 â†’ ~7 s na okno, wyĹ›cig ~9,7 s/60 vsync (~6 kl./s).
  Dalej w VU: kopiowanie VF przed/po instrukcji (opĂłĹşnione zapisy), calculatePairReadyCycle, krokowanie XGKICK.
- VU drobne: XGKICK robiĹ‚ `m_xgkick = {}` (zerowanie+kopia 64 KB bufora pakietu przy kaĹĽdym XGKICK) â€”
  teraz zerowanie pĂłl; kopiowanie qwordu memcpy. Maski zajÄ™tych slotĂłw potokĂłw w commitReadyPipelines.
  Razem wyĹ›cig ~9,1 s/60 vsync (~6,5 kl./s). Zyski z mikrooptymalizacji interpretera VU malejÄ… (2â€“5%);
  wiÄ™kszy krok wymagaĹ‚by rekompilatora mikrokodu VU1 albo VU1 na osobnym wÄ…tku (asynchronicznie z EE,
  jak na PS2) â€” oba duĹĽe.
- Build dev bez LTCG: maĹ‚e funkcje VU wywoĹ‚ywane miÄ™dzy plikami (normalizeOperand ~1,8 s/20 s) nie sÄ…
  wstawiane. Inline `normalizeOperand` w upper/lower (makro na lokalnÄ… funkcjÄ™) â†’ ~8,4 s/60 vsync (~7 kl./s).
  /GL tylko dla 3 plikĂłw VU daĹ‚o ~3% (szum) â€” nie wprowadzone.
- Rasteryzer: `std::floor/ceil/lround` (wywoĹ‚ania ucrtbase, MSVC bez SSE4.1) zamienione na rzutowania;
  maĹ‚y zysk (rysowanie jest na wÄ…tkach puli). WyĹ›cig ~8 s/60 vsync (~7,5 kl./s).
- PuĹ‚apka: `ps2xRuntime/CMakeLists.txt` ma koĹ„ce LF â€” skrypt dzielÄ…cy po CRLF wyczyĹ›ciĹ‚ plik (przywrĂłcony
  z gita). Lokalna linia `# GT3DBG-PROFILE` (/Zi dla plikĂłw VU/GS/VIF) jest poza gt3.patch.
- **KamieĹ„ 5, otwarte:** powtĂłrka demo i przejĹ›cie do ekranu tytuĹ‚owego majÄ… zepsute kolory (fiolet/biel
  na jednej z losowych tras demo, zielony odcieĹ„ przy przejĹ›ciu z logo GT3). ZwykĹ‚y wyĹ›cig demo poprawny.
- **PrzejĹ›cie/powtĂłrka = korekcja kolorĂłw â€žchannel shuffleâ€ť** (log rysowaĹ„: `GT3_DRAWLOG=<vsync>` w GT3DBG,
  usuniÄ™ty): bufor ekranu 0xA0 (CT24) czytany jako PSMT8 (tbp 0x1400, tbw 2, CLUT 0x3E80), 3 przebiegi
  sprite'Ăłw 64Ă—32 do FBP 0x1F3 (FBMSK ff000000): R (rgba 80,0,0, abe=0, uv 0,0â€“8,64), +B (uv 8,0â€“16,64),
  +G (uv 4,2â€“12,66), blend 0x68 + FIX 0x80 (addytywnie); potem paski 8Ă—32 (T8 tbp 0x3E84, CLUT 0x3E60..)
  z powrotem do 0xA0. Zgodnie z columnTable8: T8 (0,0)=bajt R, (8,0)=B, (4,2)=G.
  Poprawka: sprite'y prĂłbkowane w caĹ‚kowitych wspĂłĹ‚rzÄ™dnych pikseli z uĹ‚amkowym XY/UV (wczeĹ›niej +0,5 i UV
  obciÄ™te â†’ przy 2 tekslach/piksel inny wiersz PSMT8). `PS2X_GS_SPRITE_HALFPIXEL=1` = stare. Efekt: odcieĹ„
  z zielonego na cyjanowy (B juĹĽ dziaĹ‚a), **R nadal brak** â€” nastÄ™pny krok: zrzut 0x1F3 po przebiegu R
  i porĂłwnanie z bajtami R bufora 0xA0; sprawdziÄ‡, czy przebieg R (abe=0) nie jest nadpisywany.
- Ustalone (log w DrawSprite): sprite'y 8Ă—16 px, u 1:1, v krok 4 (wiersze 0,4,8â€¦ = bajty R wg columnTable8;
  stare +0,5 dawaĹ‚o wiersze 2,6,10 = G â†’ zielony odcieĹ„). Kolory wierzchoĹ‚kĂłw poprawne (R: 80,0,0; B; G),
  teksele trafiajÄ… w bajty. Cyjan bierze siÄ™ z **palety 0x3E80**: wpisy majÄ… Râ‰0x17, Gâ‰Bâ‰0x80 (np. 0x00828217),
  wiÄ™c kanaĹ‚ R wychodzi ~5Ă— za ciemny. Do sprawdzenia: skÄ…d paleta 0x3E80 (upload z EE czy rysowana
  wczeĹ›niej w klatce; przebiegi do FBP 0x191 CT16/0x1F4) i czy na PS2 przejĹ›cie teĹĽ jest zabarwione.
  **Trop:** paleta 0x3E80 jest wgrywana z EE co klatkÄ™ (BITBLT dir=0, CT32 32Ă—32 do dbp 0x3E80), a jej
  wpisy sÄ… niemonotoniczne/losowe (np. 00:0080200a 11:00302528 22:00c004b2â€¦), wiÄ™c to nie krzywa korekcji â€”
  podejrzany bĹ‚Ä…d w kodzie EE liczÄ…cym tablicÄ™ (FPU/VU0 makro, jak wczeĹ›niej CVT.W.S). NastÄ™pnie: znaleĹşÄ‡
  ĹşrĂłdĹ‚o w RDRAM (MADR Ĺ‚aĹ„cucha PATH3 dla tego BITBLT albo szukanie wzorca w zrzucie RDRAM) i funkcjÄ™,
  ktĂłra tÄ™ tablicÄ™ wypeĹ‚nia; porĂłwnaÄ‡ wynik z oczekiwanÄ… krzywÄ… (np. gamma/fade).
  Sprawdzone: LoadClut (CSM1, 16Ă—16 z cbp, bw 1) poprawny. Dane wgrania 0x3E80 leĹĽÄ… w RDRAM pod 0xCED0C0
  i 0xDAA180 (4 KB, rĂłĹĽne kopie), wyglÄ…dajÄ… na dane skompresowane/losowe (~210 wartoĹ›ci na kanaĹ‚), nie
  na LUT. Hipoteza: 0x3E80 wspĂłĹ‚dzielÄ… inne dane (np. tekstura) i prawdziwa tablica korekcji jest
  nadpisywana albo wgrywana w innej kolejnoĹ›ci (arbitraĹĽ PATH2/PATH3, zaleĹĽnoĹ›Ä‡ od FINISH/SIGNAL).
  OdĹ‚oĹĽone â€” wpĹ‚ywa tylko na przejĹ›cie demoâ†’tytuĹ‚ i powtĂłrkÄ™.
  Uwaga: `m_vtxQueue[0]` w logu frontendu to nie v0 bieĹĽÄ…cego prymitywu (bufor cykliczny) â€” kolory
  wierzchoĹ‚kĂłw logowaÄ‡ z `batch.vertices` w backendzie.
- **Do sprawdzenia:** zielony/fioletowy odcieĹ„ przy przejĹ›ciu z demo do ekranu tytuĹ‚owego. Raz w powtĂłrce demo (znak wodny â€žGRAN TURISMO 3â€ť) obraz miaĹ‚ zepsute kolory
  (biaĹ‚o-niebiesko-fioletowe). Nie powtĂłrzyĹ‚o siÄ™ w tym samym momencie w kolejnym przebiegu; podejrzane
  obejĹ›cie DOF (`g_gt3CompositeZPass`, ZBUF 0x1A1) w innym przebiegu powtĂłrki.
- Kierunki: szybsze Ĺ›cieĹĽki pikselowe (trĂłjkÄ…ty: krawÄ™dzie inkrementalnie zamiast peĹ‚nych barycentrycznych
  w float/double na caĹ‚ym bbox; specjalizacja WritePixel/SampleTexture pod PSMCT32/PSMT4/Z24), rĂłwnolegĹ‚e
  pasy wierszy dla duĹĽych sprite'Ăłw, interpreter VU1 (normalizeFmac*/commitReadyPipelines sÄ… drogie).
- Pliki RoFS (GT3.VOL): spis jest zaszyfrowany na pĹ‚ycie, w RAM rozpakowany (nazwy ok. 0x4CB000).
  Bazy: wyszukiwanie binarne po 64-bitowym hashu (0x232658/0x232768), rekordy `paramdb_eu.db` itd.
- Diagnoza: wrappery `replaceFunction(addr, lambda)` + `lookupFunction` (oryginaĹ‚) Ĺ›wietnie logujÄ… argumenty;
  uwaga: funkcje nie-liĹ›cie mogÄ… â€žwrĂłciÄ‡â€ť w poĹ‚owie (pc wewnÄ…trz) â€” wyniki czytaÄ‡ tylko z funkcji-liĹ›ci.
  Zrzut RDRAM do pliku z bloku `[gt3stat]` + wyszukiwanie wzorcĂłw w Pythonie.
- Diagnoza wÄ…tkĂłw EE: tymczasowy zrzut w bloku `[gt3stat]` (EeScheduler.cpp): status/pc/ra wÄ…tkĂłw
  i adresy kodu ze stosu â€” dziaĹ‚a dobrze do znalezienia pÄ™tli oczekiwania (wÄ…tek gĹ‚Ăłwny = id 1,
  wÄ…tek renderujÄ…cy = id 9, entry 0x1013C0, wywoĹ‚uje vtable sceny z gpâ’0x6EE0).
- Uwaga: `sed -i` z Git Bash i `Set-Content` w PowerShell psujÄ… CRLF/BOM w plikach PS2Recomp â€”
  wtedy `git apply -R gt3_diag.patch` nie przechodzi. EdytowaÄ‡ narzÄ™dziem Edit.
- NarzÄ™dzie: `capstone` (pip) do deasemblacji IRX; uwaga, w pliku nie nazywaÄ‡ skryptu `dis.py` (kolizja z moduĹ‚em).
  Indeksy importĂłw: zaĹ›lepka `jr ra` pod adresem X ma numer funkcji w X+4.
