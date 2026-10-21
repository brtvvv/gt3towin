#!/bin/sh
# Aktualizuje STATUS.md (postep dopasowan) i wypycha do repo.
cd "$(dirname "$0")/.."
TOTAL=$(grep -c '^nonmatching func_' asm/0.s)
AUTO=$(ls src/auto src/perm src/tf src/xfer src/manual 2>/dev/null | grep -cE "^func_.*\.(cpp|c)$")
MAN=$(( $(grep -vc '^#' src/matched/manifest.txt) + $(grep -ho "^// @" src/classes/*.cpp 2>/dev/null | wc -l) ))
TRIED=$(( $(ls /tmp/func_*.cpp 2>/dev/null | wc -l) + AUTO ))
RUN=$(pgrep -f "^python3 tools/(auto_m2c|perm_run)" >/dev/null && echo "trwa" || echo "zakonczony")
cat > STATUS.md <<EOS
# Postep

Ostatnia aktualizacja: $(TZ=Europe/Warsaw date '+%Y-%m-%d %H:%M')

| | |
|---|---|
| Funkcji w grze | $TOTAL |
| Dopasowane funkcje (pliki func_*) | $AUTO |
| Dopasowane metody klas + pierwsze testy | $MAN |
| **Razem** | **$((AUTO + MAN))** ($(( (AUTO + MAN) * 100 / TOTAL ))%) |
| Automatyczny przebieg | $RUN, sprawdzono ok. $TRIED funkcji |
EOS
git add -f STATUS.md src/auto src/perm src/tf src/xfer src/manual >/dev/null 2>&1
git -c user.name="Bartosz Ołka" -c user.email=bartekolka@outlook.com commit -q -m "Postep: $((AUTO + MAN)) dopasowanych funkcji

Co-Authored-By: Claude Opus 5.5 <noreply@anthropic.com>
Claude-Session: https://claude.ai/code/session_01MJYK7pSvvKbCYZL6xLxRVk" >/dev/null 2>&1; git pull -q --rebase >/dev/null 2>&1; git push -q >/dev/null 2>&1
