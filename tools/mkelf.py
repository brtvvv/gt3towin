#!/usr/bin/env python3
"""mkelf.py OUTDIR: buduje z orig/core_100000.bin ELF dla PS2Recomp oraz mapę funkcji (CSV) i config.toml.

Pliki wynikowe zawierają kod gry: zapisuj je POZA repo (np. ~/gt3recomp), nigdy nie commituj.
Układ z config/gt3.yaml: .text od 0x100000 do 0x28FA00, .data do końca pliku, potem .bss.
"""
import glob, os, re, struct, sys

ROOT = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
LOAD, ENTRY, TEXT_END, BSS = 0x100000, 0x100008, 0x28FA00, 0x15FA1C
out = os.path.abspath(sys.argv[1])
os.makedirs(out, exist_ok=True)
blob = open(os.path.join(ROOT, 'orig/core_100000.bin'), 'rb').read()
text, data = blob[:TEXT_END - LOAD], blob[TEXT_END - LOAD:]
data_va = TEXT_END
bss_va = (data_va + len(data) + 15) & ~15

# --- ELF32 LE MIPS: jeden PT_LOAD, sekcje .text/.data/.bss/.shstrtab ---
shstr = b'\0.text\0.data\0.bss\0.shstrtab\0'
EH, PH, SH = 52, 32, 40
off_text = 0x1000
off_data = off_text + len(text)
off_shstr = off_data + len(data)
off_sh = (off_shstr + len(shstr) + 3) & ~3
memsz = bss_va + BSS - LOAD
eh = struct.pack('<16sHHIIIIIHHHHHH', b'\x7fELF\x01\x01\x01' + b'\0' * 9, 2, 8, 1, ENTRY, EH, off_sh,
                 0x20924001, EH, PH, 1, SH, 5, 4)
ph = struct.pack('<IIIIIIII', 1, off_text, LOAD, LOAD, len(text) + len(data), memsz, 7, 0x1000)


def sh(name, typ, flags, addr, off, size, align):
    return struct.pack('<IIIIIIIIII', name, typ, flags, addr, off, size, 0, 0, align, 0)


shdrs = (sh(0, 0, 0, 0, 0, 0, 0) +
         sh(1, 1, 6, LOAD, off_text, len(text), 16) +
         sh(7, 1, 3, data_va, off_data, len(data), 16) +
         sh(13, 8, 3, bss_va, off_shstr, BSS, 16) +
         sh(18, 3, 0, 0, off_shstr, len(shstr), 1))
img = bytearray(eh + ph)
img += b'\0' * (off_text - len(img)) + text + data + shstr
img += b'\0' * (off_sh - len(img)) + shdrs
open(os.path.join(out, 'CORE.elf'), 'wb').write(img)

# --- mapa funkcji z asm/0.s (glabel + dlabel func_*, koniec = początek następnej) ---
rows = []
starts = []
lab = None
for line in open(os.path.join(ROOT, 'asm/0.s')):
    m = re.match(r'(?:glabel|dlabel) (\w+)', line)
    if m and (line.startswith('glabel') or m.group(1).startswith('func_')):
        lab = m.group(1)
        continue
    if lab:
        a = re.match(r'\s*/\* [0-9A-F]+ ([0-9A-F]{8}) ', line)
        if a:
            starts.append((int(a.group(1), 16), lab))
            lab = None
starts.sort()
for i, (a, n) in enumerate(starts):
    end = starts[i + 1][0] if i + 1 < len(starts) else TEXT_END
    rows.append((a, n, min(end, TEXT_END) - a))
rows.sort()
with open(os.path.join(out, 'functions.csv'), 'w') as w:
    w.write('Name,Start,End,Size\n')
    for a, n, s in rows:
        w.write('%s,0x%08X,0x%08X,%d\n' % (n, a, a + s, s))

open(os.path.join(out, 'config.toml'), 'w').write(f'''[general]
input = "{out}/CORE.elf"
ghidra_output = "{out}/functions.csv"
output = "{out}/output"
single_file_output = false
patch_syscalls = false
patch_cop0 = true
patch_cache = true
entry_points = ["0x100008"]
stubs = []
skip = []
''')
print('ELF:', len(img), 'bajtow, funkcji:', len(rows), '->', out)
