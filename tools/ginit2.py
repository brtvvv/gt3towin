#!/usr/bin/env python3
"""ginit2.py [func ...] : jak ginit.py, ale wiele tablic w jednej funkcji _GLOBAL_$I$ (jedna jednostka kompilacji).
Bez argumentow: niedopasowane funkcje z listy .ctors (0x2902A8..0x290464)."""
import glob, os, re, struct, sys, itertools
ROOT = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
sys.path.insert(0, os.path.join(ROOT, 'tools'))
import try_ as T
IGN = {'sd', 'ld', 'jr', 'nop'}

def parse(name):
    lines = [re.sub(r'.*\*/\s+', '', l).strip() for l in open(os.path.join(ROOT, 'asm/funcs', name + '.s')) if l.strip().startswith('/*')]
    regs = {'$zero': ('c', 0)}
    tabs = {}
    order = []
    gp = set()
    for l in lines:
        l = re.sub(r'\(([^()]*?)\s*\+\s*([^()]*?)\)', r'(\1+\2)', l)
        p = l.replace(',', ' ').split()
        if not p: continue
        op = p[0]
        if op in IGN: continue
        if op == 'addiu' and p[1] == '$sp': continue
        if op == 'lui':
            m = re.match(r'%hi\((\w+)\)', p[2])
            if not m:
                mc = re.match(r'\((0x[0-9A-Fa-f]+)>>16\)$', ''.join(p[2:]))
                if not mc: return None
                regs[p[1]] = ('c', int(mc.group(1), 16) & 0xFFFF0000); continue
            regs[p[1]] = ('hi', m.group(1))
        elif op == 'addiu':
            d, s, imm = p[1], p[2], p[3]
            m = re.match(r'%lo\((\w+)\)', imm)
            if m:
                regs[d] = ('a', m.group(1), 0); continue
            m = re.match(r'%gp_rel\((\w+)\)', imm)
            if m and s == '$gp':
                regs[d] = ('a', m.group(1), 0); gp.add(m.group(1)); continue
            if imm.startswith('%'): return None
            mc = re.match(r'\((0x[0-9A-Fa-f]+)&0xFFFF\)$', ''.join(p[3:]))
            v = (lambda x: x - 0x10000 if x >= 0x8000 else x)(int(mc.group(1), 16) & 0xFFFF) if mc else int(imm, 0)
            r = regs.get(s)
            if r is None: return None
            if r[0] == 'c': regs[d] = ('c', r[1] + v)
            elif r[0] == 'a': regs[d] = ('a', r[1], r[2] + v)
            else: return None
        elif op == 'ori':
            r = regs.get(p[2])
            if r is None or r[0] != 'c': return None
            mc = re.match(r'\((0x[0-9A-Fa-f]+)&0xFFFF\)$', ''.join(p[3:]))
            regs[p[1]] = ('c', r[1] | (int(mc.group(1), 16) & 0xFFFF if mc else int(p[3], 0)))
        elif op == 'daddu':
            regs[p[1]] = regs.get(p[2]) if p[3] == '$zero' else None
        elif op == 'sw':
            val = regs.get(p[1])
            m = re.match(r'(.*)\((\$\w+)\)', p[2])
            if not m: return None
            off, br = m.group(1), m.group(2)
            mlo = re.match(r'%lo\((\w+)\)', off)
            if mlo:
                sym, o = mlo.group(1), 0
            elif off.startswith('%'):
                return None
            else:
                b = regs.get(br)
                if b is None or b[0] != 'a': return None
                sym, o = b[1], b[2] + int(off, 0)
            if val is None or val[0] == 'hi': return None
            if sym not in tabs:
                tabs[sym] = {}; order.append(sym)
            tabs[sym][o] = val
        else:
            return None
    if not tabs: return None
    return order, tabs, gp

def layout(st):
    size = max(st) + 4
    for esz in (0x18, 0xC, 8, 0x10, 0x14, 0x1C, 0x20, 0x24, 0x28, 0x30, 4):
        if size % esz and size > esz: continue
        n = (size + esz - 1) // esz
        if n < 2 and esz != size and esz < size: continue
        nf = esz // 4
        cols = [[st.get(i * esz + 4 * k, ('c', 0)) for i in range(n)] for k in range(nf)]
        good = True
        for col in cols:
            kinds = set(v[0] for v in col)
            if len(kinds) > 1 and not (kinds == {'c', 'a'} and all(v[1] == 0 or v[1] >= 0x100000 for v in col if v[0] == 'c')):
                good = False
        if good:
            return esz, n, cols
    for esz in (0x18, 0xC, 8, 0x10, 0x14, 0x1C, 0x20, 0x24, 0x28, 0x30):
        if size % esz or size // esz < 2: continue
        n = size // esz; nf = esz // 4
        cols = [[st.get(i * esz + 4 * k, ('c', 0)) for i in range(n)] for k in range(nf)]
        if all(v[0] == 'a' for v in cols[0]):
            return esz, n, cols
    nf = (size + 3) // 4
    return size, 1, [[st.get(4 * k, ('c', 0))] for k in range(nf)]

