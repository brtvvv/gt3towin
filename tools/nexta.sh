#!/bin/sh
# Jak next.sh, ale tylko asm (bez szkicu m2c), zwiezle. nexta.sh N lista
cd "$(dirname "$0")/.."
L=${2:-work/small.txt}; N=${1:-10}; c=0
for f in $(cat $L); do
  ls src/*/$f.c* >/dev/null 2>&1 && continue
  grep -qx $f work/skip.txt && continue
  echo "## $f"
  python3 tools/funcasm.py $f | sed -E 's#/\* \S+ \S+ \S+ \*/##; s/^ +//; s/ +/ /g' | grep -vE "^\s*$|nonmatching|endlabel|glabel|align|^nop$"
  c=$((c+1)); [ $c -ge $N ] && break
done
