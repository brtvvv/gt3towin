#!/usr/bin/env python3
"""Probuje automatycznie dopasowac funkcje: m2c -> C++ -> kompilacja -> porownanie.

auto_m2c.py <max_rozmiar_hex> [limit]
Dopasowane laduja w src/auto/<func>.cpp, raport w build/auto_report.txt
"""
import glob, os, re, subprocess, sys, tempfile
sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))
import try_ as T
import permute

ROOT = T.ROOT
maxsz = int(sys.argv[1], 16)
limit = int(sys.argv[2]) if len(sys.argv) > 2 else 10**9
shard, nshards = (int(x) for x in (sys.argv[3] if len(sys.argv) > 3 else '0/1').split('/'))
done = set(os.path.basename(f)[:-4] for f in glob.glob(os.path.join(ROOT, 'src/*/*.cpp')))
os.makedirs(os.path.join(ROOT, 'src/auto'), exist_ok=True)
os.makedirs(os.path.join(ROOT, 'build'), exist_ok=True)

PROTO = {}
_fh = os.path.join(ROOT, 'include/funcs.h')
if os.path.exists(_fh):
    for _l in open(_fh):
        _m = re.match(r'\w+ (func_[0-9A-F]+)\(', _l)
        if _m: PROTO[_m.group(1)] = _l.strip()

def m2c(asm):
    name = os.path.basename(asm)[:-2]
    callees = set(re.findall(r'\b(func_[0-9A-F]+)\b', open(asm).read())) - {name}
    ctx = os.path.join(tempfile.gettempdir(), name + '.ctx.h')
    open(ctx, 'w').write('\n'.join(PROTO[c] for c in sorted(callees) if c in PROTO) + '\n')
    args = ['--context', ctx] if PROTO and not os.environ.get('NO_CTX') else []
    r = subprocess.run([sys.executable, '-m', 'm2c.main', '-t', os.environ.get('M2C_TARGET', 'mipsee-gcc-c'), '--valid-syntax'] + args + [asm],
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
    c = c.replace('*(void *)', '*(s32 *)')
    # dane spoza small-data: oryginal adresuje je przez lui/addiu, nie przez $gp
    asm = open(os.path.join(ROOT, 'asm/funcs', name + '.s')).read()
    def _sec(m):
        sym = m.group(2)
        if '%%gp_rel(%s)' % sym in asm:
            return m.group(0)
        return m.group(1) + ' __attribute__((section(".data")));'
    c = re.sub(r'^(extern [^\n(]*?\b(D_[0-9A-F]+)(?:\[[^\]]*\])?);', _sec, c, flags=re.M)
    return '#define DEF_%s\n#include "m2c.h"\n#include "funcs.h"\n' % name + c + '\n'

def fix_after_error(c, err):
    """Poprawki stosowane dopiero po bledzie kompilacji."""
    # zmienne stosu (sp, spC, sp10...) - deklaracja bufora
    for v in sorted(set(re.findall(r"`(sp[0-9A-F]*)' undeclared", err))):
        c = re.sub(r'(extern "C" [^\n]*\{\n)', r'\1    s32 %s[4];\n' % v, c, count=1)
    # za malo argumentow: prototyp bez typow (tylko gdy bez float)
    for f in set(re.findall(r"too few arguments to function `[^']*?(func_[0-9A-F]+)", err)):
        c = re.sub(r'(extern "C" [^\n]*\b%s)\(([^)\n]*)\)' % f,
                   lambda m: m.group(0) if 'f32' in m.group(2) or 'f64' in m.group(2) else m.group(1) + '(...)', c)
    return c

stats = {'match': 0, 'diff': 0, 'compile': 0, 'm2c': 0}
report = []
cands = []
for addr, sz in sorted(T.SIZES.items()):
    name = f'func_{addr:08X}'
    if sz <= maxsz and name not in done:
        cands.append(name)
only = set(open(os.environ['ONLY']).read().split()) if os.environ.get('ONLY') else None
for name in cands[:limit][shard::nshards]:
    if only is not None and name not in only: continue
    c = m2c(os.path.join(ROOT, 'asm/funcs', name + '.s'))
    if c is None:
        stats['m2c'] += 1; report.append(f'{name} m2c-fail'); continue
    src = os.path.join(tempfile.gettempdir(), name + '.cpp')
    open(src, 'w').write(to_cpp(c, name))
    res = None
    for attempt in range(3):
        try:
            res = T.run(src, verbose=False, extra=['-I', os.path.join(ROOT, 'include'), '-fpermissive', '-w'])
            break
        except SystemExit as e:
            new = fix_after_error(open(src).read(), str(e.code))
            if new == open(src).read():
                break
            open(src, 'w').write(new)
    if res is None:
        stats['compile'] += 1; report.append(f'{name} compile-fail'); continue
    r = [x for x in res if x[0] == name]
    # near-miss: probuj zamiany operandow (maks. 2 rundy, 16 prob)
    if r and r[0][3] and r[0][2] * 4 == T.SIZES.get(r[0][1]) and len(r[0][3]) <= max(3, r[0][2] // 4):
        best = (len(r[0][3]), open(src).read())
        tries = 0
        for rnd in range(2):
            improved = False
            for v in permute.variants(best[1]):
                if tries >= 16: break
                tries += 1
                vs = src + '.v.cpp'
                open(vs, 'w').write(v)
                try:
                    rr = [x for x in T.run(vs, verbose=False) if x[0] == name]
                except SystemExit:
                    continue
                if rr and rr[0][2] * 4 == T.SIZES.get(rr[0][1]) and len(rr[0][3]) < best[0]:
                    best = (len(rr[0][3]), v); improved = True
                    if not rr[0][3]: break
            if not improved or best[0] == 0: break
        open(src, 'w').write(best[1])
        if best[0] == 0:
            r = [(name, r[0][1], r[0][2], [])]
    if r and not r[0][3]:
        stats['match'] += 1
        os.replace(src, os.path.join(ROOT, 'src/auto', name + '.cpp'))
        report.append(f'{name} MATCH')
    else:
        stats['diff'] += 1; report.append(f'{name} diff')
open(os.path.join(ROOT, 'build/auto_report.txt'), 'a').write('\n'.join(report) + '\n')
print(shard, stats)
