#!/bin/sh
# w.sh <func> <ext> <kod>: kompiluje, sprawdza i zapisuje do src/manual tylko przy dopasowaniu.
cd "$(dirname "$0")/.."
ls src/*/$1.c* >/dev/null 2>&1 && { echo "JUZ JEST $1"; exit 0; }
T=/tmp/claude_w_$1.$2
printf '%s\n' "$3" > $T
R=$(python3 tools/try.py $T 2>&1 | head -1)
case "$R" in MATCH*) cp $T src/manual/$1.$2;; esac
echo "$R"
