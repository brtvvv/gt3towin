#!/usr/bin/env python3
"""perm.py FILE [max]: permutuje instrukcje miedzy /*P*/ i /*E*/ (rozdzielone ';'), szuka MATCH."""
import sys, os, re, itertools, importlib, shutil, time
sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))
T = importlib.import_module('try')
src = open(sys.argv[1]).read()
mx = int(sys.argv[2]) if len(sys.argv) > 2 else 5040
m = re.search(r'/\*P\*/(.*?)/\*E\*/', src, re.S)
stm = [s.strip() for s in m.group(1).split(';') if s.strip()]
name = os.path.basename(sys.argv[1])
d = os.path.join(os.path.dirname(os.path.abspath(sys.argv[1])), 'perm_tmp'); os.makedirs(d, exist_ok=True)
p = os.path.join(d, name)
best = None
for i, perm in enumerate(itertools.permutations(stm)):
    if i >= mx: break
    new = src[:m.start()] + ' '.join(s + ';' for s in perm) + src[m.end():]
    open(p, 'w').write(new)
    try:
        r = T.run(p, verbose=False)
    except SystemExit:
        continue
    if r and not r[0][3]:
        print('MATCH', i); shutil.copy(p, sys.argv[1] + '.match'); sys.exit(0)
print('brak', i + 1); sys.exit(1)
