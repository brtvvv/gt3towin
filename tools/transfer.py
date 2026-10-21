#!/usr/bin/env python3
"""Przenosi dopasowane zrodlo na funkcje o identycznym ksztalcie asemblera.

Funkcje grupowane sa po sekwencji instrukcji (bez stalych i symboli). Jesli w grupie
jest juz dopasowana funkcja, jej zrodlo jest kopiowane do pozostalych z podmiana
stalych, symboli i nazw funkcji (pozycja po pozycji w asemblerze). Kazdy wynik jest
weryfikowany bajt w bajt.

transfer.py   -> src/xfer/<func>.cpp
"""
import collections, glob, os, re, sys
sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))
import try_ as T
ROOT = T.ROOT
TOK = re.compile(r'-?0x[0-9A-Fa-f]+|\b\d+\b|D_[0-9A-F]+|func_[0-9A-F]+')


def load(name):
    t = open(os.path.join(ROOT, 'asm/funcs', name + '.s')).read()
    ins = re.findall(r'\*/\s+([a-z0-9.]+)[ \t]*([^\n]*)', t)
    key = tuple(o + ' ' + re.sub(r'-?0x[0-9A-Fa-f]+|\b\d+\b|D_\w+|func_\w+|\.L\w+', '', a) for o, a in ins)
    toks = []
    for o, a in ins:
        a = re.sub(r'\.L\w+', '', a)
        toks += TOK.findall(a)
    return key, toks


BIN = open(os.path.join(ROOT, 'orig/core_100000.bin'), 'rb').read()


def cstr(sym):
    a = int(sym[2:], 16) - 0x100000
    if not 0 <= a < len(BIN):
        return None
    e = BIN.find(b'\0', a)
    s = BIN[a:e]
    return s.decode('latin1') if all(32 <= c < 127 for c in s) else None


def esc(s):
    return s.replace('\\', '\\\\').replace('"', '\\"')


def norm(v):
    if re.match(r'-?0x', v) or v.isdigit() or v.startswith('-'):
        return int(v, 16) if 'x' in v else int(v)
    return v


def substitute(src, a_toks, b_toks, a_name, b_name):
    m = {}
    for x, y in zip(a_toks, b_toks):
        nx, ny = norm(x), norm(y)
        if nx == ny:
            continue
        if nx in m:
            continue  # niejednoznaczne - zostaw pierwsze przypisanie
        m[nx] = ny
    m[a_name] = b_name
    # stale w zrodle: hex i dziesietne; symbole
    def rep(mt):
        s = mt.group(0)
        v = norm(s)
        if v in m:
            r = m[v]
            if isinstance(r, int):
                return ('0x%X' % r if r >= 0 else '-0x%X' % -r) if 'x' in s.lower() else str(r)
            return r
        return s
    out = TOK.sub(rep, src)
    # literaly napisow: tresc z binarki wg podmienionych symboli D_
    for a, b in m.items():
        if isinstance(a, str) and a.startswith('D_') and isinstance(b, str):
            sa, sb = cstr(a), cstr(b)
            if sa is not None and sb is not None and '"%s"' % esc(sa) in out:
                out = out.replace('"%s"' % esc(sa), '"%s"' % esc(sb))
    if re.search(r'"[^"]*"', out) and out.count('"') != src.count('"'):
        return None
    # adres w komentarzu // @ -> adres funkcji docelowej
    out = re.sub(r'(//\s*@\S+\s+)0x%s\b' % a_name[5:].lstrip('0'), lambda mm: mm.group(1) + '0x' + b_name[5:].lstrip('0'), out, flags=re.I)
    return out


def main():
    srcs = {}
    for f in glob.glob(os.path.join(ROOT, 'src/*/*.cpp')) + glob.glob(os.path.join(ROOT, 'src/*/*.c')):
        n = os.path.splitext(os.path.basename(f))[0]
        if n.startswith('func_'):
            srcs[n] = f
    groups = collections.defaultdict(list)
    info = {}
    for f in glob.glob(os.path.join(ROOT, 'asm/funcs/func_*.s')):
        n = os.path.basename(f)[:-2]
        key, toks = load(n)
        info[n] = toks
        groups[key].append(n)
    os.makedirs(os.path.join(ROOT, 'src/xfer'), exist_ok=True)
    ok = tried = 0
    for key, names in groups.items():
        donors = [n for n in names if n in srcs]
        todo = [n for n in names if n not in srcs]
        if not donors or not todo:
            continue
        for b in todo:
            for a in donors[:5]:
                src = open(srcs[a]).read()
                if '#include "funcs.h"' in src:
                    src = src.replace('#define DEF_%s' % a, '#define DEF_%s' % b)
                new = substitute(src, info[a], info[b], a, b)
                if not new:
                    continue
                tried += 1
                p = os.path.join(ROOT, 'src/xfer', b + os.path.splitext(srcs[a])[1])
                open(p, 'w').write(new)
                try:
                    r = [x for x in T.run(p, verbose=False) if x[0] == b]
                except SystemExit:
                    r = None
                if r and not r[0][3]:
                    ok += 1
                    srcs[b] = p
                    break
                os.remove(p)
    print('prob', tried, 'dopasowano', ok)


if __name__ == '__main__':
    main()
