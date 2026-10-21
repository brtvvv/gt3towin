#!/usr/bin/env python3
"""Zgaduje sygnatury wszystkich funkcji (ktore rejestry argumentow czyta, co zwraca)
i zapisuje include/funcs.h - kontekst dla m2c i dla kompilacji.

ABI EE (EABI): argumenty calkowite a0-a3, t0-t3; zmiennoprzecinkowe f12-f19.
"""
import glob, os, re
ROOT = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
IARGS = ['a0', 'a1', 'a2', 'a3', 't0', 't1', 't2', 't3']
FARGS = ['f%d' % i for i in range(12, 20)]
STORE_OPS = ('sb', 'sh', 'sw', 'sd', 'sq', 'swc1', 'sdc1', 'swl', 'swr', 'sdl', 'sdr', 'sqc2')

SIGS = {}
VARARGS = set()

def is_varargs(lines):
    regs = set()
    for op, args in lines[:16]:
        m = re.match(r'\$(a[0-3]|t[0-3]), 0x[0-9A-F]+\(\$sp\)', args)
        if op in ('sd', 'sq') and m:
            regs.add(m.group(1))
    return 't3' in regs and len(regs) >= 4

def analyze(lines):
    read, written = set(), set()
    ret = None
    stop_after = None
    for i, (op, args) in enumerate(lines):
        regs = re.findall(r'\$([a-z]+[0-9]*|f[0-9]+)', args)
        if not regs and op not in ('jal', 'jr', 'j', 'jalr'):
            continue
        if op in STORE_OPS or op.startswith('b') or op in ('jr', 'jalr', 'mtc1', 'ctc1', 'mthi', 'mtlo', 'mtsa'):
            srcs, dsts = regs, []
            if op in ('mtc1',):
                srcs, dsts = regs[:1], regs[1:]
        elif op.startswith('c.') :
            srcs, dsts = regs, []
        else:
            dsts, srcs = regs[:1], regs[1:]
        for r in srcs:
            if r not in written:
                read.add(r)
        for r in dsts:
            written.add(r)
        if op in ('jal', 'j') and stop_after is None:
            m = re.match(r'(func_[0-9A-F]+)', args)
            if m and m.group(1) in SIGS and m.group(1) not in VARARGS:
                ni, nf = SIGS[m.group(1)]
                # slot opozniajacy moze jeszcze ustawic argument
                ds = re.findall(r'\$([a-z]+[0-9]*|f[0-9]+)', lines[i + 1][1])[:1] if i + 1 < len(lines) else []
                for r in IARGS[:ni] + FARGS[:nf]:
                    if r not in written and r not in ds:
                        read.add(r)
            stop_after = i + 1  # slot opozniajacy
        if stop_after is not None and i >= stop_after:
            break
    return read, written

def sig(path):
    t = open(path).read()
    lines = re.findall(r'\*/\s+([a-z0-9.]+)[ \t]*([^\n]*)', t)
    if is_varargs(lines):
        VARARGS.add(os.path.basename(path)[:-2])
        first = [r for r in IARGS[:3] if any(r in a for o, a in lines[:3])]
        return 's32', ['s32', '...']
    read, written = analyze(lines)
    ia = [r for r in IARGS if r in read]
    fa = [r for r in FARGS if r in read]
    ni = IARGS.index(ia[-1]) + 1 if ia else 0
    nf = FARGS.index(fa[-1]) + 1 if fa else 0
    allw = set(re.findall(r'\*/\s+[a-z0-9.]+\s+\$(v0|f0)\b', t))
    rt = 's32' if 'v0' in allw else 'f32' if 'f0' in allw else 'void'
    params = ['s32'] * ni + ['f32'] * nf
    return rt, params

files = sorted(glob.glob(os.path.join(ROOT, 'asm/funcs/func_*.s')))
for it in range(3):
    new = {}
    for f in files:
        rt, params = sig(f)
        new[os.path.basename(f)[:-2]] = (params.count('s32'), params.count('f32'))
    SIGS = new

# typ zwracany z uzycia u wolajacych: v0/f0 czytane po jal przed zapisem
RET = {}
for f in files:
    lines = re.findall(r'\*/\s+([a-z0-9.]+)[ \t]*([^\n]*)', open(f).read())
    for i, (op, a) in enumerate(lines):
        if op != 'jal':
            continue
        callee = a.strip()
        for op2, a2 in lines[i + 2:i + 12]:
            regs = re.findall(r'\$(v0|f0|[a-z]+[0-9]*)', a2)
            if not regs:
                continue
            store = op2 in STORE_OPS or op2.startswith('b') or op2 in ('jr', 'mtc1')
            srcs = regs if store else regs[1:]
            dsts = [] if store else regs[:1]
            if 'v0' in srcs:
                RET[callee] = 's32'; break
            if 'f0' in srcs:
                RET[callee] = 'f32'; break
            if 'v0' in dsts or 'f0' in dsts or op2 in ('jal', 'jalr', 'j', 'jr'):
                break

out = ['/* Wygenerowane przez tools/gen_context.py - zgadywane sygnatury funkcji. */',
       '#ifndef FUNCS_H', '#define FUNCS_H', '#ifdef __cplusplus', 'extern "C" {', '#endif']
for f in files:
    name = os.path.basename(f)[:-2]
    rt, params = sig(f)
    if rt == 'void' and name in RET:
        rt = RET[name]
    out.append(f'#ifndef DEF_{name}\n{rt} {name}({", ".join(params) or "void"});\n#endif')
out += ['#ifdef __cplusplus', '}', '#endif', '#endif']
open(os.path.join(ROOT, 'include/funcs.h'), 'w').write('\n'.join(out) + '\n')
print(len(out) - 10, 'sygnatur')
