#!/usr/bin/env python3
"""ginit.py [func ...] : funkcje inicjalizujace globalne tablice (same lui/addiu/sw) jako _GLOBAL_$I$tablica.
Symuluje rejestry, odtwarza obraz tablicy i probuje struktur z konstruktorem dla roznych rozmiarow elementu.
Bez argumentow przeszukuje wszystkie niedopasowane funkcje."""
import glob, os, re, subprocess, sys
ROOT = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
sys.path.insert(0, os.path.join(ROOT, 'tools'))
import try_ as T
GP = set()
OK = {'lui', 'addiu', 'sw', 'jr', 'nop', 'daddu', 'ori', 'sh', 'sb'}

def parse(name):
    lines = [re.sub(r'.*\*/\s+', '', l).strip() for l in open(os.path.join(ROOT, 'asm/funcs', name + '.s')) if l.strip().startswith('/*')]
    regs = {'$zero': ('c', 0)}
    stores = {}
    base = None
    for l in lines:
        p = l.replace(',', ' ').split()
        if not p: continue
        op = p[0]
        if op not in OK: return None
        if op == 'lui':
            m = re.match(r'%hi\((\w+)\)', p[2])
            if not m: return None
            regs[p[1]] = ('hi', m.group(1))
        elif op == 'addiu':
            d, s, imm = p[1], p[2], p[3]
            m = re.match(r'%lo\((\w+)\)', imm)
            if m:
                regs[d] = ('a', m.group(1), 0)
            else:
                m = re.match(r'%gp_rel\((\w+)\)', imm)
                if m and s == '$gp':
                    regs[d] = ('a', m.group(1), 0); GP.add(m.group(1))
                    continue
                v = int(imm, 0)
                r = regs.get(s)
                if r is None: return None
                if r[0] == 'c': regs[d] = ('c', r[1] + v)
                elif r[0] == 'a': regs[d] = ('a', r[1], r[2] + v)
                else: return None
        elif op == 'ori':
            r = regs.get(p[2])
            if r is None or r[0] != 'c': return None
            regs[p[1]] = ('c', r[1] | int(p[3], 0))
        elif op == 'daddu':
            regs[p[1]] = regs.get(p[2]) if p[3] == '$zero' else None
        elif op in ('sw', 'sh', 'sb'):
            val = regs.get(p[1])
            m = re.match(r'(.*)\((\$\w+)\)', p[2])
            if not m: return None
            off, br = m.group(1), m.group(2)
            mlo = re.match(r'%lo\((\w+)\)', off)
            if mlo:
                sym, o = mlo.group(1), 0
            else:
                b = regs.get(br)
                if b is None or b[0] != 'a': return None
                sym, o = b[1], b[2] + int(off, 0)
            if base is None: base = sym
            if sym != base or val is None or val[0] == 'hi': return None
            stores[o] = (op, val)
        elif op == 'jr':
            pass
    if not stores or base is None: return None
    return base, stores

def gen(name, base, stores, esz, order):
    size = max(stores) + 4
    n = (size + esz - 1) // esz
    if any(op != 'sw' for op, _ in stores.values()): return None
    nf = esz // 4
    cols = [[stores.get(i * esz + 4 * k, ('sw', ('c', 0)))[1] for i in range(n)] for k in range(nf)]
    syms = set()
    types, params, inits, cargs = [], [], [], [[] for _ in range(n)]
    for k, col in enumerate(cols):
        kinds = set(v[0] for v in col)
        if kinds == {'c'} and all(v[1] == 0 for v in col):
            types.append('int'); inits.append('f%d(0)' % k); continue
        if kinds == {'c'}:
            t = 'int'
        elif all(v[0] == 'a' and v[1].startswith('func_') for v in col):
            t = 'void *'
        else:
            t = 'const char *'
        types.append(t)
        params.append(k); inits.append('f%d(a%d)' % (k, k))
        for i, v in enumerate(col):
            if v[0] == 'c':
                cargs[i].append(str(v[1]) if t == 'int' else '0')
            else:
                syms.add(v[1])
                e = ('&' if v[1] in GP else '') + v[1]
                if v[2]: e = '(char *)%s + %d' % (e, v[2])
                cargs[i].append('(%s)%s' % (t, e) if t != 'int' else '(int)' + e)
    decl = []
    for s_ in sorted(syms):
        if s_.startswith('func_'): decl.append('extern "C" void %s();' % s_)
        elif s_ in GP: decl.append('extern int %s;' % s_)
        else: decl.append('extern char %s[];' % s_)
    def fdecl(t, k):
        return 'void (*f%d)();' % k if t == 'void (*)()' else '%s f%d;' % (t, k)
    def pdecl(t, k):
        return 'void (*a%d)()' % k if t == 'void (*)()' else '%s a%d' % (t, k)
    fields = ' '.join(fdecl(types[k], k) for k in range(nf))
    ps = ', '.join(pdecl(types[k], k) for k in params)
    ents = ', '.join('C(%s)' % ', '.join(a) for a in cargs)
    return '%s\nstruct C { %s C(%s) : %s {} };\nC %s[%d] = { %s };\n// @_GLOBAL_$I$%s 0x%X\n' % ('\n'.join(decl), fields, ps, ', '.join(inits), base, n, ents, base, int(name[5:], 16))

def main():
    done = set(os.path.splitext(os.path.basename(f))[0] for f in glob.glob(os.path.join(ROOT, 'src/*/*.c*')))
    names = sys.argv[1:] or sorted(os.path.basename(f)[:-2] for f in glob.glob(os.path.join(ROOT, 'asm/funcs/func_*.s')))
    for name in names:
        if name in done: continue
        r = parse(name)
        if not r: continue
        base, stores = r
        ok = False
        for esz in (0x18, 0xC, 8, 0x10, 0x14, 0x1C, 0x20, 4, 0x24, 0x28, 0x30):
            if ok: break
            for order in (lambda n: range(n),):
                src = gen(name, base, stores, esz, order)
                if not src: continue
                p = os.path.join(ROOT, 'src/manual', name + '.cpp')
                open(p, 'w').write(src)
                try:
                    res = [x for x in T.run(p, verbose=False)]
                except SystemExit:
                    res = []
                if res and not res[0][3]:
                    print('MATCH', name, base, hex(esz), flush=True); ok = True; break
                os.remove(p)
        if not ok: print('brak', name, base, flush=True)

main()
