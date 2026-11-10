struct E { int x0; int x4; int x8; char *xC; };
struct T { int x0, x4; int x8; int xC; };
extern "C" E *func_0014F178(T *, int); extern "C" int func_0014F1B8(T *); extern "C" E *func_0014F240(T *, int, int);
extern "C" char *func_0014F2C8(T *t, int k) { int q = k / t->x8; int r = k % t->x8; E *e = func_0014F178(t, q); if (!e) { e = func_0014F240(t, func_0014F1B8(t), q); if (!e) return 0; } if (r >= e->x4) return 0; if (e->x8 != t->xC) { int c = t->xC + 1; t->xC = c; e->x8 = c; } return e->xC + r * 64; }

