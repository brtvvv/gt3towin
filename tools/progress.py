#!/usr/bin/env python3
"""Statystyki postepu dekompilacji -> SVG (docs/img/) + sekcje README.

Uzycie: python3 tools/progress.py   (wolane przez tools/status.sh)
Generuje tylko liczby i wykresy z naszych wlasnych danych (bez kodu gry).
"""
import glob, os, re, json, datetime

ROOT = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
os.chdir(ROOT)
IMG = 'docs/img'
os.makedirs(IMG, exist_ok=True)

# --- dane -------------------------------------------------------------
funcs = []  # (addr, name, ninsn)
for f in glob.glob('asm/funcs/*.s'):
    name = os.path.basename(f)[:-2]
    n = sum(1 for l in open(f, errors='replace') if l.strip().startswith('/*'))
    m = re.match(r'func_([0-9A-Fa-f]{8})$', name)
    if m:
        addr = int(m.group(1), 16)
    else:
        addr = None
        for l in open(f, errors='replace'):
            mm = re.search(r'/\*\s*[0-9A-F]+\s+([0-9A-F]{8})', l)
            if mm:
                addr = int(mm.group(1), 16); break
    if addr is None:
        continue
    funcs.append((addr, name, n))
funcs.sort()

done = set(os.path.splitext(os.path.basename(f))[0] for f in glob.glob('src/*/*.c*'))
for l in open('src/matched/manifest.txt'):
    if l.strip() and not l.startswith('#'):
        p = l.split()
        if len(p) >= 2:
            done.add(p[1])

M = lambda name: name in done
T_F = len(funcs); D_F = sum(1 for a, n, c in funcs if M(n))
T_I = sum(c for a, n, c in funcs); D_I = sum(c for a, n, c in funcs if M(n))

# kubelki rozmiaru
buckets = [(1, 10), (11, 40), (41, 100), (101, 300), (301, 1000), (1001, 10**9)]
bstat = []
for lo, hi in buckets:
    s = [(n, c) for a, n, c in funcs if lo <= c <= hi]
    bstat.append((lo, hi, len(s), sum(1 for n, c in s if M(n)),
                  sum(c for n, c in s), sum(c for n, c in s if M(n))))

# klasy C++ (z RTTI): metody wirtualne z vtable
classes = []
for l in open('config/classes.txt', errors='replace'):
    if l.startswith('#') or '|' not in l:
        continue
    p = [x.strip() for x in l.split('|')]
    if len(p) < 4 or ':[' not in p[3]:
        continue
    meth = set(int(x, 16) for x in re.findall(r'0x[0-9a-fA-F]+', p[3].split(':[', 1)[1]))
    classes.append((p[0], meth))
byaddr = {a: (n, c) for a, n, c in funcs}
cstat = []
for cname, meth in classes:
    ms = [byaddr[a] for a in meth if a in byaddr]
    if len(ms) < 8:
        continue
    t = sum(c for n, c in ms); d = sum(c for n, c in ms if M(n))
    cstat.append((cname, len(ms), sum(1 for n, c in ms if M(n)), t, d))
cstat.sort(key=lambda x: -x[3])

# historia (lokalny plik w repo, tylko liczby)
hist_f = 'docs/progress_history.json'
hist = json.load(open(hist_f)) if os.path.exists(hist_f) else []
today = datetime.date.today().isoformat()
hist = [h for h in hist if h['date'] != today] + [{'date': today, 'funcs': D_F, 'insns': D_I}]
hist.sort(key=lambda h: h['date'])
json.dump(hist, open(hist_f, 'w'), indent=0)

pct = lambda a, b: 100.0 * a / b if b else 0.0

# --- SVG ----------------------------------------------------------------
FONT = "font-family='-apple-system,Segoe UI,Helvetica,Arial,sans-serif'"
C_DONE, C_BG, C_TXT = '#2ea043', '#30363d', '#c9d1d9'

