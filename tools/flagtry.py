#!/usr/bin/env python3
"""flagtry.py <lista> "<flagi>" [katalog_wyjscia=src/auto] : kompiluje szkice /tmp/<func>.cpp z dodatkowymi flagami (@flags);
dopasowania zapisuje."""
import glob, os, sys
sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))
import try_ as T
ROOT = T.ROOT
names = open(sys.argv[1]).read().split()
flags = sys.argv[2]
out = sys.argv[3] if len(sys.argv) > 3 else 'src/auto'
done = set(os.path.splitext(os.path.basename(f))[0] for f in glob.glob(os.path.join(ROOT, 'src/*/*.c*')))
ok = 0
for n in names:
    p = '/tmp/%s.cpp' % n
    if n in done or not os.path.exists(p):
        continue
    src = open(p).read() + '\n// @flags %s\n' % flags
    q = '/tmp/claude_ft_%s.cpp' % n
    open(q, 'w').write(src)
    try:
        r = [x for x in T.run(q, verbose=False) if x[0] == n]
    except SystemExit:
        continue
    if r and not r[0][3]:
        open(os.path.join(ROOT, out, n + '.cpp'), 'w').write(src)
        ok += 1
        print('MATCH', n, flush=True)
print('dopasowano', ok)
