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

def regval(ins, upto, reg):
    """Wartosc rejestru przed instrukcja upto (+ slot opozniajacy): ('this', off) / ('const', v) / None."""
    seq = ins[:upto] + ([ins[upto + 1]] if upto + 1 < len(ins) else [])
    val = None
    for o, a in seq:
        m = re.match(r'\$(\w+), (.*)', a)
        if not m or m.group(1) != reg:
            continue
        rest = m.group(2)
        if o == 'daddu' and rest == '$s1, $zero':
            val = ('this', 0)
        elif o == 'daddu' and rest == '$zero, $zero':
            val = ('const', 0)
        elif o == 'addiu' and rest.startswith('$s1, '):
            val = ('this', imm(rest[5:]))
        elif o in ('addiu', 'ori') and rest.startswith('$zero, '):
            val = ('const', imm(rest[7:]))
        else:
            val = None
    return val


def gen(name):
    t = open(os.path.join(ROOT, 'asm/funcs', name + '.s')).read()
    ins = [(o, a.strip()) for o, a in re.findall(r'\*/\s+([a-z0-9.]+)[ \t]*([^\n]*)', t)]
    if not re.search(r'daddu\s+\$s1, \$a0, \$zero', t) or 'andi' not in t:
        return None
    vt = re.search(r'sw\s+\$v0, (0x[0-9A-F]+|\d+)\(\$s1\)', t)
    if not vt or not re.search(r'%hi\(D_', t):
        return None
    V = imm(vt.group(1))
    jals = [i for i, (o, a) in enumerate(ins) if o == 'jal']
    andi = [i for i, (o, a) in enumerate(ins) if o == 'andi'][0]
    body = [i for i in jals if i < andi]
    after = [i for i in jals if i > andi]
    if len(after) != 1:
        return None
    sz = regval(ins, after[0], 'a1')
    if not sz or sz[0] != 'const':
        return None
    SZ = sz[1]
    members, cleanups, base = [], [], None
    for k, i in enumerate(body):
        a0 = regval(ins, i, 'a0') if k else (regval(ins, i, 'a0') or ('this', 0))
        a1 = regval(ins, i, 'a1')
        if a0 is None or a0[0] != 'this':
            return None
        if a1 == ('const', 2):
            members.append(a0[1])
        elif a1 == ('const', 0) and a0[1] == 0 and k == len(body) - 1:
            base = True
        elif a1 is None and a0[1] == 0:
            if members or base:
                return None
            cleanups.append(k)
        else:
            return None
    if members != sorted(members, reverse=True):
        return None
    if base:
        if members or cleanups:
            return None
        qd = ' char q[%d];' % (SZ - V - 4) if SZ > V + 4 else ''
        pre = 'char p[%d]; ' % V if V else ''
        return 'struct B { %svirtual ~B(); };\nstruct X : B {%s ~X(); static void operator delete(void *, unsigned int); };\nX::~X() {}\n// @_$_1X 0x%s\n' % (pre, qd, name[5:].lstrip('0'))
    align = ''
    if SZ != V + 4 and SZ == ((V + 4 + 7) & ~7):
        align = ' __attribute__((aligned(8)))'
    elif SZ != V + 4:
        if members or SZ < V + 4:
            return None
        pd = 'char p[%d]; ' % V if V else ''
        return 'struct B { %svirtual void dummy(); };\nstruct X : B { char q[%d]; ~X();%s static void operator delete(void *, unsigned int); };\nX::~X() {%s }\n// @_$_1X 0x%s\n' % (
            pd, SZ - V - 4, ''.join(' void c%d();' % c for c in cleanups), ''.join(' c%d();' % c for c in cleanups), name[5:].lstrip('0'))
    out = []
    fields = []
    cur = 0
    offs = sorted(members)
    for j, off in enumerate(offs):
        if off > cur:
            fields.append('char pad%d[%d];' % (j, off - cur))
        end = offs[j + 1] if j + 1 < len(offs) else V
        if end <= off:
            return None
        out.append('struct M%d { char d[%d]; ~M%d(); };' % (j, end - off, j))
        fields.append('M%d m%d;' % (j, j))
        cur = end
    if cur < V:
        fields.append('char padv[%d];' % (V - cur))
    out.append('struct X { %s virtual ~X();%s static void operator delete(void *, unsigned int); }%s;' % (' '.join(fields), ''.join(' void c%d();' % c for c in cleanups), align))
    out.append('X::~X() {%s }' % ''.join(' c%d();' % c for c in cleanups))
    out.append('// @_$_1X 0x%s' % name[5:].lstrip('0'))
    return '\n'.join(out) + '\n'

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
