#!/bin/sh
# na.sh N lista : jak nexta.sh, ale zwiezle dla funkcji z EH: bez blokow handlera (2794A0/27AEE0),
# bez zapisow/odczytow rejestrow w prologu/epilogu; nop zostaje tylko w delay slocie skoku/wywolania.
cd "$(dirname "$0")/.."
sh tools/nexta.sh "$@" | awk '
/^(jal func_002794A0|jal func_0027AEE0)$/ {prev=$0; next}
/^(ld \$s[0-9]|jr \$ra|\.align|sd \$s[0-9], 0x[0-9A-F]+\(\$sp\))/ {prev=$0; next}
/^addiu \$sp, \$sp, 0x[0-9A-F]+$/ {prev=$0; next}
/^nop$/ { if (prev ~ /^(jal|jalr|b|beq|bne|bnez|beqz|bgez|bgtz|blez|bltz|bc1t|bc1f|j) /) print "  (nop)"; prev=$0; next}
{print; prev=$0}'
