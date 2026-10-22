#!/usr/bin/env python3
"""sib.py <func> : niedopasowane funkcje o identycznej sekwencji mnemonikow (rodzenstwo do szablonu)."""
import glob, os, re, sys
ROOT = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
def ops(p):
    out = []
    for l in open(p):
        if l.strip().startswith('/*'):
            w = re.sub(r'.*\*/\s+', '', l).split()
            out.append(w[0] if w else '')
    return out
done = set(os.path.splitext(os.path.basename(f))[0] for f in glob.glob(os.path.join(ROOT, 'src/*/*.c*')))
for name in sys.argv[1:]:
    ref = ops(os.path.join(ROOT, 'asm/funcs', name + '.s'))
    for f in sorted(glob.glob(os.path.join(ROOT, 'asm/funcs/func_*.s'))):
        n = os.path.basename(f)[:-2]
        if n == name or n in done:
            continue
        if ops(f) == ref:
            print(n)
