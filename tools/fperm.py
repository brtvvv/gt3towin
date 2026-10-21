#!/usr/bin/env python3
"""fperm.py <lista_funkcji> : przestawia pozycje parametrow float w prototypach wolanych funkcji.

EE EABI przydziela rejestry int (a0-t3) i float (f12-f19) niezaleznie, wiec m2c nie zna
prawdziwej kolejnosci parametrow - zgaduje "najpierw inty, potem floaty". Kolejnosc ma
jednak wplyw na kolejnosc ewaluacji argumentow (gcc liczy od prawej), a wiec na kod.
Dla kazdego szkicu (/tmp/<func>.cpp) probujemy przeplotow int/float w prototypach wolanych
funkcji. Dopasowania trafiaja do src/manual/<func>.cpp.
"""
import itertools, os, re, sys
sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))
import try_ as T
ROOT = T.ROOT

PROTO = {}
for m in re.finditer(r'#ifndef DEF_(func_[0-9A-F]+)\n(.*?)\n#endif', open(os.path.join(ROOT, 'include/funcs.h')).read(), re.S):
    PROTO[m.group(1)] = m.group(2).strip()


def split_args(s, i):
    """s[i] tuz za '(' -> (lista argumentow, indeks ')')."""
    d, cur, out, j = 0, '', [], i
    while j < len(s):
        c = s[j]
        if c in '([{':
            d += 1
        elif c in ')]}':
            if d == 0:
                out.append(cur.strip())
                return out, j
            d -= 1
        elif c == ',' and d == 0:
            out.append(cur.strip()); cur = ''; j += 1; continue
        cur += c
        j += 1
    return None, None


def parse_proto(p):
    m = re.match(r'(.*?)\b(func_[0-9A-F]+)\((.*)\);', p)
    if not m or '...' in m.group(3):
        return None
    params = [x.strip() for x in m.group(3).split(',')] if m.group(3).strip() not in ('', 'void') else []
    return m.group(1).strip(), params


def interleavings(types):
    ints = [t for t in types if t != 'f32']
    fl = [t for t in types if t == 'f32']
    n = len(types)
    for pos in itertools.combinations(range(n), len(fl)):
        order, ii, fi = [], 0, 0
        for k in range(n):
            if k in pos:
                order.append(('f', fi)); fi += 1
            else:
                order.append(('i', ii)); ii += 1
        yield order


def apply(src, callee, ret, types, order):
    ints_idx = [k for k, t in enumerate(types) if t != 'f32']
    fl_idx = [k for k, t in enumerate(types) if t == 'f32']
    newtypes = [types[ints_idx[x]] if c == 'i' else 'f32' for c, x in order]
    perm = [ints_idx[x] if c == 'i' else fl_idx[x] for c, x in order]
    out, pos = src, 0
    body_start = src.find('extern "C"', src.find('#include "funcs.h"'))
    pos = body_start
    while True:
        k = out.find(callee + '(', pos)
        if k < 0:
            break
        args, end = split_args(out, k + len(callee) + 1)
        if args is None or len(args) != len(types):
            return None
        new = callee + '(' + ', '.join(args[p] for p in perm) + ')'
        out = out[:k] + new + out[end + 1:]
        pos = k + len(new)
    decl = 'extern "C" %s %s(%s);\n' % (ret, callee, ', '.join(newtypes))
    out = '#define DEF_%s\n' % callee + out
    i = out.find('\n', out.find('#include "funcs.h"')) + 1
    return out[:i] + decl + out[i:]


def score(r):
    return (len(r[3]), 0) if r[3] else (0, 0)


def run(name):
    src_path = '/tmp/%s.cpp' % name
    if not os.path.exists(src_path):
        return False
    src = open(src_path).read()
    body = src[src.find('extern "C"', src.find('#include "funcs.h"')):]
    callees = []
    for c in sorted(set(re.findall(r'\b(func_[0-9A-F]+)\(', body))):
        if c == name or c not in PROTO:
            continue
        pp = parse_proto(PROTO[c])
        if pp and 'f32' in pp[1] and any(t != 'f32' for t in pp[1]):
            callees.append((c, pp[0], pp[1]))
    if not callees:
        return False
    options = [list(interleavings(t))[:24] for _, _, t in callees[:3]]
    tried = 0
    for combo in itertools.product(*options):
        cur = src
        for (c, ret, t), order in zip(callees, combo):
            cur = apply(cur, c, ret, t, order)
            if cur is None:
                break
        if cur is None or cur == src:
            continue
        tried += 1
        if tried > 80:
            break
        p = '/tmp/claude_fperm_%s.cpp' % name
        open(p, 'w').write(cur)
        try:
            r = [x for x in T.run(p, verbose=False) if x[0] == name]
        except SystemExit:
            continue
        if r and not r[0][3]:
            dst = os.path.join(ROOT, 'src/manual', name + '.cpp')
            open(dst, 'w').write(cur)
            print('MATCH', name, flush=True)
            return True
    return False


if __name__ == '__main__':
    done = set(os.path.splitext(os.path.basename(f))[0] for d in os.listdir(os.path.join(ROOT, 'src'))
               for f in os.listdir(os.path.join(ROOT, 'src', d)))
    n = ok = 0
    for name in open(sys.argv[1]).read().split():
        if name in done:
            continue
        n += 1
        ok += run(name)
    print('sprawdzono', n, 'dopasowano', ok)
