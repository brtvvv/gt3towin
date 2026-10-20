#!/usr/bin/env python3
"""Dzieli asm/0.s na asm/funcs/<nazwa>.s (jeden plik = jedna funkcja)."""
import os, re
text = open('asm/0.s').read()
os.makedirs('asm/funcs', exist_ok=True)
head = '.include "macro.inc"\n\n.set noat\n.set noreorder\n\n.section .text, "ax"\n\n'
n = 0
for m in re.finditer(r'nonmatching (\S+), (0x[0-9A-Fa-f]+)\n\n(glabel .*?endlabel \1\n)', text, re.S):
    open(f'asm/funcs/{m.group(1)}.s', 'w').write(head + m.group(3))
    n += 1
print(n, 'funkcji')
