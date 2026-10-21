#!/usr/bin/env python3
"""Generuje destruktory gcc 2.9 z klasowym operator delete(void*, size_t):
  vptr = vtable; [baza::~baza(this, 0) | this->cleanup()]; if (flag & 1) X::operator delete(this, sizeof(X))
dtorgen.py -> src/dtor/<func>.cpp (tylko zweryfikowane)"""
import glob, os, re, sys
sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))
import try_ as T
ROOT = T.ROOT
done = set(os.path.splitext(os.path.basename(f))[0] for f in glob.glob(os.path.join(ROOT, 'src/*/*.c*')))
os.makedirs(os.path.join(ROOT, 'src/dtor'), exist_ok=True)

def imm(s):
    return int(s, 16) if 'x' in s else int(s)

def gen(name):
    t = open(os.path.join(ROOT, 'asm/funcs', name + '.s')).read()
    ins = [(o, a.strip()) for o, a in re.findall(r'\*/\s+([a-z0-9.]+)[ \t]*([^\n]*)', t)]
    ops = [o for o, a in ins]
    if ops.count('jal') != 2 or 'andi' not in ops or len(ins) > 24:
        return None
    vt = re.search(r'sw\s+\$v0, (0x[0-9A-F]+|\d+)\(\$(s1|a0)\)', t)
    if not vt or not re.search(r'%hi\(D_', t):
        return None
    V = imm(vt.group(1))
    jals = [i for i, (o, a) in enumerate(ins) if o == 'jal']
    first, second = jals
    # argumenty pierwszego wywolania: a1 = 0 => destruktor bazy
    window = ins[max(0, first - 4):first + 2]
    base = any(o == 'daddu' and a.startswith('$a1, $zero, $zero') for o, a in window)
    # rozmiar w drugim wywolaniu
    sz = None
    for o, a in ins[second - 2:second + 2]:
        m = re.match(r'\$a1, \$zero, (0x[0-9A-F]+|\d+)', a)
        if m and o in ('addiu', 'ori'):
            sz = imm(m.group(1))
    if sz is None or sz < V + 4:
        return None
    q = sz - V - 4
    qd = ' char q[%d];' % q if q else ''
    if base:
        cls = 'struct B { char p[%d]; virtual ~B(); };\nstruct X : B {%s ~X(); static void operator delete(void *, unsigned int); };\nX::~X() {}\n' % (V, qd) if V else \
              'struct B { virtual ~B(); };\nstruct X : B {%s ~X(); static void operator delete(void *, unsigned int); };\nX::~X() {}\n' % qd
    else:
        pd = 'char p[%d]; ' % V if V else ''
        cls = 'struct B { %svirtual void dummy(); };\nstruct X : B {%s ~X(); void cleanup(); static void operator delete(void *, unsigned int); };\nX::~X() { cleanup(); }\n' % (pd, qd)
    return cls + '// @_$_1X 0x%s\n' % name[5:].lstrip('0')

ok = 0
for f in sorted(glob.glob(os.path.join(ROOT, 'asm/funcs/func_*.s'))):
    name = os.path.basename(f)[:-2]
    if name in done:
        continue
    src = gen(name)
    if not src:
        continue
    p = os.path.join(ROOT, 'src/dtor', name + '.cpp')
    open(p, 'w').write(src)
    try:
        r = T.run(p, verbose=False)
    except SystemExit:
        r = None
    if r and not r[0][3]:
        ok += 1
    else:
        os.remove(p)
print('dopasowano', ok)
