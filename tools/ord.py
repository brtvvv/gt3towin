#!/usr/bin/env python3
"""ord.py <func> <ext> <kod z blokami /*{*/ a; b; c; /*}*/>
Probuje wszystkie kolejnosci instrukcji w kazdym bloku (iloczyn), zapisuje dopasowanie przez w.sh."""
import itertools, re, subprocess, sys, os
ROOT = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
f, ext, code = sys.argv[1:4]
parts = re.split(r'/\*\{\*/(.*?)/\*\}\*/', code, flags=re.S)
fixed, blocks = parts[0::2], [[s.strip() + ';' for s in b.split(';') if s.strip()] for b in parts[1::2]]
best = None
for combo in itertools.product(*[list(itertools.permutations(b)) for b in blocks]):
    c = fixed[0] + ''.join(' '.join(p) + fixed[i + 1] for i, p in enumerate(combo))
    r = subprocess.run(['sh', os.path.join(ROOT, 'tools/w.sh'), f, ext, c], capture_output=True, text=True).stdout.strip()
    if r.startswith('MATCH') or r.startswith('JUZ'):
        print(r); sys.exit(0)
    if not best or (r.startswith('DIFF') and int(r.split()[3].split('/')[0]) < int(best.split()[3].split('/')[0]) if best.startswith('DIFF') else True):
        best = r
print('brak', best)
