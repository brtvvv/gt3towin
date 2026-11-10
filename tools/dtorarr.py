#!/usr/bin/env python3
"""dtorarr.py [lista] : generator destruktorow klas z tablica czlonkow (wirtualne dtory elementow, petla od konca).

Wzorzec asm: [zapisy vptr/wywolania przed] addiu sX,this,OFF; beqz sX; addiu s0,this,END; beq sX,s0; ...;
addiu s0,s0,-STRIDE; petla { lw v0,VP(s0); lh a0,IDX(v0); lw v1,IDX+4(v0); jalr } ; [po]; andi f,1 -> delete.
Generator bierze wywolania/zapisy przed i po petli z prostego parsera i probuje dopasowac przez wf.py.
"""
import os, re, subprocess, sys, glob
ROOT = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
TMP = '/tmp/claude-1000/dtorarr'
os.makedirs(TMP, exist_ok=True)


def ins(name):
    out = []
    for l in open(os.path.join(ROOT, 'asm/funcs', name + '.s')):
        m = re.search(r'\*/\s+([a-z0-9.]+)\s*(.*)$', l)
        if m:
            out.append((m.group(1), [x.strip() for x in m.group(2).split(',')] if m.group(2) else []))
        elif re.match(r'\s*\.L\w+:', l):
            out.append(('label', [l.strip()[:-1]]))
    return out


def num(s):
    s = s.strip()
    m = re.match(r'\(?(-?0x[0-9A-Fa-f]+|-?\d+)', s)
    return int(m.group(1), 0)


def stmt_list(seq, tname='t'):
    """Proste tlumaczenie sekwencji: lui/addiu D_ -> adres; sw adres,OFF(a0/sThis) -> zapis vptr; jal f z a0=this+K, a1=c."""
    out = []
    regs = {}
    for o, a in seq:
        if o == 'lui' and '%hi(' in a[1]:
            regs[a[0]] = ('sym', re.search(r'%hi\((\w+)\)', a[1]).group(1))
        elif o == 'addiu' and len(a) == 3 and '%lo(' in a[2]:
            regs[a[0]] = ('sym', re.search(r'%lo\((\w+)\)', a[2]).group(1))
        elif o == 'addiu' and len(a) == 3 and a[1] == 'THIS':
            regs[a[0]] = ('this', num(a[2]))
        elif o == 'addiu' and len(a) == 3 and a[1] == '$zero':
            regs[a[0]] = ('c', num(a[2]))
        elif o == 'daddu' and a[2] == '$zero':
            regs[a[0]] = ('this', 0) if a[1] == 'THIS' else (('c', 0) if a[1] == '$zero' else regs.get(a[1]))
        elif o == 'sw' and regs.get(a[0], ('',))[0] == 'sym':
            m = re.match(r'(.+)\((\S+)\)', a[1])
            base = regs.get(m.group(2)) if m.group(2) != 'THIS' else ('this', 0)
            if not base or base[0] != 'this':
                return None
            out.append(('st', base[1] + num(m.group(1)), regs[a[0]][1]))
        elif o == 'jal':
            out.append(('call', a[0], dict(regs)))
        elif o in ('lw',) and a[1].endswith('(THIS)'):
            regs[a[0]] = ('fld', num(a[1].split('(')[0]))
    return out


def analyze(name):
    I = ins(name)
    # znajdz s-rejestr 'this' (daddu sN,a0)
    this = None
    for o, a in I[:12]:
        if o == 'daddu' and a[1] == '$a0' and a[0].startswith('$s'):
            this = a[0]
    if not this:
        return None
    J = [(o, [x.replace(this, 'THIS') if re.fullmatch(re.escape(this) + r'|.*\(' + re.escape(this) + r'\)', x) or x == this else x for x in a]) for o, a in I]
    J = [(o, [re.sub(r'\(' + re.escape(this) + r'\)', '(THIS)', x) for x in a]) for o, a in J]
    # petla: lw v0,VP(s0) ; lh a0,IDX(v0) ; ... jalr
    lp = None
    for i in range(len(J) - 4):
        if J[i][0] == 'lw' and J[i][1][0] == '$v0' and J[i][1][1].endswith('($s0)') and J[i + 1][0] == 'lh' and J[i + 3][0] == 'jalr':
            lp = i
            break
    if lp is None:
        return None
    vp = num(J[lp][1][1].split('(')[0]); idx = num(J[lp + 1][1][1].split('(')[0])
    # beqz sX ... addiu s0,THIS,END ... addiu s0,s0,-STRIDE
    start = end = stride = None; bq = None
    for i, (o, a) in enumerate(J[:lp]):
        if o == 'addiu' and len(a) == 3 and a[1] == 'THIS' and a[0] != '$s0' and start is None and any(J[k][0] == 'beqz' and J[k][1][0] == a[0] for k in range(i, min(i + 4, lp))):
            start = num(a[2]); bq = i
        if o == 'addiu' and a[0] == '$s0' and a[1] == 'THIS':
            end = num(a[2])
        if o == 'addiu' and a[0] == '$s0' and a[1] == '$s0':
            stride = -num(a[2])
    if None in (start, end, stride) or (end - start) % stride:
        return None
    n = (end - start) // stride
    pre = stmt_list([x for x in J[:bq] if x[0] != 'sd'])
    # po petli: od pierwszego 'b'/label po petli do konca, bez epilogu
    post = J[lp + 6:]
    after = stmt_list([x for x in post if x[0] not in ('ld', 'jr')])
    if pre is None or after is None:
        return None
    return dict(vp=vp, idx=idx, start=start, n=n, stride=stride, pre=pre, post=after)


