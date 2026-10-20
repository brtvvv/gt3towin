#!/usr/bin/env python3
"""Ocenia szkice /tmp/func_*.cpp: ile instrukcji rozni sie od oryginalu. -> build/scores.txt"""
import glob, os, sys
sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))
import try_ as T
done = set(os.path.basename(f)[:-4] for f in glob.glob(os.path.join(T.ROOT, 'src/*/*.cpp')))
out = []
for f in sorted(glob.glob('/tmp/func_*.cpp')):
    name = os.path.basename(f)[:-4]
    if name in done or '.' in name: continue
    try:
        r = [x for x in T.run(f, verbose=False) if x[0] == name]
    except SystemExit:
        continue
    if not r: continue
    _, a, n, bad = r[0]
    want = T.SIZES.get(a, 0) // 4
    out.append((abs(n - want), len(bad), want, name))
out.sort()
open(os.path.join(T.ROOT, 'build/scores.txt'), 'w').write(''.join(f'{d} {b} {w} {nm}\n' for d, b, w, nm in out))
print(len(out))
