# vu1aot.py <obraz.bin> <e.txt z [gt3vu] entries> <wyjscie.inc>
# Generator AOT mikrokodu VU1 GT3: bloki podstawowe -> lambdy C++ (dolaczane wewnatrz VU1Interpreter::run).
# Semantyka = tryb szybki interpretera (ps2_vu1_upper/lower/core.cpp). Wynik jest kodem wygenerowanym z gry:
# NIE commitowac do publicznego repo.
import struct, sys, re

img = open(sys.argv[1], 'rb').read()
assert len(img) == 0x4000
MASK = 0x3FFF
h = 2166136261
for c in img:
    h = ((h ^ c) * 16777619) & 0xFFFFFFFF

entries = set()
for line in (l for f in sys.argv[2].split(';') for l in open(f, encoding='utf-8', errors='replace')):
    m = re.search(r'\[gt3aot\] brak bloku ([0-9a-f]+)', line)
    if m:
        entries.add(int(m.group(1), 16))
    if '[gt3vu] entries' in line:
        for m in re.finditer(r' ([0-9a-f]+):\d+', line):
            entries.add(int(m.group(1), 16))

def words(pc):
    lo, up = struct.unpack_from('<II', img, pc & 0x3FF8)
    return up, lo

def sx(v, bits):
    v &= (1 << bits) - 1
    return v - (1 << bits) if v & (1 << (bits - 1)) else v

def imm11(l): return sx(l, 11)

def is_branch(u, l):
    if u >> 31:
        return False
    op = l >> 25
    return op in (0x20, 0x21, 0x24, 0x25) or 0x28 <= op <= 0x2F

def br_target(pc, l):
    return (pc + 8 + imm11(l) * 8) & MASK

# ---------------- osiagalnosc i liderzy blokow
reach = set()
leaders = set(entries)
work = list(entries)
while work:
    pc = work.pop()
    while 0 <= pc < 0x4000 and pc not in reach:
        reach.add(pc)
        u, l = words(pc)
        if (u >> 30) & 1:
            reach.add(pc + 8)
            break
        if is_branch(u, l):
            op = l >> 25
            reach.add(pc + 8)
            if op in (0x20, 0x21) or op >= 0x28:
                t = br_target(pc, l)
                leaders.add(t); work.append(t)
            if op in (0x21, 0x25) or op >= 0x28:
                leaders.add(pc + 16); work.append(pc + 16)
            break
        pc += 8

# ---------------- zywotnosc flag MAC (jak vuRebuildFlagDead w core)
def wr_flags(u):
    if (u & 0x01E00000) == 0 or u >> 31 and False:
        return False
    if (u & 0x01E00000) == 0:
        return False
    op = u & 0x3F
    if op >= 0x3C:
        sp = (u & 3) | ((u >> 4) & 0x7C)
        return sp <= 0xF or 0x18 <= sp <= 0x1C or sp == 0x1E or 0x20 <= sp <= 0x2A or sp in (0x2C, 0x2D, 0x2E)
    return (op <= 0xF or 0x18 <= op <= 0x1C or op == 0x1E or 0x20 <= op <= 0x2A or op in (0x2C, 0x2D, 0x2E)) and op not in (0x1D, 0x2B)

def rd_flags(u, l):
    return not (u >> 31) and (l >> 25) in (0x14, 0x16, 0x17, 0x18, 0x1A, 0x1B)

def visible(pc, sw, depth, budget):
    while depth < 64:
        budget[0] -= 1
        if budget[0] < 0:
            return True
        pc &= 0x3FF8
        u, l = words(pc)
        if rd_flags(u, l) and (sw < 0 or sw < 4):
            return True
        if sw >= 0: sw += 1
        if wr_flags(u) and sw < 0: sw = 1
        if sw >= 5: return False
        if (u >> 30) & 1: return True
        if not u >> 31:
            op = l >> 25
            if op in (0x24, 0x25): return True
            unc = op in (0x20, 0x21); cond = 0x28 <= op <= 0x2F
            if unc or cond:
                t = br_target(pc, l)
                su, sl = words(pc + 8)
                if rd_flags(su, sl) and (sw < 0 or sw < 4): return True
                s2 = sw
                if s2 >= 0: s2 += 1
                if wr_flags(su) and s2 < 0: s2 = 1
                if s2 >= 5: return False
                if visible(t, s2, depth + 2, budget): return True
                if unc: return False
                pc = (pc + 16) & MASK; sw = s2; depth += 1
                continue
        pc += 8; depth += 1
    return True

