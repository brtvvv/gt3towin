struct N { N *x0, *x4; int x8, xC; struct L *x10; };
struct L { int x0, x4; N *x8, *xC; };
extern "C" int func_0026AD38();
extern "C" void func_001C0428(N *n, L *l) { int r = func_0026AD38(); N *t = l->xC; if (t) { n->x0 = t; n->x4 = 0; t->x4 = n; } else l->x8 = n; n->x10 = l; l->xC = n; if (r) __asm__ volatile("ei"); }

