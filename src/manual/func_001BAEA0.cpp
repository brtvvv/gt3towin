struct A { short x0; unsigned short x2; int x4; signed char *x8; };
struct P { char p[0x40]; int x40; char q[0x68 - 0x44]; A *x68; };
struct S { char p[0x38]; float x38; char q[0xD8 - 0x3C]; float xD8, xDC, xE0; P *xE4; int xE8; signed char *xEC; };
extern "C" void func_001BC848(S *);
extern "C" void func_001BAEA0(S *s) { func_001BC848(s); P *p = s->xE4; if (!p) return; if (!(p->x40 & 4)) return; A *a = p->x68; if (!a) return; switch (a->x2 & 0xF0) { case 0x10: { float x = s->xD8 + s->xDC; s->xD8 = x; if (s->x38 + s->xE0 < x) s->xD8 = 0; break; } case 0x20: { float x = s->xD8; if (x < 255.0f) { x += 1.0f; s->xD8 = x; signed char *b = s->xEC; if (!b) b = a->x8; if (b[(int)x] & 0x80) s->xD8 = x + 1.0f; } else s->xD8 = 255.0f; break; } } }

