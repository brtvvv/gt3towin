#!/usr/bin/env python3
"""famgen.py : dla niedopasowanych funkcji o identycznych mnemonikach co dopasowana (rodzenstwo) bierze zrodlo
dopasowanej, podmienia rozniace sie symbole (func_/D_/jtbl_) i stale (hex/dec) i sprawdza przez wf.py.
Uzycie: python3 tools/famgen.py [maks_instr]"""
import glob, os, re, subprocess, sys, hashlib
ROOT = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
TMP = '/tmp/claude-1000/famgen'; os.makedirs(TMP, exist_ok=True)
MAXN = int(sys.argv[1]) if len(sys.argv) > 1 else 400
skip = set(l.strip() for l in open(os.path.join(ROOT, 'work/famgen_done.txt'))) if os.path.exists(os.path.join(ROOT, 'work/famgen_done.txt')) else set()
def parse(p):
    out = []
    for l in open(p):
        m = re.search(r'/\* \w+ [0-9A-F]{8} \w+ \*/\s+(\S+)\s*(.*)', l)
        if m: out.append((m.group(1), m.group(2).strip()))
    return out
src = {}
for f in glob.glob(os.path.join(ROOT, 'src/*/func_*.c*')):
    n = os.path.splitext(os.path.basename(f))[0]; src[n] = f
groups = {}
for f in glob.glob(os.path.join(ROOT, 'asm/funcs/func_*.s')):
    n = os.path.basename(f)[:-2]
    I = parse(f)
    if len(I) < 6 or len(I) > MAXN: continue
    k = hashlib.md5(' '.join(o for o, _ in I).encode()).hexdigest()
    groups.setdefault(k, []).append((n, I))
tok = re.compile(r'(func_[0-9A-F]{8}|D_[0-9A-F]{8}|jtbl_[0-9A-F]{8}|-?0x[0-9A-Fa-f]+|\b-?\d+\b)')
ok = 0
for k, G in groups.items():
    M = [g for g in G if g[0] in src]; U = [g for g in G if g[0] not in src and g[0] not in skip]
    if not M or not U: continue
    for un, UI in U:
        hit = False
        for mn, MI in M[:3]:
            subs = {}; bad = False
            for (o1, a1), (o2, a2) in zip(MI, UI):
                t1 = tok.findall(a1); t2 = tok.findall(a2)
                if len(t1) != len(t2): bad = True; break
                for x, y in zip(t1, t2):
                    if x != y:
                        if subs.get(x, y) != y: bad = True; break
                        subs[x] = y
                if bad: break
            if bad: continue
            s = open(src[mn]).read().replace(mn, un)
            def conv(x):
                return [x] + ([hex(int(x, 0)), '0x%X' % int(x, 0), str(int(x, 0))] if re.match(r'-?(0x)?[0-9A-Fa-f]+$', x) and not x.startswith(('func', 'D_')) else [])
            for x, y in subs.items():
                if x.startswith(('func_', 'D_', 'jtbl_')):
                    s = re.sub(r'\b%s\b' % x, y, s)
                else:
                    try:
                        xv, yv = int(x, 0), int(y, 0)
                    except ValueError:
                        continue
                    # podmien stale w zrodle (dziesietne i hex), tylko jesli wystepuja
                    s2 = re.sub(r'(?<![\w.])(0x%X|0x%x|%d)(?![\w.])' % (abs(xv), abs(xv), abs(xv)), lambda m: ('0x%X' % abs(yv)) if m.group(1).startswith('0x') else str(abs(yv)), s)
                    s = s2
            ext = os.path.splitext(src[mn])[1]
            p = os.path.join(TMP, un + ext); open(p, 'w').write(s)
            r = subprocess.run([sys.executable, os.path.join(ROOT, 'tools/wf.py'), p], capture_output=True, text=True, cwd=ROOT)
            if 'MATCH' in r.stdout:
                hit = True; break
        print(('MATCH ' if hit else 'miss  ') + un, flush=True)
        ok += hit
        with open(os.path.join(ROOT, 'work/famgen_done.txt'), 'a') as fo: fo.write(un + '\n')
print('dopasowano', ok)
