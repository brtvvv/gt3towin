# GT3 przez PS2Recomp (rekompilacja statyczna)

PS2Recomp (https://github.com/ran-j/PS2Recomp, GPLv3) tłumaczy kod MIPS gry na C++
i łączy go z runtime (grafika GS/VU1, IOP z oryginalnymi modułami IRX, pad, dźwięk).

## Co jest gdzie

- `tools/mkelf.py` (to repo): z `orig/core_100000.bin` robi `CORE.elf`, mapę funkcji
  `functions.csv` i `config.toml` dla `ps2_recomp`. Wyniki zapisuj POZA repo.
- `gt3-iop-fixes.patch` (ten katalog): poprawki do PS2Recomp (ps2xIOP, ps2xRuntime/src/lib, ps2xRecomp) potrzebne dla GT3:
  - alokator pamięci IOP nie oddawał zwolnionej pamięci (MEMCLEAR.IRX zajmował całą stertę),
  - sterta IOP 0xA0000–0x1FC000 zamiast 0x120000–0x1F0000 (moduły PDI chcą ok. 1,3 MB),
  - importy `cdvdman:14` (`sceCdTrayReq`) i `cdvdman:24` (`sceCdReadClock`),
  - procedury RPC działają w wątku serwera uśpionym w `sceSifRpcLoop` (jak na prawdziwym IOP),
    a nie bezpośrednio; moduły Polyphony (LIBPDI/PDICDVD) inaczej się zakleszczają,
  - `DelayThread`/`WaitSema` wywołane poza wątkiem oddają czas pozostałym wątkom,
  - `sifman:32` (`sceSifSetDmaIntr`): transfer IOP→EE + wywołanie procedury zakończenia,
  - wirtualna płyta: 14 bajtów XA System Use po nazwie w rekordach katalogu (GT3 porównuje nazwy przez strcasecmp),
  - EE `StartThread` zwraca ID wątku zamiast 0 (GT3 porównuje wynik z ID i inaczej ponawia w nieskończoność),
  - stosy procedur przerwań (VBlank itd.) w 0x80000–0x100000 zamiast na końcu RAM, gdzie GT3 trzyma
    stos głównego wątku (przerwanie nadpisywało zmienne dekodera gzip i gra pisała poza pamięć),
  - generator (ps2xRecomp): `vlqi/vsqi/vlqd/vsqd` adresują pamięć danych VU0 (0x11004000), a nie RAM,
    i `vsqi/vsqd` mają właściwe operandy (fs = źródło, it = adres); bez tego macierze GT3 nie trafiały do VU0
    i wszystkie wierzchołki miały w=0,
  - VU0 `vf0` wymuszone na (0,0,0,1) przed wykonaniem kodu gry,
  - pamięć podręczna stron tekstur GS unieważniana przy wgrywaniu danych i rysowaniu,
  - SMODE2.FFMD odczytywane poprawnie (1 = tryb półklatek) i półklatki rozciągane na pełną wysokość.
- Prywatne repo `gt3-data/recomp/`: gotowy `CORE.elf` i `gt3_recompiled.zip`
  (wynik `ps2_recomp`, nigdy nie trafia do tego publicznego repo).

## Konfiguracja

Mapa funkcji pochodzi z `asm/0.s`. Funkcje bibliotek Sony (SIF, CD, pad, karta pamięci,
libsd: 152 sztuki) rozpoznaje `ps2_analyzer CORE.elf analyzer.toml`; jego listę `stubs`
trzeba wkleić do `config.toml` (runtime ma dla nich gotowe zamienniki).

## Linux (GCC)

Runtime wymaga flag SSE: `cmake -S . -B out/gt3 -DCMAKE_CXX_FLAGS="-msse4.2 -mavx2 -mfma"`.
Pakiety: libxrandr/xinerama/xcursor/xi-dev, libgl1-mesa-dev, libasound2-dev,
ffmpeg (libavcodec-dev itd.), libzstd-dev.

## Stan (30.10, noc)

Ekran wyboru języka wyświetla się poprawnie na całym ekranie, pad (klawiatura) działa.
Po wyborze języka GT3 odtwarza film intro sprzętowym dekoderem IPU (MPEG-2), którego PS2Recomp
nie emuluje: gra czeka w pętli na dane z IPU. Próby obejścia (IPU zwracające koniec sekwencji,
asynchroniczne RPC dla PDISTR/MPG1) pomijają film, ale gra potem odwołuje się do zniszczonej sceny
(wątek renderujący nie zdążył odświeżyć wskaźnika). Następny krok: emulacja IPU albo pominięcie
filmów na poziomie gry.

Po zmianie generatora trzeba przegenerować kod (`ps2_recomp config.toml`); zmienione pliki są też
w prywatnym `gt3-data/recomp/gt3_vu0fix.zip`.
