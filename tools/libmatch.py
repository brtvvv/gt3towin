#!/usr/bin/env python3
"""libmatch.py <obj.o> [lo hi]: porownuje kazda funkcje z obiektu z niedopasowanymi funkcjami gry
(o tym samym rozmiarze) w zakresie adresow. Wypisuje trafienia: symbol -> func_ADDR."""
import os, re, sys, glob, struct
sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))
import check as C
from elftools.elf.elffile import ELFFile
ROOT = C.ROOT
args = sys.argv[1:]
lo, hi = 0, 1 << 32
if len(args) >= 2 and re.fullmatch(r'[0-9A-Fa-f]+', args[-1]) and re.fullmatch(r'[0-9A-Fa-f]+', args[-2]):
    lo, hi = int(args[-2], 16), int(args[-1], 16)
    args = args[:-2]
done = set(os.path.splitext(os.path.basename(f))[0] for f in glob.glob(os.path.join(ROOT, 'src/*/*.c*')))
cands = {}
for f in glob.glob(os.path.join(ROOT, 'asm/funcs/func_*.s')):
    n = os.path.basename(f)[:-2]
    a = int(n[5:], 16)
    if n in done or not lo <= a < hi:
        continue
    cnt = len(re.findall(r'\*/\s+[a-z]', open(f).read()))
    cands.setdefault(cnt, []).append(a)
for obj in args:
  try:
    elf = ELFFile(open(obj, 'rb'))
    syms = [s for s in elf.get_section_by_name('.symtab').iter_symbols() if s['st_info']['type'] == 'STT_FUNC' and s['st_size']]
  except Exception:
    continue
  for s in syms:
    data, masked = C.func_bytes(obj, s.name)
    for a in cands.get(len(data) // 4, []):
        n, bad, _, _ = C.compare(data, masked, a)
        if not bad:
            print('%s %s func_%08X' % (obj, s.name, a), flush=True)
