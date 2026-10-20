#!/usr/bin/env python3
"""Odtwarza klasy C++ z RTTI gcc 2.9 (funkcje __tf, vtable, hierarchia).

Wynik: config/classes.txt (klasa, rodzic, __tf, vtable, wirtualne metody).
"""
import glob, re, struct, os
ROOT = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
d = open(os.path.join(ROOT, 'orig/core_100000.bin'), 'rb').read()
B = 0x100000
END = B + len(d)
RTTI = {0x27D620: 'si', 0x27D640: 'user', 0x27D5F8: 'class'}

def w(a): return struct.unpack_from('<I', d, a - B)[0]
def cstr(a):
    o = a - B; return d[o:d.index(b'\0', o)].decode('latin1')

def demangle(s):
    m = re.fullmatch(r'Q(\d)(.*)', s)
    parts = []
    rest = m.group(2) if m else s
    cnt = int(m.group(1)) if m else 1
    for _ in range(cnt):
        n = re.match(r'(\d+)', rest)
        if not n: return s
        k = int(n.group(1)); parts.append(rest[len(n.group(1)):len(n.group(1)) + k])
        rest = rest[len(n.group(1)) + k:]
    return '::'.join(parts) if not rest else s

tf = {}      # addr -> (mangled, kind, parent_tf)
for f in glob.glob(os.path.join(ROOT, 'asm/funcs/*.s')):
    t = open(f).read()
    calls = [int(x, 16) for x in re.findall(r'jal\s+func_([0-9A-F]+)', t)]
    kinds = [RTTI[c] for c in calls if c in RTTI]
    if not kinds: continue
    names = [int(x, 16) for x in re.findall(r'%hi\(D_([0-9A-F]+)\)', t)]
    strs = [cstr(a) for a in names if B <= a < END and re.fullmatch(r'(Q\d)?\d+[A-Za-z_]\w*', cstr(a) or '-')]
    if not strs: continue
    addr = int(re.search(r'glabel func_([0-9A-F]+)', t).group(1), 16)
    parents = [c for c in calls if c not in RTTI]
    tf[addr] = (strs[0], kinds[0], parents)

# vtable: slowo 0, potem adres __tf; dalej pary (0, funkcja)
vt = {}
for o in range(0x18FA00, len(d) - 8, 4):
    a = B + o
    if w(a) == 0 and w(a + 4) in tf and (a & 3) == 0:
        fns = []
        p = a + 8
        while p + 8 <= END and w(p) == 0 and 0x100000 <= w(p + 4) < 0x28FA00 and w(p + 4) not in tf:
            fns.append(w(p + 4)); p += 8
        vt.setdefault(w(a + 4), []).append((a, fns))

lines = ['# klasa | rodzice(__tf) | __tf | vtable: metody wirtualne']
for a, (m, k, par) in sorted(tf.items(), key=lambda x: demangle(x[1][0])):
    pn = ','.join(demangle(tf[p][0]) for p in par if p in tf) or '-'
    vts = ' '.join(f'{v:#x}:[' + ','.join(f'{x:#x}' for x in fns) + ']' for v, fns in vt.get(a, []))
    lines.append(f'{demangle(m)} | {pn} | {a:#x} | {vts}')
open(os.path.join(ROOT, 'config/classes.txt'), 'w').write('\n'.join(lines) + '\n')
print(len(tf), 'klas,', sum(len(v) for v in vt.values()), 'vtable,',
      sum(len(f) for v in vt.values() for _, f in v), 'metod wirtualnych')
