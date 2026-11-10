struct N { N *x0; N *x4; N *x8; N *xC; N *x10; };
extern "C" int func_0026AD38();
extern "C" void func_001C0540(N *n) { int e = func_0026AD38(); N *p = n->x10; if (p) { if (p->x8 == n) p->x8 = n->x4; if (n->x10->xC == n) n->x10->xC = n->x0; n->x10 = 0; } if (n->x0) { if (n->x0->x4 == n) n->x0->x4 = n->x4; n->x0 = 0; } if (n->x4) { if (n->x4->x0 == n) n->x4->x0 = n->x0; n->x4 = 0; } if (e) __asm__ volatile("ei"); }

