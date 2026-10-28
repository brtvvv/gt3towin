#!/usr/bin/env python3
"""Rodziny funkcji o identycznej sekwencji opcode'ow (jak sib.py): generowanie kodu z szablonu.

fam.py all          wszystkie niedopasowane funkcje, ktore maja dopasowanego dawce-rodzenstwo
fam.py spread F...  rozsiewa dopasowane F na jego rodzenstwo (po recznym dopasowaniu)
fam.py heads [N]    rodziny bez dawcy, od najwiekszej (liczba*dlugosc): dopasuj glowe recznie, potem spread

Zrodlo dawcy jest kopiowane z podmiana stalych, symboli i nazwy (transfer.substitute),
z uwzglednieniem '// @flags'. Przy niejednoznacznych podmianach probowane sa warianty.
Kazdy wynik jest sprawdzany przez try.py; dopasowane trafiaja do src/xfer/.
"""
import collections, glob, importlib, itertools, os, re, struct, sys
sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))
from transfer import load, substitute, norm, TOK
T = importlib.import_module('try')
ROOT = T.ROOT
OUT = os.path.join(ROOT, 'src/xfer')
MAXVAR = 12


def ops(name):
    return tuple(re.findall(r'\*/\s+([a-z0-9.]+)', open(os.path.join(ROOT, 'asm/funcs', name + '.s')).read()))


def sources():
    srcs = {}
    for f in glob.glob(os.path.join(ROOT, 'src/*/*.c*')):
        n = os.path.splitext(os.path.basename(f))[0]
        if n.startswith('func_'):
            srcs[n] = f
    return srcs


def families():
    g = collections.defaultdict(list)
    for f in glob.glob(os.path.join(ROOT, 'asm/funcs/func_*.s')):
        n = os.path.basename(f)[:-2]
        g[ops(n)].append(n)
    return g


def variants(at, bt):
    """Listy par (a, b) wymuszajace kolejne wybory dla niejednoznacznych stalych/symboli."""
    alt = collections.defaultdict(list)
    for x, y in zip(at, bt):
        nx, ny = norm(x), norm(y)
        if nx != ny and (x, y) not in alt[nx]:
            alt[nx].append((x, y))
    amb = [v for v in alt.values() if len(v) > 1]
    yield []
    for combo in itertools.islice(itertools.product(*amb), 1, MAXVAR):
        yield list(combo)


def shifted(src, at, bt):
    """Literaly zlozone z %hi/%lo (np. 0x970C = 0x8000 + 0x170C): przesun o te sama roznice."""
    d = {}
    for x, y in zip(at, bt):
        nx, ny = norm(x), norm(y)
        if isinstance(nx, int) and isinstance(ny, int) and nx != ny and abs(nx) >= 0x100:
            d.setdefault(nx, ny)
    if not d:
        return None
    def rep(m):
        s = m.group(0)
        v = norm(s)
        if not isinstance(v, int) or v in d:
            return s
        for x, y in d.items():
            if v != x and (v - x) % 0x8000 == 0:
                r = v + y - x
                return ('0x%X' % r if r >= 0 else '-0x%X' % -r) if 'x' in s.lower() else str(r)
        return s
    out = TOK.sub(rep, src)
    return out if out != src else None


FLT = re.compile(r'(?<![\w.])(\d+\.\d*|\.\d+)(?:[eE][-+]?\d+)?f?(?![\w.])')


def fbits(v):
    return struct.unpack('<I', struct.pack('<f', v))[0]


def flit(b):
    v = struct.unpack('<f', struct.pack('<I', b))[0]
    for p in range(1, 10):
        t = '%.*g' % (p, v)
        if fbits(float(t)) == b:
            break
    if not re.search(r'[.e]', t):
        t += '.0'
    return t + 'f'


def floats(src, at, bt):
    """Stale float (lui/ori z wzorca bitowego): podmiana literalow 1.5f itp."""
    d = {}
    for x, y in zip(at, bt):
        nx, ny = norm(x), norm(y)
        if isinstance(nx, int) and isinstance(ny, int) and nx != ny and nx >= 0x10000 and ny >= 0x10000:
            d.setdefault(nx & 0xFFFFFFFF, ny & 0xFFFFFFFF)
    if not d:
        return src
    def rep(m):
        try:
            b = fbits(float(m.group(0).rstrip('fF')))
        except (OverflowError, ValueError):
            return m.group(0)
        return flit(d[b]) if b in d else m.group(0)
    return FLT.sub(rep, src)


