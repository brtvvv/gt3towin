#!/usr/bin/env python3
"""Generuje funkcje typeinfo (__tf...) gcc 2.9: __rtti_user (bez bazy) i __rtti_si (jedna baza).

tfgen.py <lista>  -> src/tf/<func>.cpp (tylko dopasowane)
"""
import os, re, sys
sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))
import try_ as T
ROOT = T.ROOT

def gen(name):
    t = open(os.path.join(ROOT, 'asm/funcs', name + '.s')).read()
    gp = re.search(r'%gp_rel\((D_\w+)\)', t)
    guard = gp.group(1) if gp else re.search(r'%lo\((D_\w+)\)', t).group(1)
    attr = '' if gp else ' __attribute__((section(".data")))'
    syms = [s for s in re.findall(r'%hi\((D_\w+)\)', t) if s != guard]
    out = ['struct TI { int v; };']
    if 'func_0027D620' in t:
        parent = re.search(r'jal\s+(func_\w+)\n(?:.*\n)*?.*jal\s+func_0027D620', t).group(1)
        pti_gp = [s for s in re.findall(r'%gp_rel\((D_\w+)\)', t) if s != guard]
        nm = syms[0]
        pti = syms[1] if len(syms) > 1 else pti_gp[0]
        pattr = '' if pti_gp else ' __attribute__((section(".data")))'
        out += ['extern "C" void func_0027D620(TI *, const char *, TI *);',
                'extern "C" TI *%s(void);' % parent,
                'extern TI %s%s;' % (guard, attr), 'extern const char %s[];' % nm,
                'extern TI %s%s;' % (pti, pattr),
                'extern "C" TI *%s(void) {' % name,
                '    if (!%s.v) { %s(); func_0027D620(&%s, %s, &%s); }' % (guard, parent, guard, nm, pti),
                '    return &%s;' % guard, '}']
    else:
        nm = syms[0]
        out += ['extern "C" void func_0027D640(TI *, const char *);',
                'extern TI %s%s;' % (guard, attr), 'extern const char %s[];' % nm,
                'extern "C" TI *%s(void) {' % name,
                '    if (!%s.v) func_0027D640(&%s, %s);' % (guard, guard, nm),
                '    return &%s;' % guard, '}']
    return '\n'.join(out) + '\n'

os.makedirs(os.path.join(ROOT, 'src/tf'), exist_ok=True)
ok = 0
for name in open(sys.argv[1]).read().split():
    try:
        src = gen(name)
    except Exception:
        continue
    p = os.path.join(ROOT, 'src/tf', name + '.cpp')
    open(p, 'w').write(src)
    try:
        r = [x for x in T.run(p, verbose=False) if x[0] == name]
    except SystemExit:
        r = None
    if r and not r[0][3]:
        ok += 1
    else:
        os.rename(p, '/tmp/tf_' + name + '.cpp')
print('dopasowano', ok)
