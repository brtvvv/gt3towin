#!/usr/bin/env python3
"""sd.py <plik.cpp> [symbol] : kompiluje i wypisuje obok siebie instrukcje oryginal | moja
(tylko rozne pozycje +-1 linia kontekstu). Nazwa funkcji oryginalu z nazwy pliku."""
import os, re, sys, subprocess
sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))
import try_ as t
src = sys.argv[1]
fn = os.path.splitext(os.path.basename(src))[0]
sym = sys.argv[2] if len(sys.argv) > 2 else fn
fl = []
for m in re.findall(r'//\s*@flags\s+(.*)', open(src).read()):
    fl += m.split()
for m in re.findall(r'//\s*@(_GLOBAL_\S+)', open(src).read()):
    sym = m
obj = t.compile_obj(t.CC, src, t.FLAGS + fl)
out = subprocess.run(['mips-linux-gnu-objdump', '-d', '--no-show-raw-insn', obj], capture_output=True, text=True).stdout
blk = out.split('<%s>:' % sym, 1)[-1].split('\n\n')[0]
mine = [re.sub(r'\s+', ' ', l.split(':', 1)[1].strip()) for l in blk.split('\n') if re.match(r'\s*[0-9a-f]+:\t', l)]
orig = []
for l in open(os.path.join(t.ROOT, 'asm/funcs', fn + '.s')):
    m = re.search(r'\*/\s+(.*)$', l)
    if m and l.strip().startswith('/*'):
        orig.append(re.sub(r'\s+', ' ', m.group(1).strip()))
def norm(s):
    s = s.replace('$', '')
    s = re.sub(r'\((0x[0-9A-Fa-f]+) >> 16\)', lambda m: str(int(m.group(1), 16) >> 16), s)
    s = re.sub(r'\((0x[0-9A-Fa-f]+) & 0xFFFF\)', lambda m: str(int(m.group(1), 16) & 0xFFFF), s)
    s = re.sub(r'^(jalr?) .*<.*>$', r'\1 R', s)
    s = re.sub(r'^(lui \w+,)0x0$', r'\1R', s)
    s = re.sub(r'^(addiu \w+,\w+,)0$', r'\1R', s)
    s = re.sub(r'^(lw|sw|lwc1|swc1) (\w+),0\(gp\)$', r'\1 \2,R', s)
    s = re.sub(r'%\w+\([^)]*\)(\(\w+\))?', 'R', s); s = re.sub(r'\b(func|D)_[0-9A-F]+\b', 'R', s)
    s = re.sub(r'\.L[0-9A-F]+', 'L', s); s = re.sub(r'\b[0-9a-f]+ <[^>]*>', 'L', s)
    s = s.replace('move ', 'daddu ').replace('daddu ', 'mv ')
    s = re.sub(r', zero$', '', s) if s.startswith('mv') else s
    s = re.sub(r'\bli (\w+),', r'addiu \1,zero,', s)
    s = re.sub(r'-?0x[0-9A-Fa-f]+|-?\d+', lambda m: str(int(m.group(0), 0)), s)
    return s.replace(' ', '')
n = max(len(orig), len(mine))
bad = [i for i in range(n) if i >= len(orig) or i >= len(mine) or norm(orig[i]) != norm(mine[i])]
show = sorted(set(j for i in bad for j in (i - 1, i, i + 1) if 0 <= j < n))
print('%d/%d rozne' % (len(bad), n))
for i in show:
    o = orig[i] if i < len(orig) else ''
    m = mine[i] if i < len(mine) else ''
    print('%s %3x %-38s | %s' % ('*' if i in bad else ' ', i * 4, o[:38], m))
