#!/bin/sh
# Sprawdza, czy wszystkie dopasowane funkcje dalej zgadzaja sie z oryginalem.
cd "$(dirname "$0")/.."
CC=${CC:-ee-gcc2.9-991111-01}
grep -v '^#' src/matched/manifest.txt | while read f sym addr; do
  python3 tools/check.py "$CC" "src/matched/$f" "$sym" "$addr" -O2 -G8 | head -1
done
ok=0; bad=0
for f in src/auto/*.cpp; do
  if python3 tools/try.py "$f" 2>/dev/null | grep -q '^-- 1/1'; then ok=$((ok+1)); else bad=$((bad+1)); echo "ZEPSUTE: $f"; fi
done
echo "src/auto: $ok OK, $bad zepsutych"
for f in src/classes/*.cpp; do python3 tools/try.py "$f" | grep -E "^(DIFF|SIZE)" && echo "ZEPSUTE: $f"; done
