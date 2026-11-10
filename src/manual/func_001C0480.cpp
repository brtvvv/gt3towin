struct L; struct N { N *x0, *x4; int x8, xC; L *x10; int x14; float x18; };
struct L { int x0, x4; N *x8, *xC; };
extern "C" int func_0026AD38();
extern "C" void func_001C0480(N *n, L *l) { int r = func_0026AD38(); N *c = l->x8;
 if (c) { while (c && c->x18 <= n->x18) c = c->x4; if (!c) { c = l->xC; n->x4 = 0; n->x0 = c; c->x4 = n; } else { N *pv = c->x0; n->x4 = c; n->x0 = pv; c->x0 = n; if (n->x0) n->x0->x4 = n; else l->x8 = n; goto done; } }
 else l->x8 = n; l->xC = n; done:
 n->x10 = l; if (r) __asm__ volatile("ei"); }

