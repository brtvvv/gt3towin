struct N { N *x0; };
struct S { char p[0x20]; N *x20; };
extern S D_002F4A10[]; extern "C" int func_0026AD38();
extern "C" int func_002420A8(N *x) { S *s = D_002F4A10; int r = func_0026AD38(); N *n; for (n = s->x20; n && n != x; n = n->x0); if (r) __asm__ volatile("ei"); return n == x; }

