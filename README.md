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

## Jak zacząć

```
pip install splat64 spimdisasm rabbitizer
python tools/extract_core.py <ścieżka>/CORE.GT3 orig/core_100000.bin
python -m splat split config/gt3.yaml
```

sha1 `orig/core_100000.bin`: `8c69f1d3fec6bc96e6057dc0f0494051cd177ac7`
