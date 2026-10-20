#!/usr/bin/env python3
"""Kompiluje plik .cpp z wieloma funkcjami i sprawdza kazda wzgledem oryginalu.

Adres funkcji: z nazwy (func_0017BA40) albo z komentarza '// @<symbol> 0xADRES'.
try.py plik.cpp [--save]   --save: dopasowane funkcje wypisuje jako OK (do manifestu)
"""
import os, re, sys
sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))
from check import compile_obj, compare
from elftools.elf.elffile import ELFFile

ROOT = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
SIZES = {}
for _n, _s in re.findall(r'nonmatching func_([0-9A-F]{8}), (0x[0-9A-F]+)', open(os.path.join(ROOT, 'asm/0.s')).read()):
    SIZES[int(_n, 16)] = int(_s, 16)

CC = os.environ.get('CC', 'ee-gcc2.9-991111-01')
FLAGS = ['-O2', '-G8', '-I', os.path.join(ROOT, 'include'), '-fpermissive', '-w']

def run(src, verbose=True, extra=()):
    obj = compile_obj(CC, src, FLAGS + list(extra))
    explicit = dict((s, int(a, 16)) for s, a in re.findall(r'//\s*@(\S+)\s+(0x[0-9A-Fa-f]+)', open(src).read()))
    elf = ELFFile(open(obj, 'rb'))
    syms = [s for s in elf.get_section_by_name('.symtab').iter_symbols()
            if s['st_info']['type'] == 'STT_FUNC' and s['st_size']]
    relsec = {}
    res = []
    for s in syms:
        addr = explicit.get(s.name)
        m = re.fullmatch(r'func_([0-9A-Fa-f]{8})', s.name)
        if addr is None and m:
            addr = int(m.group(1), 16)
        if addr is None:
            continue
        sec = elf.get_section(s['st_shndx'])
        data = sec.data()[s['st_value']:s['st_value'] + s['st_size']]
        masked = set()
        rs = elf.get_section_by_name('.rel' + sec.name)
        if rs:
            for r in rs.iter_relocations():
                off = r['r_offset'] - s['st_value']
                if 0 <= off < len(data):
                    masked.add(off // 4)
        n, bad, mine, theirs = compare(data, masked, addr)
        want = SIZES.get(addr)
        if want is not None and want != len(data):
            bad = bad or [n]
            if verbose:
                print(f'SIZE  {s.name}: moja {len(data):#x}, oryg {want:#x}')
        res.append((s.name, addr, n, bad))
        if verbose:
            if bad:
                print(f'DIFF  {s.name} @{addr:#x}: {len(bad)}/{n}', ' '.join(f'+{i*4:#x}' for i in bad[:6]))
            else:
                print(f'MATCH {s.name} @{addr:#x} ({n})')
    return res

if __name__ == '__main__':
    r = run(sys.argv[1])
    print(f'-- {sum(1 for x in r if not x[3])}/{len(r)} dopasowanych')
