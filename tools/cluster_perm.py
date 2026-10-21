#!/usr/bin/env python3
"""Dla kazdej nierozwiazanej grupy funkcji o tym samym ksztalcie puszcza permuter
na reprezentancie, a po sukcesie przenosi wynik na cala grupe (transfer.py)."""
import collections, glob, os, subprocess, sys
sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))
from transfer import load, ROOT
secs = sys.argv[1] if len(sys.argv) > 1 else '120'
done = set(os.path.splitext(os.path.basename(f))[0] for f in glob.glob(os.path.join(ROOT, 'src/*/*.cpp')) + glob.glob(os.path.join(ROOT, 'src/*/*.c')))
g = collections.defaultdict(list)
for f in glob.glob(os.path.join(ROOT, 'asm/funcs/func_*.s')):
    n = os.path.basename(f)[:-2]
    g[load(n)[0]].append(n)
groups = sorted([sorted(v) for v in g.values() if len(v) >= 2 and not any(n in done for n in v)], key=len, reverse=True)
q = os.path.join(ROOT, 'build/cluster_queue.txt')
for v in groups:
    reps = [n for n in v if os.path.exists(f'/tmp/{n}.cpp')][:2]
    if not reps:
        continue
    open(q, 'w').write('\n'.join(reps) + '\n')
    subprocess.run([sys.executable, os.path.join(ROOT, 'tools/perm_run.py'), q, secs])
    subprocess.run([sys.executable, os.path.join(ROOT, 'tools/transfer.py')])
