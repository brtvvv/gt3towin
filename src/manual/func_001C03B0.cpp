struct L; struct N { N *x0, *x4; int x8, xC; L *x10; };
struct L { int x0, x4, x8; N *xC; };
struct M { N *x0, *x4; int x8, xC; L *x10; };
extern "C" int func_0026AD38();
extern "C" void func_001C03B0(N *n, N *p) { int r = func_0026AD38(); n->x0 = p; n->x4 = p->x4; if (p->x4) p->x4->x0 = n; p->x4 = n; L *l = p->x10; n->x10 = l; N *a = n->x0; N *b = l->xC; if (b == a) l->xC = n; if (r) __asm__ volatile("ei"); }

