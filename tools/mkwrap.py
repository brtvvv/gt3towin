#!/usr/bin/env python3
"""mkwrap.py <zrodlo wzgl. src/> "<flagi>" "<opis>" : czyta z stdin linie libmatch.py
("obj sym func_X") i tworzy src/manual/func_X.c wlaczajace zrodlo biblioteki."""
import os, sys
ROOT = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
src, flags, desc = sys.argv[1:4]
for line in sys.stdin:
    p = line.split()
    if len(p) != 3 or not p[2].startswith('func_'):
        continue
    sym, fn = p[1], p[2]
    dst = os.path.join(ROOT, 'src/manual', fn + '.c')
    if os.path.exists(dst):
        continue
    open(dst, 'w').write('/* %s z %s */\n#include "../%s"\n// @flags %s\n// @%s 0x%X\n' % (sym, desc, src, flags, sym, int(fn[5:], 16)))
    print('wrapper', fn, sym)
