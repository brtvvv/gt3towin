struct M { M *x0, *x4, *x8, *xC; M *x10; char p[8]; virtual void f0(int); };
extern "C" int func_0026AD38(); extern "C" void func_001C0D40(M *);
extern "C" void func_001C0C58(M *n) { if (!n) return; int r = func_0026AD38(); if (n->x10) { if (n->x10->x8 == n) n->x10->x8 = n->x4; if (n->x10->xC == n) n->x10->xC = n->x0; }
 if (n->x0 && n->x0->x4 == n) n->x0->x4 = n->x4; if (n->x4 && n->x4->x0 == n) n->x4->x0 = n->x0; if (n->x8) func_001C0D40(n->x8); n->f0(3); if (r) __asm__ volatile("ei"); }

