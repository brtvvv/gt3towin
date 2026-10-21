#!/usr/bin/env python3
"""Lista grup niedopasowanych funkcji o identycznym ksztalcie (bez dawcy)."""
import collections, glob, os, sys
sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))
from transfer import load, ROOT
done = set(os.path.basename(f)[:-4] for f in glob.glob(os.path.join(ROOT, 'src/*/*.cpp')))
g = collections.defaultdict(list)
for f in glob.glob(os.path.join(ROOT, 'asm/funcs/func_*.s')):
    n = os.path.basename(f)[:-2]
    g[load(n)[0]].append(n)
rows = [(len([n for n in v if n not in done]), len(k), v) for k, v in g.items()
        if not any(n in done for n in v) and len(v) >= int(sys.argv[1] if len(sys.argv) > 1 else 3)]
rows.sort(reverse=True)
for c, l, v in rows[:int(sys.argv[2]) if len(sys.argv) > 2 else 30]:
    print(c, l, ' '.join(sorted(v)[:3]))
print('razem', sum(r[0] for r in rows), 'w', len(rows), 'grupach')
