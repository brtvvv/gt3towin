#!/usr/bin/env python3
"""Znajduje stale float z .lit4 (ladowane tylko przez lwc1 %gp_rel, nigdzie nie zapisywane).
Wynik: build/lit4.json {symbol: literal}"""
import glob, json, os, re, struct
ROOT = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
d = open(os.path.join(ROOT, 'orig/core_100000.bin'), 'rb').read()
loads, other = set(), set()
for f in glob.glob(os.path.join(ROOT, 'asm/funcs/*.s')):
    for op, a in re.findall(r'\*/\s+([a-z0-9.]+)[ \t]*([^\n]*)', open(f).read()):
        for s in re.findall(r'D_[0-9A-F]+', a):
            if op == 'lwc1' and '%gp_rel(' + s in a:
                loads.add(s)
            else:
                other.add(s)
# odwolania z danych (wskazniki) tez wykluczaja
out = {}
for s in loads - other:
    a = int(s[2:], 16) - 0x100000
    v = struct.unpack_from('<f', d, a)[0]
    lit = None
    for prec in range(1, 10):
        c = '%.*g' % (prec, v)
        if struct.unpack('<f', struct.pack('<f', float(c)))[0] == v:
            lit = c; break
    if lit is None:
        continue
    if 'e' not in lit and '.' not in lit and 'inf' not in lit and 'nan' not in lit:
        lit += '.0'
    if 'inf' in lit or 'nan' in lit:
        continue
    out[s] = lit + 'f'
json.dump(out, open(os.path.join(ROOT, 'build/lit4.json'), 'w'), indent=0, sort_keys=True)
print(len(out), 'stalych float')
