#!/usr/bin/env python3
"""famscan.py [min_insn] : niedopasowane funkcje, ktore maja dopasowane rodzenstwo o identycznych mnemonikach.
Wypisuje: niedopasowana  rozmiar  szablon(plik zrodlowy). Posortowane malejaco po rozmiarze."""
import glob, os, re, sys
ROOT = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
MIN = int(sys.argv[1]) if len(sys.argv) > 1 else 20


def ops(p):
    out = []
    for l in open(p):
        if l.strip().startswith('/*'):
            w = re.sub(r'.*\*/\s+', '', l).split()
            if w:
                out.append(w[0])
    return tuple(out)


src = {}
for f in glob.glob(os.path.join(ROOT, 'src/*/*.c*')):
    src[os.path.splitext(os.path.basename(f))[0]] = f
skip = set(l.strip() for l in open(os.path.join(ROOT, 'work/skip.txt'))) if os.path.exists(os.path.join(ROOT, 'work/skip.txt')) else set()
tmpl, todo = {}, []
for f in glob.glob(os.path.join(ROOT, 'asm/funcs/func_*.s')):
    n = os.path.basename(f)[:-2]
    o = ops(f)
    if len(o) < MIN:
        continue
    if n in src:
        tmpl.setdefault(o, n)
    else:
        todo.append((n, o))
res = [(len(o), n, tmpl[o]) for n, o in todo if o in tmpl]
for sz, n, t in sorted(res, reverse=True):
    print(n, sz, os.path.relpath(src[t], ROOT), '(skip)' if n in skip else '')
