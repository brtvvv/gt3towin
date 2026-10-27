#!/usr/bin/env python3
"""dd.py <plik> : kompiluje (jak try.py) i pokazuje ldiff dla funkcji o nazwie pliku."""
import os, re, sys, subprocess
sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))
import importlib.util
sp = importlib.util.spec_from_file_location('t', os.path.join(os.path.dirname(os.path.abspath(__file__)), 'try.py'))
t = importlib.util.module_from_spec(sp); sp.loader.exec_module(t)
for src in sys.argv[1:]:
    fl = []
    for m in re.findall(r'//\s*@flags\s+(.*)', open(src).read()):
        fl += m.split()
    obj = t.compile_obj(t.CC, src, t.FLAGS + fl)
    fn = os.path.splitext(os.path.basename(src))[0]
    print('==', fn)
    subprocess.run([sys.executable, os.path.join(t.ROOT, 'tools/ldiff.py'), obj, fn, fn])
