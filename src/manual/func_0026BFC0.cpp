struct B { B *x0, *x4; unsigned x8, xC; };
struct H { B *x0, *x4; };
extern "C" int func_0026AD38(); extern "C" void func_0026BC00(H *, B *); extern "C" void func_0026BBC0(H *, B *, B *); extern "C" void func_0026BB60(H *, B *); extern "C" void func_0026BBE0(H *, B *);
static inline int valid(H *h, B *b) { if (b < h->x0) return 0; if (!(b < h->x4)) return 0; if (b->x8 != 0xFFFFFFFFu) return 0; return ~b->xC == 0; }
extern "C" void func_0026BFC0(H *h, char *p) { B *b = (B *)(p - 16); if (!valid(h, b)) return; int r = func_0026AD38(); B *pv = b->x0;
 if (pv) { if (pv->x8 != 0xFFFFFFFFu) { func_0026BC00(h, pv); func_0026BBC0(h, pv, b); b = pv; } } else func_0026BB60(h, b);
 B *n = b->x4; if (n < h->x4 && n->x8 != 0xFFFFFFFFu) { func_0026BC00(h, n); func_0026BBC0(h, b, n); } func_0026BBE0(h, b); if (r) __asm__ volatile("ei"); }

