#!/usr/bin/env python3
"""libmatch.py <obj.o> [lo hi]: porownuje kazda funkcje z obiektu z niedopasowanymi funkcjami gry
(o tym samym rozmiarze) w zakresie adresow. Wypisuje trafienia: symbol -> func_ADDR."""
import os, re, sys, glob, struct
sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))
import check as C
from elftools.elf.elffile import ELFFile
ROOT = C.ROOT
obj = sys.argv[1]
lo = int(sys.argv[2], 16) if len(sys.argv) > 2 else 0
hi = int(sys.argv[3], 16) if len(sys.argv) > 3 else 1 << 32
done = set(os.path.splitext(os.path.basename(f))[0] for f in glob.glob(os.path.join(ROOT, 'src/*/*.c*')))
cands = {}
for f in glob.glob(os.path.join(ROOT, 'asm/funcs/func_*.s')):
    n = os.path.basename(f)[:-2]
    a = int(n[5:], 16)
    if n in done or not lo <= a < hi:
        continue
    cnt = len(re.findall(r'\*/\s+[a-z]', open(f).read()))
    cands.setdefault(cnt, []).append(a)
elf = ELFFile(open(obj, 'rb'))
for s in elf.get_section_by_name('.symtab').iter_symbols():
    if s['st_info']['type'] != 'STT_FUNC' or not s['st_size']:
        continue
    data, masked = C.func_bytes(obj, s.name)
    for a in cands.get(len(data) // 4, []):
        n, bad, _, _ = C.compare(data, masked, a)
        if not bad:
            print('%s func_%08X' % (s.name, a))
