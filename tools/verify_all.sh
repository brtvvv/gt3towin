#!/bin/sh
# Sprawdza, czy wszystkie dopasowane funkcje z src/matched dalej zgadzaja sie z oryginalem.
cd "$(dirname "$0")/.."
CC=${CC:-ee-gcc2.9-991111-01}
grep -v '^#' src/matched/manifest.txt | while read f sym addr; do
  python3 tools/check.py "$CC" "src/matched/$f" "$sym" "$addr" -O2 -G8 | head -1
done
