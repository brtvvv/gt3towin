#!/usr/bin/env python3
"""ldiff.py <obj.o> <sym> <func_X> : diff (difflib) kodu symbolu z obiektu z oryginalem, z normalizacja aliasow."""
import re, subprocess, sys, difflib
o, sym, fn = sys.argv[1:4]
def norm_mine(l):
    l = re.sub(r'\s+', ' ', l.strip())
    l = re.sub(r'^beq zero,zero,', 'b ', l)
    l = re.sub(r'^beq (\w+),zero,', r'beqz \1,', l); l = re.sub(r'^bne (\w+),zero,', r'bnez \1,', l); l = re.sub(r'^beql (\w+),zero,', r'beqzl \1,', l); l = re.sub(r'^bnel (\w+),zero,', r'bnezl \1,', l)
    if l == 'sll zero,zero,0x0': l = 'nop'
    l = re.sub(r'<[^>]*>', '', l); l = re.sub(r' [0-9a-f]+ ?$', '', l)
    return l.replace('s8', 'fp')
def norm_orig(l):
    l = re.sub(r'.*\*/\s+', '', l).strip(); l = l.replace('$', '')
    l = re.sub(r'\s+', ' ', l); l = re.sub(r'\.L[0-9A-F]+', '', l); l = re.sub(r'func_[0-9A-F]+', '', l)
    l = re.sub(r', ', ',', l)
    l = re.sub(r'0x([0-9A-F]+)', lambda m: str(int(m.group(1), 16)), l)
    l = re.sub(r'-(\d+)\(', r'-\1(', l)
    return l.rstrip(', ')
a = subprocess.run(['mips-linux-gnu-objdump', '-d', '-M', 'no-aliases', '--disassemble=' + sym, o], capture_output=True, text=True).stdout
A = [norm_mine(re.sub(r'^\s*[0-9a-f]+:\s+[0-9a-f]+\s+', '', l)) for l in a.splitlines() if re.match(r'^\s+[0-9a-f]+:', l)]
A = [re.sub(r',?$', '', re.sub(r'0x([0-9a-f]+)', lambda m: str(int(m.group(1), 16)), x)) for x in A]
B = [norm_orig(l) for l in open('asm/funcs/%s.s' % fn) if l.strip().startswith('/*')]
ops = lambda L: [x.split(' ')[0] for x in L]
for l in difflib.unified_diff(ops(A), ops(B), lineterm='', n=2):
    print(l)