def flags_live(pc):
    u, _ = words(pc)
    if not wr_flags(u):
        return False
    return visible(pc + 8, -1, 0, [4096])

# ---------------- emisja
LANES = 'xyzw'
class Unsupported(Exception):
    pass

def blend_mask(d):
    return ((d >> 3) & 1) | (((d >> 2) & 1) << 1) | (((d >> 1) & 1) << 2) | ((d & 1) << 3)

def upper_info(u):
    """(rodzaj, rejestr zapisu VF) - rodzaj: 'fmac', 'fmaca', 'plain', 'clip', 'nop'"""
    op = u & 0x3F
    dest = (u >> 21) & 0xF; ft = (u >> 16) & 0x1F; fs = (u >> 11) & 0x1F; fd = (u >> 6) & 0x1F
    if op >= 0x3C:
        sp = (u & 3) | ((u >> 4) & 0x7C)
        if sp in (0x2F, 0x30): return ('nop', 0, sp)
        if sp == 0x1F: return ('clip', 0, sp)
        if 0x10 <= sp <= 0x17 or sp == 0x1D: return ('plain', ft if dest else 0, sp)
        return ('fmaca', 0, sp)
    if op in (0x10, 0x11, 0x12, 0x13, 0x14, 0x15, 0x16, 0x17, 0x1D, 0x1F, 0x2B, 0x2F):
        return ('plain', fd if dest else 0, op)
    return ('fmac', fd if dest else 0, op)

def q_reader(u):
    op = u & 0x3F
    if op >= 0x3C:
        sp = (u & 3) | ((u >> 4) & 0x7C)
        return sp in (0x1C, 0x20, 0x21, 0x24, 0x25)
    return op in (0x1C, 0x20, 0x21, 0x24, 0x25)

