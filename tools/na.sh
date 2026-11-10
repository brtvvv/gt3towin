#!/bin/sh
# na.sh N [lista] : kolejne N niedopasowanych funkcji, zwiezle dla EH: bez blokow handlera (2794A0/27AEE0),
# bez sd/ld s-rejestrow w prologu/epilogu; nop pokazany jako "(nop)" tylko w delay slocie skoku/wywolania.
cd "$(dirname "$0")/.."
L=${2:-work/small.txt}; N=${1:-10}; c=0
for f in $(cat $L); do
  ls src/*/$f.c* >/dev/null 2>&1 && continue
  grep -qx $f work/skip.txt && continue
  echo "## $f"
  python3 tools/funcasm.py $f | sed -E 's#/\* \S+ \S+ \S+ \*/##; s/^ +//; s/ +/ /g' | grep -vE "^\s*$|nonmatching|endlabel|glabel|align" | awk '
/^(jal func_002794A0|jal func_0027AEE0)$/ {prev=$0; next}
/^(ld \$s[0-9]|jr \$ra|sd \$s[0-9], 0x[0-9A-F]+\(\$sp\))/ { if (prev ~ /^(jal|jalr|b|beq|bne|bnez|beqz|bgez|bgtz|blez|bltz|j|beql|bnel) /) print; prev=$0; next}
/^addiu \$sp, \$sp, 0x[0-9A-F]+$/ {prev=$0; next}
/^nop$/ { if (prev ~ /^(jal|jalr|b|beq|bne|bnez|beqz|bgez|bgtz|blez|bltz|bc1t|bc1f|j|beql|bnel) /) print "(nop)"; prev=$0; next}
{print; prev=$0}'
  c=$((c+1)); [ $c -ge $N ] && break
done
