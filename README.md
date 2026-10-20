# gt3towin

Dekompilacja Gran Turismo 3 A-Spec (PS2) z celem natywnego portu na PC, a w przyszłości na PSP.

**Repo nie zawiera żadnych plików ani kodu gry.** Potrzebujesz własnej kopii płyty.

## Wersja docelowa

PAL (Europe, Australia), v2.00, `SCES_502.94`.

- `SCES_502.94` to tylko loader. Właściwy kod gry jest w `CORE.GT3`
  (6 bajtów nagłówka + raw deflate).
- Po rozpakowaniu: nagłówek 0x114 bajtów, potem obraz kodu ładowany pod `0x100000`,
  entry `0x100008`.
- `.text` 0x100000–0x28FA00, `.data` 0x28FA00–0x354B83, `.bss` 0x354C00–0x4B461C, `$gp = 0x359370`.
- Około 11 400 funkcji. Brak symboli, ale są nazwy klas C++ (RTTI, mangling gcc 2.x;
  przestrzeń nazw `gt2k`).

## Kompilator

Gra jest w C++ skompilowanym oficjalnym kompilatorem Sony **ee-gcc 2.9-ee-991111**
z flagami `-O2 -G8`. Wszystkie testowane funkcje zgadzają się bajt w bajt z rodziną
2.9-ee (990721, 991111, 991111a, 991111-01). Na razie używamy **991111-01**.

Odrzucone kandydaty:
- ee-gcc 2.96: robi tail-calle i ma inny układ ramki stosu,
- SN ee-gcc 2.95.x: zapisuje rejestry przez `sq` (128-bit), a oryginał przez `sd`.

Kod trzeba kompilować jako **C++**. W trybie C kompilator robi inne optymalizacje wywołań.

## Postęp

Dopasowane funkcje są w `src/matched/` (lista w `manifest.txt`).
Sprawdzenie: `sh tools/verify_all.sh`.

## Jak zacząć

```
pip install splat64 spimdisasm rabbitizer
python tools/extract_core.py <ścieżka>/CORE.GT3 orig/core_100000.bin
python -m splat split config/gt3.yaml
sh tools/setup_compilers.sh
sh tools/verify_all.sh
```

Narzędzia:
- `tools/funcasm.py <func>` wypisuje asembler jednej funkcji,
- `tools/check.py <kompilator> <plik.cpp> <symbol> <adres>` kompiluje i porównuje z oryginałem.

sha1 `orig/core_100000.bin`: `8c69f1d3fec6bc96e6057dc0f0494051cd177ac7`