def emit_upper(pc, u, live):
    op = u & 0x3F
    dest = (u >> 21) & 0xF; ft = (u >> 16) & 0x1F; fs = (u >> 11) & 0x1F; fd = (u >> 6) & 0x1F
    kind, _, sub = upper_info(u)
    out = []
    if kind == 'nop':
        return out
    vs = 'aN(vf[%d])' % fs
    vt = 'aN(vf[%d])' % ft
    acc = 'aN(S.acc)'
    q = '_mm_set1_ps(vuNormalizeOperandInline(S.q))'
    ii = '_mm_set1_ps(vuNormalizeOperandInline(S.i))'
    def bc(n): return '_mm_shuffle_ps(vt_, vt_, %d)' % (n * 0x55)
    if kind == 'clip':
        out.append('{ uint32_t wb_; std::memcpy(&wb_, &vf[%d][3], 4); const int32_t lim_ = (wb_ & 0x7F800000u) != 0u ? (int32_t)(wb_ & 0x7FFFFFFFu) : 0x007FFFFF;' % ft)
        out.append('  uint32_t fl_ = 0u; for (int c_ = 0; c_ < 3; ++c_) { int32_t b_; std::memcpy(&b_, &vf[%d][c_], 4); if (b_ > lim_) fl_ |= 1u << (2 * c_); int32_t n_ = (int32_t)((uint32_t)b_ ^ 0x80000000u); if (n_ > lim_) fl_ |= 2u << (2 * c_); }' % fs)
        out.append('  v->queueClip(fl_); }')
        return out
    if kind == 'plain':
        if op >= 0x3C:
            if 0x10 <= sub <= 0x13:
                sc = {0x10: None, 0x11: '0.0625f', 0x12: '(1.0f / 4096.0f)', 0x13: '(1.0f / 32768.0f)'}[sub]
                # interpreter: (float)iv / 16.0f itd. - dzielenie przez potege 2 == mnozenie przez odwrotnosc (dokladne)
                e = '_mm_cvtepi32_ps(_mm_loadu_si128((const __m128i *)vf[%d]))' % fs
                if sc: e = '_mm_mul_ps(%s, _mm_set1_ps(%s))' % (e, sc)
                if ft: out.append('aSt<%d>(vf[%d], %s);' % (dest, ft, e))
                return out
            if 0x14 <= sub <= 0x17:
                sc = {0x14: '1.0f', 0x15: '16.0f', 0x16: '4096.0f', 0x17: '32768.0f'}[sub]
                if ft:
                    out.append('{ alignas(16) float s_[4]; _mm_store_ps(s_, %s); alignas(16) int32_t o_[4]; for (int c_ = 0; c_ < 4; ++c_) o_[c_] = vuFloatToInt(s_[c_], %s); aSt<%d>(vf[%d], _mm_castsi128_ps(_mm_load_si128((const __m128i *)o_))); }' % (vs, sc, dest, ft))
                return out
            if sub == 0x1D:
                if ft: out.append('aSt<%d>(vf[%d], _mm_and_ps(%s, _mm_castsi128_ps(_mm_set1_epi32(0x7FFFFFFF))));' % (dest, ft, vs))
                return out
            raise Unsupported('upper special %02x' % sub)
        if op in (0x10, 0x11, 0x12, 0x13): e = '_mm_max_ps(vs_, %s)' % bc(op & 3)
        elif op in (0x14, 0x15, 0x16, 0x17): e = '_mm_min_ps(vs_, %s)' % bc(op & 3)
        elif op == 0x1D: e = '_mm_max_ps(vs_, %s)' % ii
        elif op == 0x1F: e = '_mm_min_ps(vs_, %s)' % ii
        elif op == 0x2B: e = '_mm_max_ps(vs_, vt_)'
        elif op == 0x2F: e = '_mm_min_ps(vs_, vt_)'
        else: raise Unsupported('upper %02x' % op)
        if fd:
            out.append('{ const __m128 vs_ = %s; const __m128 vt_ = %s; (void)vt_; aSt<%d>(vf[%d], %s); }' % (vs, vt, dest, fd, e))
        return out
    # FMAC
    isacc = kind == 'fmaca'
    o = sub if isacc else op
    def opx(o):
        g = o >> 2
        if o <= 0x0F:
            b = bc(o & 3)
            return ['_mm_add_ps(vs_, %s)' % b, '_mm_sub_ps(vs_, %s)' % b,
                    '_mm_add_ps(acc_, _mm_mul_ps(vs_, %s))' % b, '_mm_sub_ps(acc_, _mm_mul_ps(vs_, %s))' % b][g]
        if 0x18 <= o <= 0x1B: return '_mm_mul_ps(vs_, %s)' % bc(o & 3)
        m = {0x1C: '_mm_mul_ps(vs_, %s)' % q, 0x1E: '_mm_mul_ps(vs_, %s)' % ii,
             0x20: '_mm_add_ps(vs_, %s)' % q, 0x21: '_mm_add_ps(acc_, _mm_mul_ps(vs_, %s))' % q,
             0x22: '_mm_add_ps(vs_, %s)' % ii, 0x23: '_mm_add_ps(acc_, _mm_mul_ps(vs_, %s))' % ii,
             0x24: '_mm_sub_ps(vs_, %s)' % q, 0x25: '_mm_sub_ps(acc_, _mm_mul_ps(vs_, %s))' % q,
             0x26: '_mm_sub_ps(vs_, %s)' % ii, 0x27: '_mm_sub_ps(acc_, _mm_mul_ps(vs_, %s))' % ii,
             0x28: '_mm_add_ps(vs_, vt_)', 0x29: '_mm_add_ps(acc_, _mm_mul_ps(vs_, vt_))',
             0x2A: '_mm_mul_ps(vs_, vt_)', 0x2C: '_mm_sub_ps(vs_, vt_)', 0x2D: '_mm_sub_ps(acc_, _mm_mul_ps(vs_, vt_))',
             0x2E: ('_mm_blend_ps(_mm_sub_ps(acc_, _mm_mul_ps(_mm_shuffle_ps(vs_, vs_, _MM_SHUFFLE(3, 0, 2, 1)), _mm_shuffle_ps(vt_, vt_, _MM_SHUFFLE(3, 1, 0, 2)))), _mm_setzero_ps(), 8)'
                    if not isacc else
                    '_mm_blend_ps(_mm_mul_ps(_mm_shuffle_ps(vs_, vs_, _MM_SHUFFLE(3, 0, 2, 1)), _mm_shuffle_ps(vt_, vt_, _MM_SHUFFLE(3, 1, 0, 2))), _mm_setzero_ps(), 8)')}
        if o not in m: raise Unsupported('fmac %02x acc=%d' % (o, isacc))
        return m[o]
    e = opx(o)
    if dest == 0:
        return out  # brak zapisu i brak wpisu flag (updateFmacFlags: dest == 0)
    pre = 'const __m128 vs_ = %s; const __m128 vt_ = %s; const __m128 acc_ = %s; (void)vt_; (void)acc_;' % (vs, vt, acc)
    slow_dst = 'v->applyFmacDestAcc(t_, %d);' % dest if isacc else 'v->applyFmacDest(vf[%d], t_, %d);' % (fd, dest)
    slow = '{ alignas(16) float t_[4]; _mm_store_ps(t_, r_); v->m_currentUpperInstruction = 0x%08Xu; %s%s }' % (
        u, slow_dst, '' if isacc or fd else ' AOT_VF0;')
    fast_dst = 'aSt<%d>(S.acc, r_);' % dest if isacc else ('aSt<%d>(vf[%d], r_);' % (dest, fd) if fd else '')
    if live:
        out.append('{ %s const __m128 r_ = %s; %s }' % (pre, e, slow))
    else:
        out.append('{ %s const __m128 r_ = %s; if (aPl<%d>(r_)) { %s } else %s }' % (pre, e, dest, fast_dst, slow))
    return out

