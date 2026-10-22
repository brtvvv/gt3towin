#!/usr/bin/env python3
"""variants2.py <lista> [shard k/n]: dla szkicow /tmp/<func>.cpp probuje kombinacji przerobek:
  Z: zerowe zapisy s32 -> f32 (typy pol wplywaja na szeregowanie przez strict aliasing),
  R: prototypy wolanych funkcji 'void' -> 's32' (wybor rejestru v0/v1 po wywolaniu),
  V: metody wirtualne VC_* zwracajace void <-> s32.
Dopasowania zapisuje do src/auto/<func>.cpp."""
import itertools, os, re, sys, glob
sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))
import try_ as T
ROOT = T.ROOT

PROTO = {}
for m in re.finditer(r'#ifndef DEF_(func_[0-9A-F]+)\n(.*?)\n#endif', open(os.path.join(ROOT, 'include/funcs.h')).read(), re.S):
    PROTO[m.group(1)] = m.group(2).strip()


def var_z(src):
    return re.sub(r'M2C_FIELD\(([^;]*?), s32 \*, (0x[0-9A-F]+|\d+)\) = 0;', r'M2C_FIELD(\1, f32 *, \2) = 0.0f;', src)


def var_r(src, name):
    body_i = src.find('extern "C"', src.find('#include "funcs.h"'))
    body = src[body_i:]
    defs, decls = [], []
    for c in sorted(set(re.findall(r'\b(func_[0-9A-F]+)\(', body))):
        if c == name or c not in PROTO or ('#define DEF_' + c) in src:
            continue
        p = PROTO[c]
        if p.startswith('void '):
            defs.append('#define DEF_%s\n' % c)
            decls.append('extern "C" s32 %s;\n' % p[5:].rstrip(';'))
    if not defs:
        return src
    out = ''.join(defs) + src
    i = out.find('\n', out.find('#include "funcs.h"')) + 1
    return out[:i] + ''.join(decls) + out[i:]


def var_v(src):
    return re.sub(r'virtual (void|s32) (v\d+\()', lambda m: 'virtual %s %s' % ('s32' if m.group(1) == 'void' else 'void', m.group(2)), src)


def main():
    names = open(sys.argv[1]).read().split()
    if len(sys.argv) > 2:
        k, n = map(int, sys.argv[2].split('/'))
        names = names[k::n]
    done = set(os.path.splitext(os.path.basename(f))[0] for f in glob.glob(os.path.join(ROOT, 'src/*/*.c*')))
    ok = 0
    for name in names:
        if name in done or not os.path.exists('/tmp/%s.cpp' % name):
            continue
        src = open('/tmp/%s.cpp' % name).read()
        seen = {src}
        for z, r, v in itertools.product((0, 1), repeat=3):
            if not (z or r or v):
                continue
            s = src
            if z: s = var_z(s)
            if r: s = var_r(s, name)
            if v: s = var_v(s)
            if s in seen:
                continue
            seen.add(s)
            p = '/tmp/claude_v2_%s.cpp' % name
            open(p, 'w').write(s)
            try:
                res = [x for x in T.run(p, verbose=False) if x[0] == name]
            except SystemExit:
                continue
            if res and not res[0][3]:
                open(os.path.join(ROOT, 'src/auto', name + '.cpp'), 'w').write(s)
                ok += 1
                print('MATCH', name, z, r, v, flush=True)
                break
    print('dopasowano', ok)


if __name__ == '__main__':
    main()
