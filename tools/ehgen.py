#!/usr/bin/env python3
"""ehgen.py <lista|func...> : generator funkcji-fabryk z obsluga wyjatkow (-fexceptions).

Wzorzec (gcc 2.9 z EH): [if (!check(args)) return 0;] p = new X(args); [return p | G = p;]
Rozpoznaje: rozmiar (stala do alokatora), argumenty konstruktora (a1..a3 z parametrow
albo stalych), delete w handlerze (z rozmiarem czy bez), zapis do zmiennej $gp.
Probuje kilku wariantow operator new/delete; dopasowania zapisuje do src/manual/.
"""
import os, re, subprocess, sys, itertools, glob
ROOT = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
TMP = '/tmp/claude-1000/ehgen'
os.makedirs(TMP, exist_ok=True)
GLOBAL_NEW = {'func_0027D370'}  # ::operator new (libgcc)


def ins(name):
    out = []
    for l in open(os.path.join(ROOT, 'asm/funcs', name + '.s')):
        m = re.search(r'\*/\s+([a-z0-9.]+)\s*(.*)$', l)
        if m:
            out.append((m.group(1), [x.strip() for x in m.group(2).split(',')] if m.group(2) else []))
        elif re.match(r'\s*\.L\w+:', l):
            out.append(('label', [l.strip()[:-1]]))
    return out


def imm(s):
    s = s.strip()
    m = re.match(r'\((0x[0-9A-Fa-f]+) >> 16\)', s)
    if m:
        return int(m.group(1), 16)
    return int(s, 0)


def analyze(name):
    I = ins(name)
    jals = [i for i, (o, a) in enumerate(I) if o == 'jal']
    if 'func_002794A0' not in [I[i][1][0] for i in jals]:
        return None
    hdl = [i for i in jals if I[i][1][0] == 'func_002794A0'][0]
    pre = [i for i in jals if i < hdl]
    # s-rejestr -> parametr
    sreg = {}
    nparam = 0
    regs = {}  # stan rejestrow argumentow przed kazdym jal
    calls = []
    for i, (o, a) in enumerate(I[:hdl]):
        if o == 'daddu' and len(a) == 3 and a[2] == '$zero':
            d, s = a[0], a[1]
            if s.startswith('$a') and d.startswith('$s'):
                sreg[d] = ('p', int(s[2:]))
                nparam = max(nparam, int(s[2:]) + 1)
            elif d.startswith('$a'):
                if s == '$zero':
                    regs[d] = ('c', 0)
                elif s in sreg:
                    regs[d] = sreg[s]
                elif s == '$v0' or s.startswith('$s'):
                    regs[d] = ('obj',)
                elif s.startswith('$a'):
                    regs[d] = ('p', int(s[2:])); nparam = max(nparam, int(s[2:]) + 1)
            elif d.startswith('$s') and s == '$v0':
                sreg[d] = ('obj',)
        elif o == 'addiu' and a[0].startswith('$a') and a[1] == '$zero':
            regs[a[0]] = ('c', imm(a[2]))
        elif o == 'ori' and a[0].startswith('$a'):
            if a[1] == '$zero':
                regs[a[0]] = ('c', imm(a[2]))
            else:
                regs[a[0]] = ('c', regs.get(a[0], ('c', 0))[1] | (imm(re.sub(r'\((0x[0-9A-Fa-f]+) & 0xFFFF\)', r'\1', a[2])) & 0xFFFF))
        elif o == 'lui' and a[0].startswith('$a'):
            regs[a[0]] = ('c', imm(a[1]) & 0xFFFF0000)
        elif o == 'addiu' and a[0].startswith('$a') and a[1].startswith('$a'):
            return None  # this+offset itp. - nie ten wzorzec
        if i > 0 and I[i - 1][0] == 'jal':
            calls.append((I[i - 1][1][0], dict(regs)))
            regs = {}
        if o in ('lw', 'ld', 'lh', 'lb', 'lhu', 'lbu') and not a[1].endswith('($sp)'):
            return None
    if len(calls) < 2 or len(calls) > 3:
        return None
    if len(calls) == 3:
        chk, alloc, ctor = calls
    else:
        chk = None; alloc, ctor = calls
    if '$a0' not in alloc[1] or alloc[1]['$a0'][0] != 'c':
        return None
    size = alloc[1]['$a0'][1]
    cargs = []
    for k in ('$a1', '$a2', '$a3'):
        if k in ctor[1]:
            cargs.append(ctor[1][k])
        else:
            break
    # parametry, ktore przechodza nietkniete (a1..a3 nie ustawiane przed ctor) - niewykrywalne; zakladamy brak
    body = ' '.join(o + ' ' + ','.join(a) for o, a in I)
    store = re.search(r'sw \$v0,%gp_rel\((D_[0-9A-F]+)\)\(\$gp\)', body)
    hdel = [I[i][1][0] for i in jals if i > hdl and I[i][1][0] not in ('func_002794A0', 'func_0027AEE0')]
    sized = False
    for i in range(hdl, len(I)):
        o, a = I[i]
        if a and a[0] == '$a1' and o in ('addiu', 'ori', 'lui'):
            sized = True
    chkargs = None
    if chk:
        chkargs = sorted(int(k[2:]) for k in chk[1] if chk[1][k][0] == 'p')
    return dict(size=size, cargs=cargs, store=store.group(1) if store else None, sized=sized,
                alloc=alloc[0], chk=chk is not None, nparam=nparam, chkargs=chkargs)


