struct S { int x0, x4, x8, xC; };
struct T { int x0, x4, x8, xC, x10; char x14[0x44]; int x58; };
extern "C" int func_00240AC8(int, char *, int, int, int); extern "C" int func_00241AB8(int);
extern "C" S *func_0014F240(T *t, S *s, int i) { t->x58 = func_00240AC8(t->x10, t->x14, s->xC, i * t->x8, t->x8); int n = func_00241AB8(t->x10); if (!n || t->x58) return 0; s->x4 = n; s->x0 = i; return s; }

