#!/usr/bin/env python3
"""od.py <plik.cpp> : kompiluje (flagi jak wf.py, z // @flags) i wypisuje objdump funkcji o nazwie pliku."""
import os, re, sys, subprocess
sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))
import try_ as t
src = sys.argv[1]
fl = []
for m in re.findall(r'//\s*@flags\s+(.*)', open(src).read()):
    fl += m.split()
obj = t.compile_obj(t.CC, src, t.FLAGS + fl)
fn = os.path.splitext(os.path.basename(src))[0]
out = subprocess.run(['mips-linux-gnu-objdump', '-d', '-r', '--no-show-raw-insn', obj], capture_output=True, text=True).stdout
blk = out.split('<%s>:' % fn, 1)[-1].split('\n\n')[0]
print(blk)
