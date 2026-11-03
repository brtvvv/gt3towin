#!/bin/sh
# Buduje ELF z orig/core_100000.bin (dla PS2Recomp / Ghidry) + mape funkcji CSV z asm/0.s.
# Wynik w build/ (NIE do repo): build/gt3_core.elf, build/gt3_funcs.csv
cd "$(dirname "$0")/.."
mkdir -p build
B=$(pwd)/orig/core_100000.bin
cat > build/gt3_core.s <<EOF
	.set noreorder
	.section .text,"ax",@progbits
	.incbin "$B", 0, 0x18FA00
	.section .data,"aw",@progbits
	.incbin "$B", 0x18FA00, 0xC5183
	.section .bss,"aw",@nobits
	.space 0x15FA1C
EOF
cat > build/gt3_core.ld <<'EOF'
ENTRY(_start)
_start = 0x100008;
SECTIONS {
  . = 0x100000;
  .text : { *(.text) }
  . = 0x28FA00;
  .data : { *(.data) }
  . = 0x354C00;
  .bss : { *(.bss) }
  _gp = 0x359370;
  /DISCARD/ : { *(.reginfo) *(.MIPS.abiflags) *(.pdr) *(.gnu.attributes) *(.MIPS.options) }
}
EOF
mips-linux-gnu-as -EL -march=r5900 -mabi=eabi -o build/gt3_core.o build/gt3_core.s && \
mips-linux-gnu-ld -EL -m elf32ltsmip -T build/gt3_core.ld -o build/gt3_core.elf build/gt3_core.o && \
python3 - <<'EOF'
import re
src = open('asm/0.s').read()
rows = re.findall(r'nonmatching (func_([0-9A-F]{8})), (0x[0-9A-F]+)', src)
with open('build/gt3_funcs.csv', 'w') as f:
    f.write('Name,Start,End,Size\n')
    starts = sorted(int(a, 16) for _, a, _ in rows)
    if 0x100008 not in starts:  # punkt wejscia (crt0) - brak w mapie splata
        nxt = min(x for x in starts if x > 0x100008)
        f.write('entry_00100008,0x00100008,0x%08X,%d\n' % (nxt, nxt - 0x100008))
    for name, a, sz in rows:
        s = int(a, 16); n = int(sz, 16)
        f.write('%s,0x%08X,0x%08X,%d\n' % (name, s, s + n, n))
print('funkcji w mapie:', len(rows))
EOF
ls -la build/gt3_core.elf
