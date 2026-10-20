"""Prosty 'permuter': zamienia kolejnosc operandow dzialan przemiennych (+ * & | ^ ==)
i sprawdza, czy wynik jest blizszy oryginalowi."""
import re

OPS = [' + ', ' * ', ' & ', ' | ', ' ^ ', ' == ', ' != ']
STOP_L = set('(,;={?:')
STOP_R = set('),;?:')

def _left(s, i):
    d = 0; j = i - 1
    while j >= 0:
        ch = s[j]
        if ch == ')': d += 1
        elif ch == '(':
            if d == 0: break
            d -= 1
        elif d == 0 and (ch in ',;={?:' or s[j:j+3] in OPS or s[max(0,j-2):j+1] in [o.strip() for o in OPS]):
            break
        elif d == 0 and s[j-1:j+2] in (' + ', ' * ', ' & ', ' | ', ' ^ '):
            break
        j -= 1
    k = j + 1
    while s[k] == ' ': k += 1
    if s[k:].startswith('return '): k += 7
    return k

def _right(s, i):
    d = 0; j = i
    while j < len(s):
        ch = s[j]
        if ch == '(': d += 1
        elif ch == ')':
            if d == 0: break
            d -= 1
        elif d == 0 and (ch in ',;?:' or any(s.startswith(o, j) for o in OPS)):
            break
        j += 1
    return j

def variants(src):
    out = []
    for op in OPS:
        for m in re.finditer(re.escape(op), src):
            i = m.start()
            a = _left(src, i); b = _right(src, i + len(op))
            L = src[a:i].strip(); R = src[i + len(op):b].strip()
            if not L or not R or '\n' in L or '\n' in R or L.startswith('extern'):
                continue
            out.append(src[:a] + R + op + L + src[b:])
    return out

SIZE = {'s8': 1, 'u8': 1, 's16': 2, 'u16': 2, 's32': 4, 'u32': 4, 'f32': 4, 'M2C_UNK': 4,
        's64': 8, 'u64': 8, 'f64': 8}
_IDX = re.compile(r'M2C_FIELD\(\((\w+) \+ \((\w+) \* (\d+)\)\), (\w+) \*, (0x[0-9A-Fa-f]+|\d+)\)')
_IDX2 = re.compile(r'M2C_FIELD\(\(\((\w+) \* (\d+)\) \+ (\w+)\), (\w+) \*, (0x[0-9A-Fa-f]+|\d+)\)')

def index_rewrite(src):
    def r1(m):
        b, i, n, ty, off = m.groups()
        return m.group(0) if SIZE.get(ty) != int(n) else f'M2C_INDEX({b}, {ty}, {off}, {i})'
    def r2(m):
        i, n, b, ty, off = m.groups()
        return m.group(0) if SIZE.get(ty) != int(n) else f'M2C_INDEX({b}, {ty}, {off}, {i})'
    return _IDX2.sub(r2, _IDX.sub(r1, src))

_old_variants = variants
def variants(src):
    out = []
    r = index_rewrite(src)
    if r != src:
        out.append(r)
    return out + _old_variants(src)
