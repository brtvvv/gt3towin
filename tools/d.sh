#!/bin/sh
# d.sh <func> <plik>: porownanie mojego asm z oryginalem obok siebie (symbol z "// @sym" jesli jest).
cd "$(dirname "$0")/.."
S=$(grep -o "// @[^ ]*" $2 | head -1 | cut -c5-); [ -n "$S" ] || S=$1
${GT3_COMPILERS:-$HOME/compilers}/ee-gcc2.9-991111-01/bin/ee-gcc -O2 -G8 -I include -fpermissive -w -c -o /tmp/claude_d.o $2 || exit 1
mips-linux-gnu-objdump -d -M no-aliases --disassemble="$S" /tmp/claude_d.o | grep -P '^\s+[0-9a-f]+:' | sed -E 's/^\s*[0-9a-f]+:\s+[0-9a-f]+\s+//' | awk '{$1=$1};1' > /tmp/claude_d1
grep -E '^\s*/\*' asm/funcs/$1.s | sed -E 's/.*\*\/\s+//' | awk '{$1=$1};1' > /tmp/claude_d2
paste -d'|' /tmp/claude_d1 /tmp/claude_d2 | awk -F'|' '{printf "%-34s %s\n",$1,$2}'
