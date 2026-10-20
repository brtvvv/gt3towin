#!/usr/bin/env python3
"""Wypisuje asembler jednej funkcji z asm/0.s: funcasm.py func_00123456"""
import re, sys
text = open('asm/0.s').read()
m = re.search(r'(nonmatching %s, .*?endlabel %s\n)' % (sys.argv[1], sys.argv[1]), text, re.S)
print(m.group(1) if m else 'nie znaleziono')
