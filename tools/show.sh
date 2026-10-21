#!/bin/sh
# Pokazuje asembler funkcji, szkic m2c i roznice.
cd "$(dirname "$0")/.."
python3 tools/funcasm.py $1 | sed -E 's#/\* \S+ \S+ \S+ \*/##' | grep -vE "^$|nonmatching|endlabel|glabel|^\.align|^ *\.align"
echo "----- szkic"
sed -n '/^extern "C" [^\n]*'$1'(/,$p' /tmp/$1.cpp 2>/dev/null
grep "^extern M2C\|^extern s32\|^extern f32" /tmp/$1.cpp 2>/dev/null | head -5
python3 tools/try.py /tmp/$1.cpp 2>&1 | head -2
