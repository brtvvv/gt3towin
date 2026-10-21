#!/bin/bash
# Pelny przebieg na wlasnym komputerze z uzyciem wszystkich rdzeni, z commitami co 10 minut.
# Uzycie: bash tools/run_local.sh [sekundy_permutera_na_funkcje]
cd "$(dirname "$0")/.."
export GT3_COMPILERS="$HOME/compilers" PERMUTER="$HOME/decomp-permuter/permuter.py" PERM_WORK="/tmp/gt3perm"
N=$(nproc); SECS=${1:-60}
echo "Rdzenie: $N"
( while true; do sleep 600; sh tools/status.sh; done ) & PUSHER=$!
# 1) automat m2c na wszystkich rdzeniach
for i in $(seq 0 $((N-1))); do python3 tools/auto_m2c.py 0x100000 999999 $i/$N & done; wait
python3 tools/transfer.py; sh tools/status.sh
# 2) ocena szkicow i permuter na najblizszych (kilka permuterow naraz)
python3 tools/score_drafts.py
awk '$1<=2 {print $4}' build/scores.txt > build/local_queue.txt
P=$((N/2)); [ $P -lt 1 ] && P=1
split -n r/$P build/local_queue.txt build/local_q_
for q in build/local_q_*; do PERM_JOBS=2 python3 tools/perm_run.py $q $SECS & done; wait
python3 tools/transfer.py
kill $PUSHER; sh tools/status.sh