def render(name, A, delarg):
    ext, decl, syms = [], set(), set()

    def call(c):
        f, regs = c[1], c[2]
        args = []
        for r in ('$a0', '$a1', '$a2'):
            v = regs.get(r)
            if v is None:
                break
            if v[0] == 'this':
                args.append('t' if v[1] == 0 else 't + 0x%X' % v[1])
            elif v[0] == 'c':
                args.append(str(v[1]))
            elif v[0] == 'sym':
                syms.add(v[1]); args.append(v[1])
            elif v[0] == 'fld':
                args.append('*(int *)(t + 0x%X)' % v[1])
            else:
                return None
        decl.add('extern "C" void %s(%s);' % (f, ', '.join('char *' if (x.startswith('t') or x.startswith('D_')) and not x.startswith('*') else 'int' for x in args)))
        return '%s(%s);' % (f, ', '.join(args))

    def block(lst):
        s = []
        for x in lst:
            if x[0] == 'st':
                syms.add(x[2]); s.append('*(char **)(t + 0x%X) = %s;' % (x[1], x[2]))
            else:
                c = call(x)
                if c is None:
                    return None
                s.append(c)
        return ' '.join(s)

    pre = block(A['pre'])
    post = A['post']
    # ostatnie wywolanie po 'andi' to delete warunkowe
    dele = post[-1] if post and post[-1][0] == 'call' else None
    body_post = block(post[:-1] if dele else post)
    if pre is None or body_post is None:
        return None
    dl = ''
    if dele:
        c = call(dele)
        if c is None:
            return None
        dl = 'if (f & 1) ' + c
    nv = (A['idx'] - 8) // 8
    virt = ' '.join('virtual void fx%d();' % i for i in range(nv)) + ' virtual void f0(int);'
    src = ['struct EB { char p[0x%X]; %s };' % (A['vp'], virt),
           'struct E : EB { char q[0x%X]; };' % (A['stride'] - A['vp'] - 4)]
    src += ['extern char %s[];' % s for s in sorted(syms)]
    src += sorted(decl)
    src.append('extern "C" void %s(char *t, int f) { %s E *b = (E *)(t + 0x%X); if (b) { E *e = b + %d; while (b != e) { e--; e->f0(0); } } %s %s }' % (
        name, pre, A['start'], A['n'], body_post, dl))
    return '\n'.join(src) + '\n'


def main():
    names = []
    for a in sys.argv[1:]:
        names += [l.strip() for l in open(a)] if os.path.isfile(a) else [a]
    if not names:
        done = set(os.path.splitext(os.path.basename(f))[0] for f in glob.glob(os.path.join(ROOT, 'src/*/*.c*')))
        for f in glob.glob(os.path.join(ROOT, 'asm/funcs/func_*.s')):
            n = os.path.basename(f)[:-2]
            if n not in done and 'jalr' in open(f).read():
                names.append(n)
    ok = 0
    for n in sorted(names):
        try:
            A = analyze(n)
        except Exception:
            A = None
        if not A:
            continue
        src = render(n, A, None)
        if not src:
            print('render-fail', n); continue
        p = os.path.join(TMP, n + '.cpp')
        open(p, 'w').write(src)
        r = subprocess.run([sys.executable, os.path.join(ROOT, 'tools/wf.py'), p], capture_output=True, text=True, cwd=ROOT)
        hit = 'MATCH' in r.stdout
        print(('MATCH ' if hit else 'miss  ') + n, (r.stdout.strip().splitlines() or [''])[-1][:80])
        ok += hit
    print('dopasowano', ok)


if __name__ == '__main__':
    main()
