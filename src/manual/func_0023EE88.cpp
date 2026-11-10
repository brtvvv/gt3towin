struct N { N *x0, *x4; };
extern N *D_003548F0; extern "C" void func_0023F150(N *); extern "C" int func_0026AD38(); extern "C" void func_0027D2F8(N *);
extern "C" void func_0023EE88(N *n, int f) { func_0023F150(n); int r = func_0026AD38(); if (n->x0) n->x0->x4 = n->x4; else D_003548F0 = n->x4; if (n->x4) n->x4->x0 = n->x0; if (r) __asm__ volatile("ei"); if (f & 1) func_0027D2F8(n); }