# zapisy VI z opoznieniem odczytu przez nastepna galaz: (rejestr)
def lower_vi_delay_write(l):
    op = l >> 25
    if op in (0x08, 0x09): return (l >> 16) & 0xF
    if op == 0x40:
        f = l & 0x3F
        if f in (0x30, 0x31, 0x34, 0x35): return (l >> 6) & 0xF
        if f == 0x32: return (l >> 16) & 0xF
        if f >= 0x3C:
            s = (l & 3) | ((l >> 4) & 0x7C)
            if s in (0x34, 0x36): return (l >> 11) & 0xF
            if s in (0x35, 0x37): return (l >> 16) & 0xF
            if s == 0x3C: return (l >> 16) & 0xF
    return 0

def lower_vf_rw(l):
    """(rejestr->pasy odczytu), rejestr zapisu (pasy != 0) - jak decodeLowerUsage."""
    reads = {}; wreg = 0
    if l in (0, 0x8000033C): return reads, 0
    op = l >> 25; dest = (l >> 21) & 0xF; vt = (l >> 16) & 0x1F; vs = (l >> 11) & 0x1F
    def rd(r, ln):
        if ln: reads[r] = reads.get(r, 0) | ln
    if op == 0x00: wreg = vt if dest and vt else 0
    elif op == 0x01: rd(vs, dest)
    elif op == 0x40 and (l & 0x3F) >= 0x3C:
        s = (l & 3) | ((l >> 4) & 0x7C)
        if s == 0x30: rd(vs, dest); wreg = vt if dest and vt else 0
        elif s == 0x31: rd(vs, 0xF); wreg = vt if dest and vt else 0
        elif s in (0x34, 0x36): wreg = vt if dest and vt else 0
        elif s in (0x35, 0x37): rd(vs, dest)
        elif s == 0x38: rd(vs, 8 >> ((l >> 21) & 3)); rd(vt, 8 >> ((l >> 23) & 3))
        elif s == 0x39: rd(vt, 8 >> ((l >> 23) & 3))
        elif s == 0x3A: rd(vs, 8 >> ((l >> 21) & 3)); rd(vt, 8 >> ((l >> 23) & 3))
        elif s == 0x3C: rd(vs, 8 >> ((l >> 21) & 3))
        elif s in (0x3D, 0x40, 0x41, 0x64): wreg = vt if dest and vt else 0
        elif s in (0x42, 0x43): rd(vs, 8 >> ((l >> 21) & 3))
        elif 0x70 <= s <= 0x7D: rd(vs, 0xF)
    return reads, wreg

