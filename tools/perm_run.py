#!/usr/bin/env python3
"""Puszcza decomp-permuter na funkcjach bliskich dopasowania (szkice z auto_m2c).

perm_run.py <lista_funkcji> [sekundy_na_funkcje]
Dopasowane laduja w src/perm/<func>.cpp (zweryfikowane przez try.py).
"""
import os, re, subprocess, sys, shutil, glob
sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))
import try_ as T
ROOT = T.ROOT
PERM = os.environ.get('PERMUTER', '/home/claude/decomp-permuter/permuter.py')
WORK = os.environ.get('PERM_WORK', '/tmp/gt3perm')
secs = int(sys.argv[2]) if len(sys.argv) > 2 else 90
os.makedirs(os.path.join(ROOT, 'src/perm'), exist_ok=True)
done = set(os.path.splitext(os.path.basename(f))[0] for f in glob.glob(os.path.join(ROOT, 'src/*/*.cpp')) + glob.glob(os.path.join(ROOT, 'src/*/*.c')))
_lp = os.path.join(ROOT, 'build/perm_log.txt')
tried = set(l.split()[0] for l in open(_lp)) if os.path.exists(_lp) and not os.environ.get('PERM_RETRY') else set()
log = open(_lp, 'a')

def wrap(src, nongp):
    out = []
    for line in src.splitlines():
        m = re.match(r'^(extern [^(;]*\b(D_[0-9A-F]+)\b[^;(]*);', line)
        if m and m.group(2) in nongp:
            line = m.group(1) + ' __attribute__((section(".data")));'
        out.append(line)
    return 'extern "C" {\n' + '\n'.join(out) + '\n}\n'

for name in open(sys.argv[1]).read().split():
    if name in done or name in tried:
        continue
    d = os.path.join(WORK, name)
    shutil.rmtree(d, ignore_errors=True)
    r = subprocess.run([sys.executable, os.path.join(ROOT, 'tools/permsetup.py'), name, d], capture_output=True, text=True)
    if r.returncode:
        log.write(f'{name} setup-fail\n'); log.flush(); continue
    try:
        subprocess.run([sys.executable, PERM, d, '-j2', '--stop-on-zero', '--best-only'],
                       capture_output=True, text=True, timeout=secs)
    except subprocess.TimeoutExpired:
        pass
    subprocess.run(['pkill', '-f', 'permuter.py ' + d], capture_output=True)
    outs = sorted(glob.glob(os.path.join(d, 'output-0-*')))
    if not outs:
        log.write(f'{name} no-match\n'); log.flush(); shutil.rmtree(d, ignore_errors=True); continue
    nongp = set(open(os.path.join(d, 'nongp.txt')).read().split())
    cpp = wrap(open(os.path.join(outs[0], 'source.c')).read(), nongp)
    dst = os.path.join(ROOT, 'src/perm', name + '.cpp')
    open(dst, 'w').write(cpp)
    res = [x for x in T.run(dst, verbose=False) if x[0] == name]
    if res and not res[0][3]:
        log.write(f'{name} MATCH\n')
    else:
        os.remove(dst); log.write(f'{name} verify-fail\n')
    log.flush()
    shutil.rmtree(d, ignore_errors=True)
