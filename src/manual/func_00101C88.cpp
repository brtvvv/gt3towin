struct N { int x0, x4, x8; struct L *xC; N *x10, *x14; };
struct L { char p[0x1C]; N *x1C; };
extern "C" int func_0026AD38();
extern "C" void func_00101C88(N *t) { if (t->x4) return; L *l = t->xC; if (!l) return; int r = func_0026AD38(); N *p = 0; N *n; for (n = l->x1C; n; n = n->x14) { if (!(t->x8 < n->x8)) break; p = n; }
 if (!p) l->x1C = t; else p->x14 = t; if (n) n->x10 = t; t->x10 = p; t->x14 = n; t->x4 = 1; if (r) __asm__ volatile("ei"); }

