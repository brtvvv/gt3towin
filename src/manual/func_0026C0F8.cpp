struct B { int x0; char *x4; int x8; B *xC; };
struct H { int x0, x4, x8; B *xC; };
extern "C" int func_0026AD38();
extern "C" int func_0026C0F8(H *h) { int r = func_0026AD38(); unsigned m = 0; for (B *b = h->xC; b; b = b->xC) { unsigned d = b->x4 - (char *)b; if (m < d) m = d; } if (r) __asm__ volatile("ei"); return m - 16; }

