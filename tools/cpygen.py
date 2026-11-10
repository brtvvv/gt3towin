#!/usr/bin/env python3
"""cpygen.py [func...] : generator funkcji kopiujacych strukture (`*a = *b;`, ew. `return a;`).

Rozpoznaje petle ld/sd (+ wariant ldl/sdl) z granica `addiu vX,a1,N` i ogon po petli; rozmiar = N + zasieg ogona.
Probuje typow elementu char/short/int/long oraz wariantow zwracania. Bez argumentow skanuje niedopasowane
funkcje bez `jal`, ktore zawieraja kopie (ld/ldl) i maja <= 120 instrukcji.
"""
import glob, os, re, subprocess, sys
ROOT = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
TMP = '/tmp/claude-1000/cpygen'
os.makedirs(TMP, exist_ok=True)
W = {'ld': 8, 'ldl': 8, 'ldr': 8, 'lw': 4, 'lwl': 4, 'lwr': 4, 'lh': 2, 'lhu': 2, 'lb': 1, 'lbu': 1, 'lq': 16}


def ins(name):
    out = []
    for l in open(os.path.join(ROOT, 'asm/funcs', name + '.s')):
        m = re.search(r'/\* \w+ ([0-9A-F]{8}) \w+ \*/\s+(\S+)\s*(.*)', l)
        if m:
            out.append((m.group(2), [x.strip() for x in m.group(3).split(',')] if m.group(3) else []))
    return out


def sizes(name):
    I = ins(name)
    if any(o in ('jal', 'jalr') for o, _ in I) or len(I) > 120:
        return []
    N = 0
    for o, a in I:
        if o == 'addiu' and len(a) == 3 and a[1] == '$a1' and a[0] != '$a1':
            try:
                N = max(N, int(a[2], 0))
            except ValueError:
                pass
    # zasieg odczytow wzgledem a1 (po petli a1 wskazuje na N)
    ext = 0
    for o, a in I:
        if o in W and len(a) == 2:
            m = re.match(r'(-?0x[0-9A-Fa-f]+|-?\d+)\((\$\w+)\)', a[1])
            if m and m.group(2) == '$a1':
                off = int(m.group(1), 0)
                w = W[o]
                if o in ('ldl', 'lwl'):
                    off -= w - 1
                ext = max(ext, off + w)
    if ext == 0:
        return []
    cands = {N + ext, ext}
    return sorted(c for c in cands if c > 0)


def main():
    names = sys.argv[1:]
    if not names:
        done = set(os.path.splitext(os.path.basename(f))[0] for f in glob.glob(os.path.join(ROOT, 'src/*/*.c*')))
        for f in sorted(glob.glob(os.path.join(ROOT, 'asm/funcs/func_*.s'))):
            n = os.path.basename(f)[:-2]
            t = open(f).read()
            if n not in done and ('ldl' in t or re.search(r'\bld\b', t)) and 'jal' not in t:
                names.append(n)
    ok = 0
    for n in names:
        try:
            S = sizes(n)
        except Exception:
            S = []
        hit = False
        for sz in S:
            for ty, al in (('char', 1), ('short', 2), ('int', 4), ('long', 8)):
                if sz % al:
                    continue
                for form in ('S *%s(S *a, S *b) { *a = *b; return a; }', 'void %s(S *a, S *b) { *a = *b; }',
                             'void %s(S *b, S *a) { *a = *b; }'):
                    src = 'struct S { %s d[%d]; };\nextern "C" %s\n' % (ty, sz // al, form % n)
                    p = os.path.join(TMP, n + '.cpp')
                    open(p, 'w').write(src)
                    r = subprocess.run([sys.executable, os.path.join(ROOT, 'tools/wf.py'), p], capture_output=True, text=True, cwd=ROOT)
                    if 'MATCH' in r.stdout:
                        hit = True; break
                if hit: break
            if hit: break
        if S:
            print(('MATCH ' if hit else 'miss  ') + n, S)
        ok += hit
    print('dopasowano', ok)


if __name__ == '__main__':
    main()
