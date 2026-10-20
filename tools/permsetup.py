#!/usr/bin/env python3
"""Przygotowuje katalog dla decomp-permuter dla jednej funkcji.

permsetup.py <func> <katalog> [plik_zrodlowy]
Zrodlo: domyslnie /tmp/<func>.cpp (szkic z auto_m2c).
"""
import os, re, subprocess, sys
ROOT = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
CC = os.path.join(os.environ.get('GT3_COMPILERS', '/home/claude/compilers'), 'ee-gcc2.9-991111-01/bin/ee-gcc')
name, d = sys.argv[1], sys.argv[2]
src = sys.argv[3] if len(sys.argv) > 3 else f'/tmp/{name}.cpp'
os.makedirs(d, exist_ok=True)
c = open(src).read()
if 'M2C_INDEX' in c:
    sys.exit('M2C_INDEX nieobslugiwane')
# dane spoza small-data -> lista dla compile.sh (atrybut sekcji dodawany przy kompilacji)
nongp = re.findall(r'\b(D_[0-9A-F]+)\b[^;\n]*__attribute__', c)
open(os.path.join(d, 'nongp.txt'), 'w').write('\n'.join(nongp) + '\n')
c = c.replace('extern "C" ', '')
c = re.sub(r'#define DEF_\w+\n', '', c)
c = re.sub(r'#include "funcs.h"\n', '', c)
c = re.sub(r'\s*__attribute__\(\([^)]*\)\)\)', '', c)
callees = set(re.findall(r'\b(func_[0-9A-F]+)\b', c)) - {name}
protos = [l.strip() for l in open(os.path.join(ROOT, 'include/funcs.h'))
          if re.match(r'\w+ (func_[0-9A-F]+)\(', l) and re.match(r'\w+ (func_[0-9A-F]+)\(', l).group(1) in callees]
# usun prototypy, ktore szkic juz deklaruje
declared = set(re.findall(r'^\S[^\n]*\b(func_[0-9A-F]+)\([^\n]*\);', c, re.M))
protos = [p for p in protos if re.match(r'\w+ (func_[0-9A-F]+)\(', p).group(1) not in declared]
tmp = os.path.join(d, 'pre.c')
open(tmp, 'w').write(c.replace('#include "m2c.h"\n', '#include "m2c.h"\n' + '\n'.join(protos) + '\n'))
pre = subprocess.run(['cpp', '-P', '-I', os.path.join(ROOT, 'include'), tmp], capture_output=True, text=True, check=True).stdout
open(os.path.join(d, 'base.c'), 'w').write(pre)
os.remove(tmp)
inc = os.path.join(ROOT, 'include')
open(os.path.join(d, 'compile.sh'), 'w').write(f'''#!/bin/bash
# kompiluje base.c jako C++ z linkowaniem C (jak oryginal)
DIR=$(dirname "$0")
IN="$1"; OUT="$3"
T=$(mktemp --suffix=.cpp)
{{ echo 'extern "C" {{'; sed -E "s/^(extern [^(;]*\\b($(paste -sd'|' $DIR/nongp.txt))\\b[^;(]*);/\\1 __attribute__((section(\\".data\\")));/" "$IN"; echo '}}'; }} > $T
{CC} -c -O2 -G8 -fpermissive -w $T -o "$OUT"; R=$?
rm -f $T; exit $R
''')
os.chmod(os.path.join(d, 'compile.sh'), 0o755)
asm = open(os.path.join(ROOT, 'asm/funcs', name + '.s')).read()
open(os.path.join(d, 'target.s'), 'w').write(asm)
subprocess.run(['mips-linux-gnu-as', '-EL', '-march=r5900', '-mabi=eabi', '-I', inc,
                os.path.join(d, 'target.s'), '-o', os.path.join(d, 'target.o')], check=True)
open(os.path.join(d, 'settings.toml'), 'w').write(f'func_name = "{name}"\ncompiler_type = "gcc"\n')
print('ok', d)
