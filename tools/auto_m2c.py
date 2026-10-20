#!/usr/bin/env python3
"""Probuje automatycznie dopasowac funkcje: m2c -> C++ -> kompilacja -> porownanie.

auto_m2c.py <max_rozmiar_hex> [limit]
Dopasowane laduja w src/auto/<func>.cpp, raport w build/auto_report.txt
"""
import glob, os, re, subprocess, sys, tempfile
sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))
import try_ as T

ROOT = T.ROOT
maxsz = int(sys.argv[1], 16)
limit = int(sys.argv[2]) if len(sys.argv) > 2 else 10**9
shard, nshards = (int(x) for x in (sys.argv[3] if len(sys.argv) > 3 else '0/1').split('/'))
done = set(os.path.basename(f)[:-4] for f in glob.glob(os.path.join(ROOT, 'src/*/*.cpp')))
os.makedirs(os.path.join(ROOT, 'src/auto'), exist_ok=True)
os.makedirs(os.path.join(ROOT, 'build'), exist_ok=True)

def m2c(asm):
    r = subprocess.run([sys.executable, '-m', 'm2c.main', '-t', os.environ.get('M2C_TARGET', 'mipsee-gcc-c'), '--valid-syntax', asm],
                       capture_output=True, text=True)
    return r.stdout if r.returncode == 0 else None

def to_cpp(c, name):
    body = []
    for line in c.splitlines():
        if line.strip().endswith('/* extern */'):
            line = 'extern "C" ' + line
        body.append(line)
    c = '\n'.join(body)
    c = re.sub(r'^(\w[^\n;]*\b%s\()' % name, r'extern "C" \1', c, flags=re.M)
    return '#include "m2c.h"\n' + c + '\n'

stats = {'match': 0, 'diff': 0, 'compile': 0, 'm2c': 0}
report = []
cands = []
for addr, sz in sorted(T.SIZES.items()):
    name = f'func_{addr:08X}'
    if sz <= maxsz and name not in done:
        cands.append(name)
for name in cands[:limit][shard::nshards]:
    c = m2c(os.path.join(ROOT, 'asm/funcs', name + '.s'))
    if c is None:
        stats['m2c'] += 1; report.append(f'{name} m2c-fail'); continue
    src = os.path.join(tempfile.gettempdir(), name + '.cpp')
    open(src, 'w').write(to_cpp(c, name))
    try:
        res = T.run(src, verbose=False, extra=['-I', os.path.join(ROOT, 'include'), '-fpermissive', '-w'])
    except SystemExit:
        stats['compile'] += 1; report.append(f'{name} compile-fail'); continue
    r = [x for x in res if x[0] == name]
    if r and not r[0][3]:
        stats['match'] += 1
        os.replace(src, os.path.join(ROOT, 'src/auto', name + '.cpp'))
        report.append(f'{name} MATCH')
    else:
        stats['diff'] += 1; report.append(f'{name} diff')
open(os.path.join(ROOT, 'build/auto_report.txt'), 'a').write('\n'.join(report) + '\n')
print(shard, stats)
