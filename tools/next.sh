#!/bin/sh
# Pokazuje kolejne N niedopasowanych funkcji z listy (domyslnie build/near.txt).
cd "$(dirname "$0")/.."
L=${2:-build/near.txt}; N=${1:-6}; c=0
for f in $(cat $L); do
  ls src/*/$f.c* >/dev/null 2>&1 && continue
  echo "######## $f"
  python3 tools/funcasm.py $f | sed -E 's#/\* \S+ \S+ \S+ \*/##; s/^ +/  /' | grep -vE "^\s*$|nonmatching|endlabel|glabel|align"
  echo "  -- m2c:"; sed -n '/^extern "C" [^\n]*'$f'(/,$p' /tmp/$f.cpp 2>/dev/null | grep -v "^$" | sed 's/^/  /'
  c=$((c+1)); [ $c -ge $N ] && break
done