def vshift(src, at, bt):
    """Inny indeks metody wirtualnej (para lh delta / lw fn: x, x+4 -> y, y+4): dodaj/usun atrapy."""
    n = [norm(t) for t in at]
    m = [norm(t) for t in bt]
    for i in range(len(n) - 1):
        x, y = n[i], m[i]
        if (isinstance(x, int) and isinstance(y, int) and x != y and x >= 8 and y >= 8 and
                x % 8 == 0 and y % 8 == 0 and n[i + 1] == x + 4 and m[i + 1] == y + 4):
            d = (y - x) // 8
            if d > 0:
                k = src.find('virtual ')
                if k < 0:
                    return None
                return src[:k] + ''.join('virtual void _fam%d(); ' % j for j in range(d)) + src[k:]
            dummies = list(re.finditer(r'virtual void f\d+\(\);\s*', src))
            if len(dummies) < -d:
                return None
            for mt in reversed(dummies[:-d]):
                src = src[:mt.start()] + src[mt.end():]
            return src
    return None


def attempt(b, donors, srcs, info):
    ka = load(b)[1]
    for a in donors:
        src = open(srcs[a]).read()
        if '#include "funcs.h"' in src:
            src = src.replace('#define DEF_%s' % a, '#define DEF_%s' % b)
        ext = os.path.splitext(srcs[a])[1]
        src = floats(src, info[a], ka)
        seen = set()
        for pre in variants(info[a], ka):
            at, bt = [p[0] for p in pre] + info[a], [p[1] for p in pre] + ka
            sh = shifted(src, info[a], ka)
            vs = vshift(src, info[a], ka)
            for new in (substitute(src, at, bt, a, b), sh and substitute(sh, at, bt, a, b),
                        vs and substitute(vs, at, bt, a, b)):
                if not new or new in seen:
                    continue
                seen.add(new)
                p = os.path.join(OUT, b + ext)
                open(p, 'w').write(new)
                try:
                    r = [x for x in T.run(p, verbose=False) if x[0] == b]
                except SystemExit:
                    r = None
                if r and not r[0][3]:
                    return a
                os.remove(p)
    return None


def spread(targets, srcs, fams):
    os.makedirs(OUT, exist_ok=True)
    info = {}
    ok = []
    for names in fams:
        todo = [n for n in names if n not in srcs]
        donors = [n for n in names if n in srcs]
        if not todo or not donors:
            continue
        for n in names:
            info[n] = load(n)[1]
        for b in todo:
            if targets and b not in targets:
                continue
            a = attempt(b, donors, srcs, info)
            print(('MATCH %s <- %s' % (b, a)) if a else ('nie   %s' % b), flush=True)
            if a:
                ok.append(b)
                srcs[b] = os.path.join(OUT, b + os.path.splitext(srcs[a])[1])
                donors.append(b)
    print('-- dopasowano', len(ok))


def main():
    cmd = sys.argv[1] if len(sys.argv) > 1 else 'all'
    srcs = sources()
    g = families()
    if cmd == 'heads':
        skip = set(open(os.path.join(ROOT, 'work/skip.txt')).read().split())
        rows = []
        for k, v in g.items():
            if len(v) > 1 and not any(n in srcs for n in v):
                heads = [n for n in sorted(v) if n not in skip]
                if heads:
                    rows.append((len(v) * len(k), len(v), len(k), heads[0]))
        rows.sort(reverse=True)
        for r in rows[:int(sys.argv[2]) if len(sys.argv) > 2 else 30]:
            print('%s  %d x %d instr' % (r[3], r[1], r[2]))
    elif cmd == 'spread':
        fams = [v for v in g.values() if any(n in sys.argv[2:] for n in v)]
        spread(None, srcs, fams)
    else:
        spread(None, srcs, list(g.values()))


if __name__ == '__main__':
    main()