def bars_svg():
    rows = [('Instructions / Instrukcje', D_I, T_I, '#2ea043'),
            ('Functions / Funkcje', D_F, T_F, '#1f6feb')]
    W, H = 720, 30 + 52 * len(rows)
    o = [f"<svg xmlns='http://www.w3.org/2000/svg' width='{W}' height='{H}' viewBox='0 0 {W} {H}'>",
         f"<rect width='{W}' height='{H}' rx='10' fill='#0d1117'/>",
         f"<text x='20' y='24' {FONT} font-size='14' font-weight='600' fill='{C_TXT}'>Gran Turismo 3 A-Spec (PAL v2.00) - matching decompilation</text>"]
    for i, (lab, d, t, col) in enumerate(rows):
        y = 40 + 52 * i; p = pct(d, t); bw = W - 40
        o.append(f"<text x='20' y='{y+12}' {FONT} font-size='12' fill='#8b949e'>{lab}</text>")
        o.append(f"<text x='{W-20}' y='{y+12}' {FONT} font-size='12' fill='{C_TXT}' text-anchor='end'>{d:,} / {t:,}  -  <tspan font-weight='700'>{p:.2f}%</tspan></text>")
        o.append(f"<rect x='20' y='{y+20}' width='{bw}' height='16' rx='8' fill='{C_BG}'/>")
        o.append(f"<rect x='20' y='{y+20}' width='{bw*p/100:.1f}' height='16' rx='8' fill='{col}'/>")
    o.append('</svg>')
    open(f'{IMG}/progress.svg', 'w').write('\n'.join(o))

