struct N { int x0, x4, x8; struct L *xC; N *x10, *x14; };
struct L { char p[0x1C]; N *x1C; };
extern "C" int func_0026AD38();
extern "C" void func_00101D38(N *t) { if (!t->x4) return; L *l = t->xC; if (!l) return; int r = func_0026AD38(); N *p = t->x10; N *n = t->x14; if (!p) l->x1C = n; else p->x14 = n; if (n) n->x10 = p; t->x4 = 0; if (r) __asm__ volatile("ei"); }

