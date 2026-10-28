#!/usr/bin/env python3
"""perm.py FILE [max|ins]: permutuje instrukcje miedzy /*P*/ i /*E*/ (rozdzielone ';'), szuka MATCH.

max: limit permutacji (domyslnie 5040). ins: przesuwa po jednej instrukcji na kazda pozycje
(n^2 prob, dla dlugich list zapisow). Wynik: FILE.match.
"""
import sys, os, re, itertools, importlib, shutil
sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))
T = importlib.import_module('try')
src = open(sys.argv[1]).read()
arg = sys.argv[2] if len(sys.argv) > 2 else '5040'
m = re.search(r'/\*P\*/(.*?)/\*E\*/', src, re.S)
stm = [s.strip() for s in m.group(1).split(';') if s.strip()]
name = os.path.basename(sys.argv[1])
d = os.path.join(os.path.dirname(os.path.abspath(sys.argv[1])), 'perm_tmp'); os.makedirs(d, exist_ok=True)
p = os.path.join(d, name)


def orders():
    if arg == 'ins':
        for k in range(len(stm)):
            rest = stm[:k] + stm[k + 1:]
            for pos in range(len(stm)):
                yield rest[:pos] + [stm[k]] + rest[pos:]
    else:
        yield from itertools.islice(itertools.permutations(stm), int(arg))


i = -1
for i, perm in enumerate(orders()):
    new = src[:m.start()] + ' '.join(s + ';' for s in perm) + src[m.end():]
    open(p, 'w').write(new)
    try:
        r = T.run(p, verbose=False)
    except SystemExit:
        continue
    if r and not r[0][3]:
        print('MATCH', i); shutil.copy(p, sys.argv[1] + '.match'); sys.exit(0)
print('brak', i + 1); sys.exit(1)