def gen(name, A, variant, extra_params, chk_params):
    np_ = max(A['nparam'], extra_params)
    params = ', '.join('int p%d' % i for i in range(np_))
    targs = ', '.join('int' for _ in A['cargs'])
    def val(x):
        return 'p%d' % x[1] if x[0] == 'p' else str(x[1])
    cargs = ', '.join(val(x) for x in A['cargs'])
    dele = 'void operator delete(void *p, size_t n);' if A['sized'] else 'void operator delete(void *p);'
    src = ['// @flags -fexceptions', 'typedef unsigned int size_t;']
    if variant == 'global' or A['alloc'] in GLOBAL_NEW:
        src.append('struct X { char d[0x%X]; X(%s); };' % (A['size'], targs))
    elif variant == 'inline':
        src += ['extern "C" void *xnew(size_t);', 'extern "C" void xdel(void *%s);' % (', size_t' if A['sized'] else ''),
                'struct X { char d[0x%X]; X(%s); void *operator new(size_t n) { return xnew(n); } %s };' % (
                    A['size'], targs,
                    'void operator delete(void *p, size_t n) { xdel(p, n); }' if A['sized'] else 'void operator delete(void *p) { xdel(p); }')]
    else:
        src.append('struct X { char d[0x%X]; X(%s); void *operator new(size_t n); %s };' % (A['size'], targs, dele))
    pre = ''
    if A['chk']:
        cp = ', '.join('int' for _ in range(chk_params))
        src.append('extern "C" int xchk(%s);' % cp)
        pre = 'if (!xchk(%s)) return%s; ' % (', '.join('p%d' % i for i in range(chk_params)), '' if A['store'] else ' 0')
    newx = 'new X(%s)' % cargs if cargs else 'new X'
    if A['store']:
        src.append('extern X *%s;' % A['store'])
        src.append('extern "C" void %s(%s) { %s%s = %s; }' % (name, params, pre, A['store'], newx))
    else:
        src.append('extern "C" X *%s(%s) { %sreturn %s; }' % (name, params, pre, newx))
    return '\n'.join(src) + '\n'


def trywf(path):
    r = subprocess.run([sys.executable, os.path.join(ROOT, 'tools/wf.py'), path], capture_output=True, text=True, cwd=ROOT)
    return 'MATCH' in r.stdout


def main():
    names = []
    for a in sys.argv[1:]:
        names += [l.strip() for l in open(a)] if os.path.isfile(a) else [a]
    done = set(os.path.splitext(os.path.basename(f))[0] for f in glob.glob(os.path.join(ROOT, 'src/*/*.c*')))
    ok = 0
    for n in names:
        if n in done:
            continue
        try:
            A = analyze(n)
        except Exception:
            A = None
        if not A or any(x[0] == 'obj' for x in A['cargs']):
            continue
        hit = False
        for variant in ('class', 'inline', 'global'):
            for ep in range(A['nparam'], max(A['nparam'], 3) + 1):
                for cpn in ([None] if not A['chk'] else range(0, max(ep, 1) + 1)):
                    p = os.path.join(TMP, n + '.cpp')
                    open(p, 'w').write(gen(n, A, variant, ep, cpn))
                    if trywf(p):
                        hit = True; break
                if hit: break
            if hit: break
        print(('MATCH ' if hit else 'miss  ') + n, A)
        ok += hit
    print('dopasowano', ok)


if __name__ == '__main__':
    main()
