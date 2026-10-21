#!/usr/bin/env python3
"""Probuje automatycznie dopasowac funkcje: m2c -> C++ -> kompilacja -> porownanie.

auto_m2c.py <max_rozmiar_hex> [limit]
Dopasowane laduja w src/auto/<func>.cpp, raport w build/auto_report.txt
"""
import shutil
import glob, os, re, subprocess, sys, tempfile
sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))
import try_ as T
import permute
import vcall

ROOT = T.ROOT
maxsz = int(sys.argv[1], 16)
limit = int(sys.argv[2]) if len(sys.argv) > 2 else 10**9
shard, nshards = (int(x) for x in (sys.argv[3] if len(sys.argv) > 3 else '0/1').split('/'))
done = set(os.path.splitext(os.path.basename(f))[0] for f in glob.glob(os.path.join(ROOT, 'src/*/*.cpp')) + glob.glob(os.path.join(ROOT, 'src/*/*.c')))
os.makedirs(os.path.join(ROOT, 'src/auto'), exist_ok=True)
os.makedirs(os.path.join(ROOT, 'build'), exist_ok=True)

import json
_l4 = os.path.join(ROOT, 'build/lit4.json')
LIT4 = json.load(open(_l4)) if os.path.exists(_l4) else {}
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
    # w ABI EE rejestry t0-t3 to argumenty 5-8; m2c nazywa je a4-a7
    asm2 = os.path.join(tempfile.gettempdir(), name + '.m2c.s')
    open(asm2, 'w').write(re.sub(r'\$t([0-3])\b', lambda m: '$a%d' % (int(m.group(1)) + 4), open(asm).read()))
    asm = asm2
    r = subprocess.run([sys.executable, '-m', 'm2c.main', '-t', os.environ.get('M2C_TARGET', 'mipsee-gcc-c'), '--valid-syntax'] + os.environ.get('M2C_FLAGS', '').split() + args + [asm],
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
    # stale float z .lit4 -> literaly
    for sym in set(re.findall(r'\bD_[0-9A-F]+\b', c)):
        if sym in LIT4:
            c = re.sub(r'^extern [^\n]*\b%s\b[^\n]*\n' % sym, '', c, flags=re.M)
            c = re.sub(r'\b%s\b' % sym, LIT4[sym], c)
    # wywolania metod wirtualnych -> prawdziwe wywolania C++
    c = vcall.rewrite(c)
    # wbudowany strcpy z literalem: m2c widzi kopiowanie niewyrownanych slow
    c = strcpy_rewrite(c)
    # wynik_funkcji + duzy offset (podobiekt): osobna instrukcja, inaczej kompilator sklada offsety
    c = re.sub(r'\((func_[0-9A-F]+\(\) \+ 0x[0-9A-F]{5,})\)', r'({ s32 _g = \1; _g; })', c)
    c = re.sub(r'(?<![({ ] )(?<!_g = )\b(func_[0-9A-F]+\(\) \+ 0x[0-9A-F]{5,})', r'({ s32 _g = \1; _g; })', c)
    # brakujace parametry (np. tylko arg1): dopisz nieuzywane, zeby rejestry sie zgadzaly
    def _params(m):
        ps = [p.strip() for p in m.group(2).split(',') if p.strip() and p.strip() != 'void']
        idx = {}
        for p in ps:
            mm = re.search(r'\barg(\d+)$', p)
            if mm: idx[int(mm.group(1))] = p
        if not idx or len(idx) != len(ps) or max(idx) + 1 == len(idx):
            return m.group(0)
        full = [idx.get(i, 's32 unused%d' % i) for i in range(max(idx) + 1)]
        return m.group(1) + ', '.join(full) + ')'
    c = re.sub(r'^(extern "C" [^\n]*\b%s\()([^)]*)\)' % name, _params, c, count=1, flags=re.M)
    # dane spoza small-data: oryginal adresuje je przez lui/addiu, nie przez $gp
    asm = open(os.path.join(ROOT, 'asm/funcs', name + '.s')).read()
    def _sec(m):
        sym = m.group(2)
        if '%%gp_rel(%s)' % sym in asm:
            return m.group(0)
        return m.group(1) + ' __attribute__((section(".data")));'
    c = re.sub(r'^(extern [^\n(]*?\b(D_[0-9A-F]+)(?:\[[^\]]*\])?);', _sec, c, flags=re.M)
    return '#define DEF_%s\n#include "m2c.h"\n#include "funcs.h"\n' % name + c + '\n'

_BIN = open(os.path.join(ROOT, 'orig/core_100000.bin'), 'rb').read()

def _cstr(sym):
    a = int(sym[2:], 16) - 0x100000
    if not 0 <= a < len(_BIN): return None
    e = _BIN.find(b'\0', a)
    s = _BIN[a:e]
    return s.decode('latin1') if all(32 <= ch < 127 for ch in s) else None

_SZ = {'M2C_UNK': 4, 's32': 4, 'u32': 4, 's16': 2, 'u16': 2, 's8': 1, 'u8': 1}

def strcpy_rewrite(c):
    lines = c.split('\n')
    out = []
    i = 0
    first = re.compile(r'^(\s*)M2C_FIELD\((.+?), M2C_UNK \*, 0\) = M2C_UNALIGNED32\(M2C_FIELD\(&(D_[0-9A-F]+), M2C_UNK \*, 0\)\);$')
    nxt = re.compile(r'^\s*M2C_FIELD\((.+?), (\w+) \*, (\w+)\) = (?:\(\w+\) )?(?:M2C_UNALIGNED32\()?M2C_FIELD\(&(D_[0-9A-F]+), \w+ \*, (\w+)\)\)?;$')
    while i < len(lines):
        m = first.match(lines[i])
        if m:
            ind, dst, sym = m.groups()
            end = 4; j = i + 1
            while j < len(lines):
                n = nxt.match(lines[j])
                if not n or n.group(1) != dst or n.group(4) != sym or n.group(3) != n.group(5): break
                off = int(n.group(3), 0)
                if off != end: break
                end = off + _SZ.get(n.group(2), 4); j += 1
            s = _cstr(sym)
            if s is not None and len(s) + 1 == end:
                lit = s.replace('\\', '\\\\').replace('"', '\\"')
                out.append('%sstrcpy((char *)(%s), "%s");' % (ind, dst, lit))
                i = j; continue
        out.append(lines[i]); i += 1
    return '\n'.join(out)

_IDX4 = re.compile(r'\*\(\((\w+) \* 4\) \+ ((?:[^()]|\((?:[^()]|\([^()]*\))*\))+?)\)')

def fix_deref_line(line):
    # *((i * 4) + base) -> dostep do tablicy; inne dereferencje liczby -> rzutowanie na s32 *
    line = _IDX4.sub(lambda m: 'M2C_INDEX(%s, s32, 0, %s)' % (m.group(2), m.group(1)), line)
    return re.sub(r'(?<![\w)\]])\*(?=[\w(])', '*(s32 *)', line)

def fix_after_error(c, err):
    """Poprawki stosowane dopiero po bledzie kompilacji."""
    bad = set(int(x) for x in re.findall(r':(\d+): invalid type argument of `unary \*', err))
    if bad:
        ls = c.split('\n')
        for i in bad:
            # numer linii w pliku (to samo co w c)
            if 0 < i <= len(ls):
                ls[i - 1] = fix_deref_line(ls[i - 1])
        c = '\n'.join(ls)
    # zmienne stosu (sp, spC, sp10...) - deklaracja bufora
    for v in sorted(set(re.findall(r"`(sp[0-9A-F]*)' undeclared", err))):
        c = re.sub(r'(extern "C" [^\n]*\{\n)', r'\1    s32 %s[4];\n' % v, c, count=1)
    # za malo argumentow: prototyp bez typow (tylko gdy bez float)
    for f in set(re.findall(r"too few arguments to function `[^']*?(func_[0-9A-F]+)", err)):
        c = re.sub(r'(extern "C" [^\n]*\b%s)\(([^)\n]*)\)' % f,
                   lambda m: m.group(0) if 'f32' in m.group(2) or 'f64' in m.group(2) else m.group(1) + '(...)', c)
    return c

def try_c(src, name):
    # biblioteki Sony sa w C (np. wywolania ogonowe 'j'): sprobuj jako C
    c = open(src).read()
    if 'M2C_INDEX' in c:
        return False
    c = c.replace('extern "C" ', '')
    p = src[:-4] + '.c'
    open(p, 'w').write(c)
    try:
        r = [x for x in T.run(p, verbose=False, extra=['-I', os.path.join(ROOT, 'include'), '-w']) if x[0] == name]
    except SystemExit:
        return False
    if r and not r[0][3]:
        shutil.move(p, os.path.join(ROOT, 'src/auto', name + '.c'))
        return True
    return False

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
    for attempt in range(5):
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
    # near-miss: warianty (zamiany operandow, odwrocone if/return...), maks. 2 rundy, 16 prob
    def _score(x):
        return (abs(x[2] * 4 - T.SIZES.get(x[1], 0)) // 4, len(x[3]))
    if r and r[0][3] and _score(r[0])[0] <= 2 and len(r[0][3]) <= max(4, r[0][2] // 3):
        best = (_score(r[0]), open(src).read())
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
                if rr and _score(rr[0]) < best[0]:
                    best = (_score(rr[0]), v); improved = True
                    if best[0] == (0, 0): break
            if not improved or best[0] == (0, 0): break
        open(src, 'w').write(best[1])
        if best[0] == (0, 0):
            r = [(name, r[0][1], r[0][2], [])]
    if r and not r[0][3]:
        stats['match'] += 1
        shutil.move(src, os.path.join(ROOT, 'src/auto', name + '.cpp'))
        report.append(f'{name} MATCH')
    elif try_c(src, name):
        stats['match'] += 1
        report.append(f'{name} MATCH-C')
    else:
        stats['diff'] += 1; report.append(f'{name} diff')
open(os.path.join(ROOT, 'build/auto_report.txt'), 'a').write('\n'.join(report) + '\n')
print(shard, stats)
