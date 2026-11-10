#!/bin/bash
# Permuter na recznych szkicach bliskich dopasowania (work/close/*.cpp, bez C++-owych konstrukcji).
# Uzycie: bash tools/perm_close.sh [sekundy_na_funkcje] [rownolegle]
cd "$(dirname "$0")/.."
SECS=${1:-300}; P=${2:-4}
export PERM_WORK=/tmp/claude-1000/permclose PERM_JOBS=2
mkdir -p $PERM_WORK
ls work/close/*.cpp | xargs grep -L -E 'virtual|operator|__asm__|\(\{|::|asm\(' > $PERM_WORK/list.txt
run() {
  f=$1; n=$(basename $f .cpp); d=$PERM_WORK/$n
  ls src/*/$n.c* >/dev/null 2>&1 && return
  rm -rf $d; mkdir -p $d; python3 -c "import re,sys;c=open(sys.argv[1]).read();n=re.findall(r'struct (\\w+) \\{',c);print(''.join('typedef struct %s %s;\\n'%(x,x) for x in n)+c)" $f > $d.src.cpp; python3 tools/permsetup.py $n $d $d.src.cpp >/dev/null 2>&1 || { echo "$n setup-fail"; return; }
  timeout $SECS python3 ~/decomp-permuter/permuter.py $d -j2 --stop-on-zero --best-only >/dev/null 2>&1
  o=$(ls -d $d/output-0-* 2>/dev/null | head -1)
  [ -n "$o" ] && { cp $o/source.c work/close/$n.perm.c; echo "$n ZERO"; } || echo "$n -"
}
export -f run; export SECS
cat $PERM_WORK/list.txt | xargs -P $P -I{} bash -c 'run {}'
