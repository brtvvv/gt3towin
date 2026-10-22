#!/usr/bin/env python3
"""gdtor.py: generuje _GLOBAL_$D$ (destruktory statycznych tablic obiektow) dla pasujacych funkcji."""
import glob, os, re, sys
sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))
import try_ as T
ROOT = T.ROOT
done = set(os.path.splitext(os.path.basename(f))[0] for f in glob.glob(os.path.join(ROOT, 'src/*/*.c*')))
ok = 0
for f in sorted(glob.glob(os.path.join(ROOT, 'asm/funcs/func_*.s'))):
    n = os.path.basename(f)[:-2]
    if n in done:
        continue
    ins = [(o, a.strip()) for o, a in re.findall(r'\*/\s+([a-z0-9.]+)[ \t]*([^\n]*)', open(f).read())]
    if len(ins) != 25 or ins[5][0] != 'beqz':
        continue
    m1 = re.match(r'\$v0, %hi\((D_[0-9A-F]+)\)', ins[1][1])
    m2 = re.match(r'\$s0, \$v0, (0x[0-9A-F]+)', ins[7][1]) if ins[7][0] == 'addiu' else None
    m3 = re.match(r'\$s0, \$s0, -(0x[0-9A-F]+)', ins[10][1])
    m4 = re.match(r'\$v0, (0x[0-9A-F]+)\(\$s0\)', ins[13][1])
    m5 = re.match(r'\$a0, (0x[0-9A-F]+)\(\$v0\)', ins[14][1])
    if not (m1 and m2 and m3 and m4 and m5) or ins[12][1] != '$a1, $zero, $zero':
        continue
    sym, tot, sz, vp, ent = m1.group(1), int(m2.group(1), 16), int(m3.group(1), 16), int(m4.group(1), 16), int(m5.group(1), 16)
    if tot % sz or ent < 8:
        continue
    k = ent // 8 - 1
    virt = ''.join('virtual void d%d(); ' % i for i in range(k))
    base = 'struct B { %s%s virtual ~B(); };' % ('char p[0x%X]; ' % vp if vp else '', virt)
    rest = sz - vp - 4
    cls = 'struct X : B { %sX(); };' % ('char q[0x%X]; ' % rest if rest > 0 else '')
    src = '/* statyczna tablica obiektow: destruktor generowany przez kompilator */\n%s\n%s\nX %s[%d];\n// @_GLOBAL_$D$%s 0x%X\n' % (base, cls, sym, tot // sz, sym, int(n[5:], 16))
    p = os.path.join(ROOT, 'src/manual', n + '.cpp')
    open(p, 'w').write(src)
    r = [x for x in T.run(p, verbose=False) if not x[3]]
    if r:
        ok += 1; print('MATCH', n)
    else:
        os.remove(p)
print('dopasowano', ok)
