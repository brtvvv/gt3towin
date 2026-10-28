# GT3 przez PS2Recomp (rekompilacja statyczna)

PS2Recomp (https://github.com/ran-j/PS2Recomp, GPLv3) tłumaczy kod MIPS gry na C++
i łączy go z runtime (grafika GS/VU1, IOP z oryginalnymi modułami IRX, pad, dźwięk).

## Co jest gdzie

- `tools/mkelf.py` (to repo): z `orig/core_100000.bin` robi `CORE.elf`, mapę funkcji
  `functions.csv` i `config.toml` dla `ps2_recomp`. Wyniki zapisuj POZA repo.
- `gt3-iop-fixes.patch` (ten katalog): poprawki do PS2Recomp potrzebne dla GT3:
  - alokator pamięci IOP nie oddawał zwolnionej pamięci (MEMCLEAR.IRX zajmował całą stertę),
  - sterta IOP 0xA0000–0x1FC000 zamiast 0x120000–0x1F0000 (moduły PDI chcą ok. 1,3 MB),
  - importy `cdvdman:14` (`sceCdTrayReq`) i `cdvdman:24` (`sceCdReadClock`),
  - procedury RPC działają w wątku serwera uśpionym w `sceSifRpcLoop` (jak na prawdziwym IOP),
    a nie bezpośrednio; moduły Polyphony (LIBPDI/PDICDVD) inaczej się zakleszczają,
  - `DelayThread`/`WaitSema` wywołane poza wątkiem oddają czas pozostałym wątkom,
  - `sifman:32` (`sceSifSetDmaIntr`): transfer IOP→EE + wywołanie procedury zakończenia.
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

## Stan (28.10)

Gra startuje, ustawia tryb wideo PAL, ładuje wszystkie 15 modułów IRX, przechodzi
inicjalizację SIF/RPC, czyta płytę (sektor 16 i katalog główny, ISO9660) i szuka `gt3.vol`
(w chmurze go nie ma, więc dalsze testy tylko z pełnym folderem płyty).
