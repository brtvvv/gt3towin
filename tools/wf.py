#!/usr/bin/env python3
"""wf.py <plik.cpp|plik.c> [...] : jak w.sh, ale kod brany z pliku (nazwa funkcji = nazwa pliku bez rozszerzenia,
np. func_00123456.cpp). Pozwala uzywac #define i wielu linii."""
import os, subprocess, sys
ROOT = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
for p in sys.argv[1:]:
    name, ext = os.path.splitext(os.path.basename(p))
    r = subprocess.run(['sh', os.path.join(ROOT, 'tools/w.sh'), name, ext[1:], open(p).read()], capture_output=True, text=True, cwd=ROOT)
    print((r.stdout + r.stderr).strip())
