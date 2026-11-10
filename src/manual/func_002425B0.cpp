struct N { N *x0; int x4, x8; char p[4]; int x10; };
struct S { char p[0x20]; N *x20; };
extern S D_002F4A10[]; extern "C" int func_0026AD38(); extern "C" int func_002420A8(N *);
extern "C" void func_002425B0(N *n, int v) { S *s = D_002F4A10; if (!n) return; int r = func_0026AD38(); if (!func_002420A8(n)) { n->x4 = 0; n->x0 = s->x20; s->x20 = n; n->x8 = 0; } n->x10 = v; if (r) __asm__ volatile("ei"); }

