struct E { E *x0; int x4, x8, xC, x10, x14, x18, x1C; };
struct B { int a, b, c, d; };
extern volatile int D_00354930; extern E *D_00354934; extern E D_004A57F8[]; extern char D_002F49E0[];
extern "C" int func_0026AD38(); extern "C" int func_00241BF8(int, B *, char *);
extern "C" void func_00242CF8(int a0, int a1, int a2, int a3, int t0, int t1) { int r = func_0026AD38(); E *e = &D_004A57F8[D_00354930++]; if (r) __asm__ volatile("ei"); B b;
 while (func_00241BF8(a0, &b, D_002F49E0) == -1); e->x4 = t1; e->xC = a0; e->x10 = a1; e->x14 = a2; e->x18 = a3; e->x1C = t0; e->x8 = b.d;
 r = func_0026AD38(); E *p = 0; E *q; for (q = D_00354934; q; q = q->x0) { if (e->x8 < q->x8) break; p = q; } e->x0 = q; if (p) p->x0 = e; else D_00354934 = e; if (r) __asm__ volatile("ei"); }