def map_svg():
    # mapa .text: kazdy kafelek = funkcja, powierzchnia ~ liczba instrukcji
    COLS, CELL = 160, 4  # 160 kolumn x 4 px; 1 komorka = UNIT instrukcji
    UNIT = max(1, T_I // (COLS * 100))
    cells = []
    for a, n, c in funcs:
        k = max(1, round(c / UNIT))
        cells += [M(n)] * k
    rows = (len(cells) + COLS - 1) // COLS
    W, H = COLS * CELL + 40, rows * CELL + 70
    o = [f"<svg xmlns='http://www.w3.org/2000/svg' width='{W}' height='{H}' viewBox='0 0 {W} {H}' shape-rendering='crispEdges'>",
         f"<rect width='{W}' height='{H}' rx='10' fill='#0d1117'/>",
         f"<text x='20' y='24' {FONT} font-size='14' font-weight='600' fill='{C_TXT}'>Code map 0x100000-0x28FA00 (1 cell = {UNIT} instructions)</text>"]
    # rysujemy ciagi tego samego koloru w wierszu jako jeden prostokat
    for r in range(rows):
        row = cells[r * COLS:(r + 1) * COLS]
        x = 0
        while x < len(row):
            v = row[x]; e = x
            while e < len(row) and row[e] == v:
                e += 1
            o.append(f"<rect x='{20+x*CELL}' y='{36+r*CELL}' width='{(e-x)*CELL}' height='{CELL}' fill='{C_DONE if v else C_BG}'/>")
            x = e
    ly = 36 + rows * CELL + 20
    o.append(f"<rect x='20' y='{ly-10}' width='12' height='12' fill='{C_DONE}'/><text x='38' y='{ly}' {FONT} font-size='12' fill='{C_TXT}'>matched / dopasowane</text>")
    o.append(f"<rect x='200' y='{ly-10}' width='12' height='12' fill='{C_BG}'/><text x='218' y='{ly}' {FONT} font-size='12' fill='{C_TXT}'>to do / do zrobienia</text>")
    o.append('</svg>')
    open(f'{IMG}/map.svg', 'w').write('\n'.join(o))

def hist_svg():
    if len(hist) < 2:
        return
    W, H, P = 720, 220, 40
    o = [f"<svg xmlns='http://www.w3.org/2000/svg' width='{W}' height='{H}' viewBox='0 0 {W} {H}'>",
         f"<rect width='{W}' height='{H}' rx='10' fill='#0d1117'/>",
         f"<text x='20' y='24' {FONT} font-size='14' font-weight='600' fill='{C_TXT}'>Progress over time / Postep w czasie</text>"]
    d0 = datetime.date.fromisoformat(hist[0]['date']); d1 = datetime.date.fromisoformat(hist[-1]['date'])
    span = max(1, (d1 - d0).days)
    for key, tot, col in (('insns', T_I, '#2ea043'), ('funcs', T_F, '#1f6feb')):
        pts = []
        for h in hist:
            if h.get(key) is None:
                continue
            x = P + (W - 2 * P) * (datetime.date.fromisoformat(h['date']) - d0).days / span
            y = H - 30 - (H - 70) * h[key] / tot
            pts.append(f'{x:.1f},{y:.1f}')
        o.append(f"<polyline points='{' '.join(pts)}' fill='none' stroke='{col}' stroke-width='2.5'/>")
    for v in (0, 50, 100):
        y = H - 30 - (H - 70) * v / 100
        o.append(f"<line x1='{P}' x2='{W-P}' y1='{y}' y2='{y}' stroke='#21262d'/><text x='{P-6}' y='{y+4}' {FONT} font-size='10' fill='#8b949e' text-anchor='end'>{v}%</text>")
    o.append(f"<text x='{P}' y='{H-10}' {FONT} font-size='10' fill='#8b949e'>{hist[0]['date']}</text>")
    o.append(f"<text x='{W-P}' y='24' {FONT} font-size='11' fill='#1f6feb' text-anchor='end'>functions</text><text x='{W-P-70}' y='24' {FONT} font-size='11' fill='#2ea043' text-anchor='end'>instructions</text>")
    o.append(f"<text x='{W-P}' y='{H-10}' {FONT} font-size='10' fill='#8b949e' text-anchor='end'>{hist[-1]['date']}</text>")
    o.append('</svg>')
    open(f'{IMG}/history.svg', 'w').write('\n'.join(o))

bars_svg(); map_svg(); hist_svg()

# --- README -------------------------------------------------------------
def badge(label, val, color):
    q = lambda s: s.replace('-', '--').replace(' ', '%20').replace('%', '%25').replace('%2520', '%20')
    return f"![{label}](https://img.shields.io/badge/{q(label)}-{q(val)}-{color})"

def mini(p, w=20):
    f = round(p / 100 * w)
    return '█' * f + '░' * (w - f)

def table(lang):
    en = lang == 'en'
    h = ('| Function size | Functions | Done | Instructions | Progress |' if en else
         '| Rozmiar funkcji | Funkcje | Gotowe | Instrukcje | Postęp |')
    o = [h, '|---|---:|---:|---:|---|']
    for lo, hi, n, d, ti, di in bstat:
        r = f'{lo}–{hi}' if hi < 10**9 else f'>{lo-1}'
        o.append(f'| {r} {"insn" if en else "instr."} | {n:,} | {d:,} | {di:,} / {ti:,} | `{mini(pct(di, ti))}` {pct(di, ti):.1f}% |')
    return '\n'.join(o)

def ctable(lang):
    en = lang == 'en'
    o = ['| Class (RTTI) | Virtual methods | Done | Instructions done |' if en else
         '| Klasa (RTTI) | Metody wirtualne | Gotowe | Instrukcje gotowe |', '|---|---:|---:|---|']
    for cn, n, d, t, di in cstat[:12]:
        o.append(f'| `{cn}` | {n} | {d} | `{mini(pct(di, t), 12)}` {pct(di, t):.0f}% |')
    return '\n'.join(o)

stamp = datetime.datetime.now().strftime('%Y-%m-%d')
badges = ' '.join([badge('instructions', f'{pct(D_I, T_I):.1f}%', 'brightgreen'),
                   badge('functions', f'{D_F}/{T_F} ({pct(D_F, T_F):.1f}%)', 'blue'),
                   badge('compiler', 'ee-gcc 2.9-991111', 'orange'),
                   badge('platform', 'PS2 → PC', 'lightgrey')])

blocks = {
    'BADGES': badges,
    'STATS_EN': f"""![progress](docs/img/progress.svg)

**{D_I:,} / {T_I:,} instructions ({pct(D_I, T_I):.2f}%)** and **{D_F:,} / {T_F:,} functions ({pct(D_F, T_F):.2f}%)** compile byte-for-byte identical to the original. *(updated {stamp})*

{table('en')}

<details><summary>Biggest C++ classes (from RTTI)</summary>

{ctable('en')}

</details>

![map](docs/img/map.svg)
""" + ("\n![history](docs/img/history.svg)\n" if len(hist) > 1 else ''),
    'STATS_PL': f"""**{D_I:,} / {T_I:,} instrukcji ({pct(D_I, T_I):.2f}%)** i **{D_F:,} / {T_F:,} funkcji ({pct(D_F, T_F):.2f}%)** kompiluje się bajt w bajt identycznie z oryginałem. *(stan na {stamp})*

{table('pl')}

<details><summary>Największe klasy C++ (z RTTI)</summary>

{ctable('pl')}

</details>
""",
}
txt = open('README.md').read()
for k, v in blocks.items():
    txt = re.sub(rf'(<!-- {k} -->).*?(<!-- /{k} -->)', lambda m: f'{m.group(1)}\n{v}\n{m.group(2)}', txt, flags=re.S)
open('README.md', 'w').write(txt)
print(f'funkcje {D_F}/{T_F} ({pct(D_F, T_F):.2f}%), instrukcje {D_I}/{T_I} ({pct(D_I, T_I):.2f}%)')
