"""Przepisuje wywolania metod wirtualnych z postaci m2c na prawdziwe wywolania C++.

gcc 2.9: wpis vtable ma 8 bajtow {short delta, short index, ptr fn}; wpis 0 to RTTI.
m2c widzi: T = *(obj + P); (*(T + E + 4))(obj + *(short*)(T + E), args...)
Zamieniamy na ((VC_P_K *)obj)->vK(args...), gdzie klasa VC_P_K ma vptr na offsecie P
i metode wirtualna nr K = E/8 - 1.
"""
import re

CALL = re.compile(r'M2C_FIELD\((\w+), (?:[^()]|\([^()]*\))*?, (0x[0-9A-F]+|\d+)\)\(([\w&]+) \+ M2C_FIELD\(\1, s16 \*, (0x[0-9A-F]+|\d+)\)')


def _args(s, i):
    """Zwraca (lista argumentow, indeks za nawiasem zamykajacym) od pozycji po '(' wywolania."""
    depth = 0
    args = []
    cur = ''
    j = i
    while j < len(s):
        ch = s[j]
        if ch in '([{':
            depth += 1
        elif ch in ')]}':
            if depth == 0:
                args.append(cur.strip())
                return args, j + 1
            depth -= 1
        elif ch == ',' and depth == 0:
            args.append(cur.strip())
            cur = ''
            j += 1
            continue
        cur += ch
        j += 1
    return None, None


def rewrite(c, drop_last=False, style='class'):
    decls = {}
    out = c
    pos = 0
    while True:
        m = CALL.search(out, pos)
        if not m:
            break
        tvar, fn_off, obj, delta = m.group(1), int(m.group(2), 0), m.group(3), int(m.group(4), 0)
        if fn_off != delta + 4 or delta % 8:
            pos = m.end(); continue
        dm = re.search(r'\b%s = M2C_FIELD\(%s, [^,]+, (0x[0-9A-F]+|\d+)\);' % (re.escape(tvar), re.escape(obj)), out)
        if not dm:
            pos = m.end(); continue
        p = int(dm.group(1), 0)
        k = delta // 8 - 1
        # argumenty po 'obj + delta'
        args, end = _args(out, m.end())
        if args is None:
            pos = m.end(); continue
        rest = args[1:] if args and args[0] == '' else args
        if rest and rest[0] == '':
            rest = rest[1:]
        if rest and (drop_last or rest[-1] == obj):
            rest = rest[:-1]  # m2c dopisuje rejestr z obiektem jako argument
        name = 'VC_%X_%d_%d' % (p, k, len(rest))
        decls[name] = (p, k, len(rest))
        if style == 'class':
            call = '((%s *)(%s))->v%d(%s)' % (name, obj, k, ', '.join('(s32)(%s)' % a for a in rest))
        else:
            call = 'VFN(%s, 0x%X, %d)(%s)' % (obj, p, k, ', '.join(['VTHIS(%s, 0x%X, %d)' % (obj, p, k)] + rest))
        out = out[:m.start()] + call + out[end:]
        pos = m.start() + len(call)
    if not decls:
        return c
    # usun nieuzywane zmienne z vptr
    for tv in set(re.findall(r'\b(\w+) = M2C_FIELD\([\w&]+, void \*\*, (?:0x[0-9A-F]+|\d+)\);', out)):
        if len(re.findall(r'\b%s\b' % re.escape(tv), out)) == 2:  # deklaracja + przypisanie
            out = re.sub(r'\n\s*%s = M2C_FIELD\([\w&]+, void \*\*, (?:0x[0-9A-F]+|\d+)\);' % re.escape(tv), '', out)
            out = re.sub(r'\n\s*[\w *]+\b%s;' % re.escape(tv), '', out)
    # obiekt w zmiennej tymczasowej uzytej tylko w wywolaniu: wstaw wyrazenie (jak w zrodle)
    for obj in set(re.findall(r'VFN\((\w+), ', out)) | set(re.findall(r'\(\(VC_\w+ \*\)\((\w+)\)\)', out)):
        if not obj.startswith('temp_'):
            continue
        am = re.search(r'\n(\s*)%s = ([^;\n]+);' % re.escape(obj), out)
        need = 4 if ('VFN(%s,' % obj) in out else 3
        if not am or len(re.findall(r'\b%s\b' % re.escape(obj), out)) != need:
            continue
        expr = am.group(2)
        out = out[:am.start()] + out[am.end():]
        out = out.replace('((VC_', '((VC_')  # bez zmian
        out = re.sub(r'\b%s\b(?=, 0x[0-9A-F]+, \d+\))' % re.escape(obj), lambda mm: expr, out)
        out = re.sub(r'(\(\(VC_\w+ \*\)\()%s(\)\))' % re.escape(obj), lambda mm: mm.group(1) + expr + mm.group(2), out)
        out = re.sub(r'\n\s*[\w *]+\b%s;' % re.escape(obj), '', out)
    if style != 'class':
        return out
    # wynik nieuzywany (samodzielna instrukcja) -> metoda void
    voids = set()
    for name in decls:
        uses = re.findall(r'(^|[^\s])\s*\(\(%s \*\)' % name, out, re.M)
        stand = re.findall(r'^\s*\(\(%s \*\)' % name, out, re.M)
        if stand and len(stand) == len(re.findall(r'\(\(%s \*\)' % name, out)):
            voids.add(name)
    text = []
    for name, (p, k, n) in sorted(decls.items()):
        body = ''.join('virtual void d%d(); ' % i for i in range(k))
        pad = 'char pad[0x%X]; ' % p if p else ''
        text.append('struct %s { %s%svirtual %s v%d(%s); };' % (name, pad, body, 'void' if name in voids else 's32', k, ', '.join(['s32'] * n)))
    # wstaw deklaracje po include
    idx = out.find('\n', out.find('#include "funcs.h"')) + 1 if '#include "funcs.h"' in out else 0
    return out[:idx] + '\n'.join(text) + '\n' + out[idx:]
