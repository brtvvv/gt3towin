#!/usr/bin/env python3
"""Kompiluje plik C/C++ i porownuje funkcje z oryginalem bajt po bajcie.

check.py <kompilator> <plik.c> <symbol> <adres_hex> [flagi...]
Pola objete relokacjami (jal, %hi/%lo, %gp_rel) sa maskowane.
"""
import os, struct, subprocess, sys, tempfile
from elftools.elf.elffile import ELFFile

ROOT = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
COMP = os.environ.get('GT3_COMPILERS', os.path.expanduser('~/compilers'))
BIN = os.path.join(ROOT, 'orig', 'core_100000.bin')
BASE = 0x100000

def compile_obj(cc, src, flags):
    out = tempfile.mktemp(suffix='.o')
    gcc = os.path.join(COMP, cc, 'bin', 'ee-gcc')
    cmd = [gcc]
    if not os.path.exists(gcc):  # kompilatory SN/Sony dla Windows - przez wine
        cmd = ['wine', gcc + '.exe']
    r = subprocess.run(cmd + ['-c', src, '-o', out] + flags, capture_output=True, text=True,
                       env=dict(os.environ, WINEDEBUG='-all'))
    if r.returncode:
        sys.exit(r.stderr)
    return out

def func_bytes(obj, sym):
    elf = ELFFile(open(obj, 'rb'))
    st = elf.get_section_by_name('.symtab')
    s = next(x for x in st.iter_symbols() if x.name == sym)
    sec = elf.get_section(s['st_shndx'])
    data = sec.data()[s['st_value']:s['st_value'] + s['st_size']]
    masked = set()
    rs = elf.get_section_by_name('.rel' + sec.name) or elf.get_section_by_name('.rela' + sec.name)
    if rs:
        for r in rs.iter_relocations():
            off = r['r_offset'] - s['st_value']
            if 0 <= off < len(data):
                masked.add(off // 4)
    return data, masked

def mask(w):
    op = w >> 26
    if op in (2, 3):
        return w & 0xFC000000
    return w & 0xFFFF0000

def compare(data, masked, addr):
    orig = open(BIN, 'rb').read()
    o = addr - BASE
    n = len(data) // 4
    mine = struct.unpack('<%dI' % n, data)
    theirs = struct.unpack('<%dI' % n, orig[o:o + len(data)])
    bad = [i for i in range(n)
           if ((mask(mine[i]) != mask(theirs[i])) if i in masked else (mine[i] != theirs[i]))]
    return n, bad, mine, theirs

if __name__ == '__main__':
    cc, src, sym, addr = sys.argv[1:5]
    flags = sys.argv[5:] or ['-O2', '-G8']
    data, masked = func_bytes(compile_obj(cc, src, flags), sym)
    n, bad, mine, theirs = compare(data, masked, int(addr, 16))
    if not bad:
        print(f'MATCH {sym} ({n} instr) [{cc} {" ".join(flags)}]')
    else:
        print(f'DIFF {sym}: {len(bad)}/{n} roznic [{cc} {" ".join(flags)}]')
        for i in bad[:8]:
            print(f'  +{i*4:#x}: moje {mine[i]:08x}  oryg {theirs[i]:08x}')
