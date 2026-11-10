struct E { char x0, x1, x2, x3; int x4; int x8; float xC; char p[0x1B00 - 0x10]; };
struct G { char p[0xC8]; int xC8; char q[0xFC - 0xCC]; int xFC; char r[0x12C - 0x100]; E *x12C; };
struct W { char p[0xE380]; unsigned int n; };
struct T { int x0; W *x4; int x8; G *xC; char p[0x136C - 0x10]; unsigned char x136C; };
extern "C" void func_001EF5B0(W *, E *, int);
extern "C" void func_001E1870(T *t, int i, int c, float f) { G *g = t->xC; W *w = t->x4; E *e = g->x12C + i; int s = g->xFC; if (g->xC8 == 2 && i) s -= g->x12C->x4; func_001EF5B0(w, e, t->x136C); e->x2 = c; e->x4 = s; e->xC = f; unsigned v = w->n + 0x3C; e->x3 = v - v / 3 * 3; }

