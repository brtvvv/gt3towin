#!/usr/bin/env python3
"""swgen.py [func...] : generator funkcji 'switch zwracajacy stala' (tablica skokow, bloki `b koniec; li rX,C`).

Bez argumentow skanuje wszystkie niedopasowane funkcje z jtbl_. Probuje wariantow (int/unsigned, przesuniecie
indeksu z `addiu rX,a?,-N`, liczba parametrow) i zapisuje dopasowania przez wf.py do src/manual/.
"""
import glob, os, re, struct, subprocess, sys
ROOT = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
TMP = '/tmp/claude-1000/swgen'
os.makedirs(TMP, exist_ok=True)
BIN = open(os.path.join(ROOT, 'orig/core_100000.bin'), 'rb').read()


def ins(name):
    out = []
    for l in open(os.path.join(ROOT, 'asm/funcs', name + '.s')):
        m = re.search(r'/\* \w+ ([0-9A-F]{8}) \w+ \*/\s+(\S+)\s*(.*)', l)
        if m:
            out.append((int(m.group(1), 16), m.group(2), [x.strip() for x in m.group(3).split(',')] if m.group(3) else []))
    return out


def imm(s):
    return int(s, 0)


def analyze(name):
    I = ins(name)
    txt = ' '.join(o for _, o, _ in I)
    if 'jr' not in txt or len(I) > 400:
        return None
    jt = None
    for _, o, a in I:
        for x in a:
            m = re.search(r'%lo\((jtbl_[0-9A-F]+)\)', x)
            if m:
                jt = int(m.group(1)[5:], 16)
    if jt is None:
        return None
    # sltiu vX, idx, N ; opcjonalnie addiu idx, aN, -OFF
    n = off = None; argreg = None
    for i, (_, o, a) in enumerate(I[:6]):
        if o == 'sltiu':
            n = imm(a[2]); idxr = a[1]
            argreg = idxr
            for _, o2, a2 in I[:i]:
                if o2 == 'addiu' and a2[0] == idxr and a2[1].startswith('$a'):
                    off = imm(a2[2]); argreg = a2[1]
    if n is None or not argreg or not argreg.startswith('$a'):
        return None
    tb = struct.unpack('<%dI' % n, BIN[jt - 0x100000: jt - 0x100000 + 4 * n])
    # rejestr wyniku: ostatnie `daddu v0, rX, zero` przed jr ra (albo v0 bezposrednio)
    res = '$v0'
    if I[-1][1] == 'daddu' and I[-1][2][0] == '$v0':
        res = I[-1][2][1]
    val = {}
    deflt = None
    for i, (a, o, ar) in enumerate(I):
        def cval(x):
            o2, a2 = x[1], x[2]
            if not a2 or a2[0] != res:
                return None
            if o2 == 'daddu' and a2[1] == '$zero' and a2[2] == '$zero':
                return 0
            if o2 in ('addiu', 'ori') and a2[1] == '$zero':
                return imm(a2[2])
            return None
        if o == 'b' and i + 1 < len(I):
            v = cval(I[i + 1])
            if v is not None:
                val[a] = v
        elif i + 1 < len(I) and I[i + 1][0] not in val:
            pass
    # blok bez 'b' (ostatni przed etykieta konca): pojedyncza instrukcja ustawiajaca
    for i, (a, o, ar) in enumerate(I):
        if a in tb and a not in val and ar and ar[0] == res and o in ('addiu', 'daddu', 'ori'):
            if o == 'daddu' and ar[1] == '$zero':
                val[a] = 0
            elif ar[1] == '$zero':
                val[a] = imm(ar[2])
    # domyslna wartosc: ustawiona przed sltiu/beqz
    for _, o, a in I[:6]:
        if a and a[0] == res and o in ('addiu', 'daddu') and a[1] == '$zero':
            deflt = 0 if o == 'daddu' else imm(a[2])
    return dict(tb=tb, val=val, off=off or 0, arg=int(argreg[2:]), deflt=deflt, n=n)


def render(name, A, utype, nparam):
    groups = {}
    for k, t in enumerate(A['tb']):
        groups.setdefault(t, []).append(k - A['off'])
    body = []
    for t in sorted(groups):
        cs = ' '.join('case %d:' % k for k in groups[t])
        v = A['val'].get(t)
        body.append('%s r = %d; break;' % (cs, v) if v is not None else '%s break;' % cs)
    params = ', '.join(('%s k' % utype) if i == A['arg'] else 'int p%d' % i for i in range(nparam))
    d = A['deflt'] if A['deflt'] is not None else 0
    return 'extern "C" int %s(%s) { int r = %d; switch (k) { %s } return r; }\n' % (name, params, d, ' '.join(body))


def main():
    names = sys.argv[1:]
    if not names:
        done = set(os.path.splitext(os.path.basename(f))[0] for f in glob.glob(os.path.join(ROOT, 'src/*/*.c*')))
        for f in sorted(glob.glob(os.path.join(ROOT, 'asm/funcs/func_*.s'))):
            n = os.path.basename(f)[:-2]
            if n not in done and 'jtbl_' in open(f).read():
                names.append(n)
    ok = 0
    for n in names:
        try:
            A = analyze(n)
        except Exception:
            A = None
        if not A or len(A['val']) < len(set(A['tb'])) - 1:
            continue
        hit = False
        for ut in ('unsigned', 'int'):
            for np_ in range(A['arg'] + 1, 4):
                p = os.path.join(TMP, n + '.cpp')
                open(p, 'w').write(render(n, A, ut, np_))
                r = subprocess.run([sys.executable, os.path.join(ROOT, 'tools/wf.py'), p], capture_output=True, text=True, cwd=ROOT)
                if 'MATCH' in r.stdout:
                    hit = True; break
            if hit:
                break
        print(('MATCH ' if hit else 'miss  ') + n)
        ok += hit
    print('dopasowano', ok)


if __name__ == '__main__':
    main()
