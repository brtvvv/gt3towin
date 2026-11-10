struct V { int x0; float x4, x8, xC; int p10, p14; float x18; };
struct U { char p[0x60]; V *x60; };
struct T { char p[0x8C]; float x8C, x90; char q[0xD0 - 0x94]; int xD0; };
extern "C" void func_001BA220(T *t, U *u) { V *v = u->x60; if ((double)v->xC != 1.0 || (double)v->x18 != 1.0) { t->xD0 = 2; t->x8C = v->xC - v->x4; t->x90 = v->x18 - v->x8; } }