def gen_table(idx, sym, st, gp, syms):
    esz, n, cols = layout(st)
    types, params, inits, cargs = [], [], [], [[] for _ in range(n)]
    for k, col in enumerate(cols):
        kinds = set(v[0] for v in col)
        if kinds == {'c'} and all(v[1] == 0 for v in col):
            types.append('int'); inits.append('f%d(0)' % k); continue
        if kinds == {'c'} or (len(kinds) > 1 and not all(v[1] == 0 or v[1] >= 0x100000 for v in col if v[0] == 'c')): t = 'int'
        elif all(v[0] == 'a' and v[1].startswith('func_') for v in col if v[0] == 'a'): t = 'void *'
        else: t = 'const char *'
        types.append(t); params.append(k); inits.append('f%d(a%d)' % (k, k))
        for i, v in enumerate(col):
            if v[0] == 'c':
                cargs[i].append(str(v[1]) if t == 'int' else ('(%s)0x%X' % (t, v[1]) if v[1] else '0'))
            else:
                syms.add(v[1])
                e = ('&' if v[1] in gp else '') + v[1]
                if v[2]: e = '(char *)%s + %d' % (e, v[2])
                cargs[i].append('(%s)%s' % (t, e) if t != 'int' else '(int)' + e)
    fields = ' '.join('%s f%d;' % (types[k], k) for k in range(len(cols)))
    ps = ', '.join('%s a%d' % (types[k], k) for k in params)
    st_ = 'struct C%d { %s C%d(%s) : %s {} };' % (idx, fields, idx, ps, ', '.join(inits))
    if n == 1:
        arr = 'C%d %s(%s);' % (idx, sym, ', '.join(cargs[0]))
    else:
        arr = 'C%d %s[%d] = { %s };' % (idx, sym, n, ', '.join('C%d(%s)' % (idx, ', '.join(a)) for a in cargs))
    return st_, arr

def gen(name, order, tabs, gp):
    syms = set(); structs = []; arrs = []
    for i, s in enumerate(order):
        a, b = gen_table(i, s, tabs[s], gp, syms)
        structs.append(a); arrs.append(b)
    decl = []
    for s_ in sorted(syms - set(order)):
        if s_.startswith('func_'): decl.append('extern "C" void %s();' % s_)
        elif s_ in gp: decl.append('extern int %s;' % s_)
        else: decl.append('extern char %s[];' % s_)
    pre = []
    for s_ in sorted(syms & set(order)):
        pre.append('extern C%d %s%s;' % (order.index(s_), s_, '[]' if '[' in arrs[order.index(s_)] else ''))
    return '%s\n%s\n%s\n// @_GLOBAL_$I$%s 0x%X\n' % ('\n'.join(decl), '\n'.join(structs), '\n'.join(arrs), order[0], int(name[5:], 16))

def main():
    done = set(os.path.splitext(os.path.basename(f))[0] for f in glob.glob(os.path.join(ROOT, 'src/*/*.c*')))
    names = sys.argv[1:]
    if not names:
        d = open(os.path.join(ROOT, 'orig/core_100000.bin'), 'rb').read()
        names = ['func_%08X' % struct.unpack_from('<I', d, x - 0x100000)[0] for x in range(0x2902A8, 0x290464, 4)]
    for name in names:
        if name in done or not os.path.exists(os.path.join(ROOT, 'asm/funcs', name + '.s')): continue
        r = parse(name)
        if not r: print('nieparsowalne', name); continue
        order, tabs, gp = r
        ok = False
        for o in (order, sorted(order)):
            for first in o:
                oo = [first] + [x for x in o if x != first]
                src = gen(name, oo, tabs, gp)
                p = os.path.join(ROOT, 'src/manual', name + '.cpp')
                open(p, 'w').write(src)
                try:
                    res = T.run(p, verbose=False)
                except SystemExit:
                    res = []
                if res and not res[0][3]:
                    print('MATCH', name, oo, flush=True); ok = True; break
                os.remove(p)
            if ok: break
        if not ok: print('brak', name, order, flush=True)

main()