def emit_lower(pc, u, l):
    """zwraca (kod, info) - info: dict(branch=..., prelude=[...])"""
    out = []; pre = []; br = None
    if l in (0x00000000, 0x8000033C):
        return out, pre, br
    op = l >> 25
    dest = (l >> 21) & 0xF
    IT = (l >> 16) & 0xF; IS = (l >> 11) & 0xF; ID = (l >> 6) & 0xF
    FT = (l >> 16) & 0x1F; FS = (l >> 11) & 0x1F
    i11 = imm11(l)
    def addr(base, imm): return '((uint32_t)(int32_t)(vi[%d] + (%d)) * 16u) & 0x3FF0u' % (base, imm)
    def comp(d):
        return 0 if d & 8 else 1 if d & 4 else 2 if d & 2 else 3
    def rbv(r):
        return '0' if r == 0 else 'AOT_RBV(%d)' % r
    if op == 0x00:
        if FT and dest: out.append('aSt<%d>(vf[%d], _mm_loadu_ps((const float *)(mem + (%s))));' % (dest, FT, addr(IS, i11)))
    elif op == 0x01:
        if dest: out.append('aSt<%d>((float *)(mem + (%s)), _mm_loadu_ps(vf[%d]));' % (dest, addr(IT, i11), FS))
    elif op == 0x04:
        if IT: out.append('{ uint32_t w_; std::memcpy(&w_, mem + (%s) + %d, 4); vi[%d] = (int32_t)(int16_t)(w_ & 0xFFFFu); }' % (addr(IS, i11), comp(dest) * 4, IT))
    elif op == 0x05:
        if dest: out.append('{ const uint32_t w_ = (uint32_t)(uint16_t)(vi[%d] & 0xFFFF); aSt<%d>((float *)(mem + (%s)), _mm_castsi128_ps(_mm_set1_epi32((int)w_))); }' % (IT, dest, addr(IS, i11)))
    elif op in (0x08, 0x09):
        imm = (l & 0x7FF) | ((l >> 10) & 0x7800)
        if IT: out.append('vi[%d] = (int16_t)(vi[%d] %s %d);' % (IT, IS, '+' if op == 8 else '-', imm))
    elif op == 0x10:
        out.append('vi[1] = ((S.clip & 0xFFFFFFu) == 0x%06Xu) ? 1 : 0;' % (l & 0xFFFFFF)); pre.append('commit')
    elif op == 0x11:
        out.append('v->queueFcset(0x%06Xu);' % (l & 0xFFFFFF)); pre.append('commit')
    elif op == 0x12:
        out.append('vi[1] = ((S.clip & 0x%06Xu) != 0u) ? 1 : 0;' % (l & 0xFFFFFF)); pre.append('commit')
    elif op == 0x13:
        out.append('vi[1] = ((S.clip | 0x%06Xu) == 0xFFFFFFu) ? 1 : 0;' % (l & 0xFFFFFF)); pre.append('commit')
    elif op in (0x14, 0x16, 0x17):
        imm12 = (((l >> 21) & 1) << 11) | (l & 0x7FF)
        pre.append('commit')
        if IT:
            e = {0x14: '((S.status & 0xFFFu) == 0x%Xu) ? 1 : 0', 0x16: '(int32_t)((S.status & 0xFFFu) & 0x%Xu)', 0x17: '(int32_t)((S.status & 0xFFFu) | 0x%Xu)'}[op] % imm12
            out.append('vi[%d] = %s;' % (IT, e))
    elif op == 0x15:
        imm12 = (((l >> 21) & 1) << 11) | (l & 0x7FF)
        out.append('v->queueFsset(0x%Xu);' % imm12); pre.append('commit')
    elif op in (0x18, 0x1A, 0x1B):
        pre.append('commit')
        if IT:
            e = {0x18: '((S.mac & 0xFFFFu) == (uint32_t)(uint16_t)vi[%d]) ? 1 : 0', 0x1A: '(int32_t)(S.mac & (uint32_t)(uint16_t)vi[%d])', 0x1B: '(int32_t)(S.mac | (uint32_t)(uint16_t)vi[%d])'}[op] % IS
            out.append('vi[%d] = %s;' % (IT, e))
    elif op == 0x1C:
        pre.append('commit')
        if IT: out.append('vi[%d] = (int32_t)(S.clip & 0x0FFFu);' % IT)
    elif op == 0x20:
        br = ('B', br_target(pc, l))
    elif op == 0x21:
        if IT: out.append('vi[%d] = %d;' % (IT, (pc + 16) // 8))
        br = ('B', br_target(pc, l))
    elif op in (0x24, 0x25):
        out.append('tg_ = ((uint32_t)(uint16_t)%s * 8u) & 0x3FFFu;' % rbv(IS))
        if op == 0x25 and IT: out.append('vi[%d] = %d;' % (IT, (pc + 16) // 8))
        br = ('JR', None)
    elif 0x28 <= op <= 0x2F:
        c = {0x28: '(int16_t)%s == (int16_t)%s' % (rbv(IS), rbv(IT)), 0x29: '(int16_t)%s != (int16_t)%s' % (rbv(IS), rbv(IT)),
             0x2C: '(int16_t)%s < 0' % rbv(IS), 0x2D: '(int16_t)%s > 0' % rbv(IS), 0x2E: '(int16_t)%s <= 0' % rbv(IS),
             0x2F: '(int16_t)%s >= 0' % rbv(IS)}.get(op)
        if c is None: raise Unsupported('branch %02x' % op)
        out.append('tk_ = %s;' % c)
        br = ('C', br_target(pc, l))
    elif op == 0x40:
        f = l & 0x3F
        if f == 0x30:
            if ID: out.append('vi[%d] = (int16_t)(vi[%d] + vi[%d]);' % (ID, IS, IT))
        elif f == 0x31:
            if ID: out.append('vi[%d] = (int16_t)(vi[%d] - vi[%d]);' % (ID, IS, IT))
        elif f == 0x32:
            if IT: out.append('vi[%d] = (int16_t)(vi[%d] + (%d));' % (IT, IS, sx((l >> 6) & 0x1F, 5)))
        elif f == 0x34:
            if ID: out.append('vi[%d] = vi[%d] & vi[%d];' % (ID, IS, IT))
        elif f == 0x35:
            if ID: out.append('vi[%d] = vi[%d] | vi[%d];' % (ID, IS, IT))
        elif f >= 0x3C:
            s = (l & 3) | ((l >> 4) & 0x7C)
            if s == 0x30:
                if FT and dest: out.append('aSt<%d>(vf[%d], _mm_loadu_ps(vf[%d]));' % (dest, FT, FS))
            elif s == 0x31:
                if FT and dest: out.append('aSt<%d>(vf[%d], _mm_shuffle_ps(_mm_loadu_ps(vf[%d]), _mm_loadu_ps(vf[%d]), _MM_SHUFFLE(0, 3, 2, 1)));' % (dest, FT, FS, FS))
            elif s == 0x34:
                out.append('{ const uint32_t a_ = ((uint32_t)(uint16_t)vi[%d] * 16u) & 0x3FF0u;%s%s }' % (
                    IS, (' aSt<%d>(vf[%d], _mm_loadu_ps((const float *)(mem + a_)));' % (dest, FT)) if FT and dest else '',
                    (' vi[%d] = (int16_t)(vi[%d] + 1);' % (IS, IS)) if IS else ''))
            elif s == 0x35:
                out.append('{ const uint32_t a_ = ((uint32_t)(uint16_t)vi[%d] * 16u) & 0x3FF0u;%s%s }' % (
                    IT, (' aSt<%d>((float *)(mem + a_), _mm_loadu_ps(vf[%d]));' % (dest, FS)) if dest else '',
                    (' vi[%d] = (int16_t)(vi[%d] + 1);' % (IT, IT)) if IT else ''))
            elif s == 0x38:
                fsf = (l >> 21) & 3; ftf = (l >> 23) & 3
                pre.append('fdiv')
                out.append('{ const float n_ = vuNormalizeOperandInline(vf[%d][%d]); const float d_ = vuNormalizeOperandInline(vf[%d][%d]); uint32_t di_ = 0u; float q_;'
                           ' if (d_ == 0.0f) { di_ = n_ == 0.0f ? 0x10u : 0x20u; q_ = std::signbit(n_) != std::signbit(d_) ? -std::numeric_limits<float>::max() : std::numeric_limits<float>::max(); }'
                           ' else q_ = n_ / d_; uint32_t ig_ = 0u; q_ = v->normalizeResult(q_, ig_); v->queueQ(q_, 7u, di_); }' % (FS, fsf, FT, ftf))
            elif s == 0x3A:
                fsf = (l >> 21) & 3; ftf = (l >> 23) & 3
                pre.append('fdiv')
                out.append('{ const float n_ = vuNormalizeOperandInline(vf[%d][%d]); const float r_ = vuNormalizeOperandInline(vf[%d][%d]); const float d_ = std::sqrt(std::fabs(r_));'
                           ' uint32_t di_ = r_ < 0.0f ? 0x10u : 0u; float q_ = 0.0f;'
                           ' if (d_ != 0.0f) q_ = n_ / d_; else { di_ = n_ == 0.0f ? 0x10u : 0x20u; q_ = std::signbit(n_) ? -std::numeric_limits<float>::max() : std::numeric_limits<float>::max(); }'
                           ' uint32_t ig_ = 0u; q_ = v->normalizeResult(q_, ig_); v->queueQ(q_, 13u, di_); }' % (FS, fsf, FT, ftf))
            elif s == 0x39:
                ftf = (l >> 23) & 3
                pre.append('fdiv')
                out.append('{ const float x_ = vuNormalizeOperandInline(vf[%d][%d]); v->queueQ(std::sqrt(std::fabs(x_)), 7u, x_ < 0.0f ? 0x10u : 0u); }' % (FT, ftf))
            elif s in (0x70, 0x71, 0x72, 0x73):
                pre.append('efu')
                out.append('{ const float x_ = vuNormalizeOperandInline(vf[%d][0]); const float y_ = vuNormalizeOperandInline(vf[%d][1]); const float z_ = vuNormalizeOperandInline(vf[%d][2]);' % (FS, FS, FS))
                out.append({0x70: '  v->queueP(x_ * x_ + y_ * y_ + z_ * z_, 11u); }',
                            0x71: '  const float s_ = x_ * x_ + y_ * y_ + z_ * z_; v->queueP(s_ != 0.0f ? 1.0f / s_ : s_, 18u); }',
                            0x72: '  v->queueP(std::sqrt(x_ * x_ + y_ * y_ + z_ * z_), 18u); }',
                            0x73: '  const float l_ = std::sqrt(x_ * x_ + y_ * y_ + z_ * z_); v->queueP(l_ != 0.0f ? 1.0f / l_ : l_, 24u); }'}[s])
            elif s == 0x64:
                pre.append('commit')
                if FT and dest: out.append('aSt<%d>(vf[%d], _mm_set1_ps(S.p));' % (dest, FT))
            elif s == 0x7B:
                pre.append('waitp')
            elif s == 0x3B:
                pre.append('fdiv')
            elif s == 0x3C:
                if IT: out.append('{ uint32_t b_; std::memcpy(&b_, &vf[%d][%d], 4); vi[%d] = (int32_t)(int16_t)(b_ & 0xFFFFu); }' % (FS, (l >> 21) & 3, IT))
            elif s == 0x3D:
                if FT and dest: out.append('aSt<%d>(vf[%d], _mm_castsi128_ps(_mm_set1_epi32((int32_t)(int16_t)(vi[%d] & 0xFFFF))));' % (dest, FT, IS))
            elif s == 0x3E:
                if IT: out.append('{ uint32_t w_; std::memcpy(&w_, mem + (((uint32_t)(uint16_t)vi[%d] * 16u) & 0x3FF0u) + %d, 4); vi[%d] = (int32_t)(int16_t)(w_ & 0xFFFFu); }' % (IS, comp(dest) * 4, IT))
            elif s == 0x3F:
                if dest: out.append('{ const uint32_t w_ = (uint32_t)(uint16_t)(vi[%d] & 0xFFFF); aSt<%d>((float *)(mem + (((uint32_t)(uint16_t)vi[%d] * 16u) & 0x3FF0u)), _mm_castsi128_ps(_mm_set1_epi32((int)w_))); }' % (IT, dest, IS))
            elif s == 0x68:
                if IT: out.append('vi[%d] = (int32_t)(S.top & 0x3FFu);' % IT)
            elif s == 0x69:
                if IT: out.append('vi[%d] = (int32_t)(S.itop & 0x3FFu);' % IT)
            elif s == 0x6C:
                pre.append('kick')
                out.append('AOT_XGKICK(vi[%d]);' % IS)
            else:
                raise Unsupported('lower special %02x' % s)
        else:
            raise Unsupported('lower1 %02x' % f)
    else:
        raise Unsupported('lower %02x' % op)
    return out, pre, br

def emit_pair(pc, first_in_block, prev_recorded):
    u, l = words(pc)
    if u & 0x18000000:
        raise Unsupported('D/T')
    ibit = (u >> 31) & 1
    live = flags_live(pc) if wr_flags(u) else True
    up = emit_upper(pc, u, live)
    if ibit:
        lo, pre, br = [], [], None
    else:
        lo, pre, br = emit_lower(pc, u, l)
    kind, uw, _ = upper_info(u)
    code = ['// %04X: %08X %08X%s' % (pc, u, l, ' (flagi zywe)' if live and kind in ('fmac', 'fmaca') and (u >> 21) & 0xF else '')]
    # preludium (kolejnosc jak w interpreterze: oczekiwanie, potem commit gotowych)
    if 'fdiv' in pre:
        code.append('if (v->m_fdiv.valid && v->m_fdiv.readyCycle > v->m_cycle) v->m_cycle = v->m_fdiv.readyCycle;')
    if 'kick' in pre:
        code.append('if (v->m_cycle < g_aotKickEnd) v->m_cycle = g_aotKickEnd;')
    if 'efu' in pre:
        code.append('if (v->m_efuResourceReady > v->m_cycle) v->m_cycle = v->m_efuResourceReady;')
    if 'waitp' in pre:
        code.append('for (const auto &e_ : v->m_efu) if (e_.valid && e_.readyCycle > v->m_cycle) v->m_cycle = e_.readyCycle;')
    need_commit = 'commit' in pre or 'fdiv' in pre or 'efu' in pre or 'waitp' in pre or kind == 'clip' or (live and kind in ('fmac', 'fmaca') and (u >> 21) & 0xF)
    if need_commit:
        code.append('v->commitReadyPipelines();')
    elif q_reader(u):
        code.append('if (v->m_fdiv.valid && v->m_fdiv.readyCycle <= v->m_cycle) v->commitReadyPipelines();')
    rec = 0 if ibit else lower_vi_delay_write(l)
    code.append('{')
    if rec:
        code.append('const int32_t ov_ = vi[%d];' % rec)
    # cien: dolna czyta/pisze rejestr zapisywany przez gorna w tej samej parze
    reads, lw = ({}, 0) if ibit else lower_vf_rw(l)
    shadow = uw if (uw and (reads.get(uw, 0) or lw == uw)) else 0
    if shadow:
        code.append('{ float sv_[4], uv_[4]; std::memcpy(sv_, vf[%d], 16);' % shadow)
        code += up
        code.append('std::memcpy(uv_, vf[%d], 16); std::memcpy(vf[%d], sv_, 16);' % (shadow, shadow))
        code += lo
        code.append('std::memcpy(vf[%d], uv_, 16); }' % shadow)
    else:
        code += up
        code += lo
    if ibit:
        code.append('{ float im_; const uint32_t ib_ = 0x%08Xu; std::memcpy(&im_, &ib_, 4); S.i = vuNormalizeOperandInline(im_); }' % l)
    if first_in_block or prev_recorded:
        code.append('v->m_viBranchBackupValid = false;')
    if rec:
        code.append('v->m_viBranchBackupValue = ov_; v->m_viBranchBackupReg = %d; v->m_viBranchBackupValid = true;' % rec)
    code.append('++v->m_cycle;')
    code.append('}')
    return code, br, rec != 0, bool((u >> 30) & 1)

def emit_block(start):
    lines = []
    pc = start
    first = True
    prev_rec = False
    n = 0
    while True:
        if not first and pc in leaders:
            lines.append('return 0x%04Xu;' % pc)
            break
        code, br, rec, ebit = emit_pair(pc, first, prev_rec)
        lines += code
        first = False; prev_rec = rec; n += 1
        if ebit or br:
            slot = pc + 8
            code2, br2, rec2, eb2 = emit_pair(slot, False, prev_rec)
            if br2: raise Unsupported('skok w gniezdzie')
            lines += code2
            if ebit:
                lines.append('S.pc = 0x%04Xu; return kAotEnd;' % ((slot + 8) & MASK))
            elif br[0] == 'B':
                lines.append('return 0x%04Xu;' % br[1])
            elif br[0] == 'JR':
                lines.append('return tg_;')
            else:
                lines.append('return tk_ ? 0x%04Xu : 0x%04Xu;' % (br[1], (pc + 16) & MASK))
            break
        pc += 8
        if pc >= 0x4000:
            lines.append('return kAotBail | 0x%04Xu;' % (pc & MASK))
            break
    return lines

out = ['// Wygenerowane przez vu1aot.py z obrazu kodu VU1 GT3 - NIE commitowac do publicznego repo.',
       '#ifndef GT3_VU1_AOT_BLOCKS', '#define GT3_VU1_AOT_HASH 0x%08Xu' % h, '#else']
nb = 0; bad = []
for ld in sorted(leaders):
    if ld not in reach:
        continue
    try:
        body = emit_block(ld)
    except Unsupported as e:
        bad.append((ld, str(e)))
        continue
    nb += 1
    out.append('{0x%04Xu, +[](VU1Interpreter *v) -> uint32_t {' % ld)
    out.append('    auto &S = v->m_state; float(*vf)[4] = S.vf; int32_t *vi = S.vi; uint8_t *mem = v->m_activeVuData;')
    out.append('    bool tk_ = false; uint32_t tg_ = 0; (void)tk_; (void)tg_; (void)mem; (void)vf; (void)vi;')
    out += ['    ' + x for x in body]
    out.append('}},')
out.append('#endif')
open(sys.argv[3], 'w', newline='\n').write('\n'.join(out) + '\n')
print('hash %08x entries %d reach %d blocks %d unsupported %d %s' % (h, len(entries), len(reach), nb, len(bad), bad[:8]), file=sys.stderr)
