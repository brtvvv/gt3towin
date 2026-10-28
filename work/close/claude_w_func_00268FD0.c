typedef struct { short a, lo, hi, gain; char p[8]; } E;
typedef struct { E *tab; char p[8]; short l, r; } S;
#define VB(i) ((i) * 16 + (char *)s)
#define IDX(i) (*(signed char *)(VB(i) + 0x11))
#define VX(i) (*(short *)(VB(i) + 0x14))
#define VY(i) (*(short *)(VB(i) + 0x16))
extern short D_00301528[];

void func_00268FD0(S *s, int i, int key, int smooth)
{
    int other = IDX((i + 1) & 1);
    E *cur = &s->tab[IDX(i)];
    int t = 0x4000;
    int g, r, l;
    if (other >= 0) {
        E *o = &s->tab[other];
        if (key < cur->lo) {
            t = ((key - o->hi) << 14) / (cur->lo - o->hi);
        } else if (cur->hi < key) {
            t = ((o->lo - key) << 14) / (o->lo - cur->hi);
        }
    }
    if (t < 0) t = 0;
    g = ((D_00301528[((unsigned)t >> 4) & 0xFFF] * 0x3FFF) >> 12) * cur->gain >> 14;
    l = (g * s->l) >> 14;
    r = (g * s->r) >> 14;
    if (smooth) {
        int py = VY(i), px = VX(i);
        int neg = 0;
        if (l < 0) { neg = 1; l = -l; }
        px = px > -1 ? px : -px;
        if (px + 0x1000 < l) l = px + 0x1000;
        else if (l < px - 0x1000) l = px - 0x1000;
        if (neg) l = -l;
        neg = 0;
        if (r < 0) { neg = 1; r = -r; }
        py = py > -1 ? py : -py;
        if (py + 0x1000 < r) r = py + 0x1000;
        else if (r < py - 0x1000) r = py - 0x1000;
        if (neg) r = -r;
    }
    VY(i) = r;
    VX(i) = l;
}

