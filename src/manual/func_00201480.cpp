struct E { char p[0x10]; float x10; char q[0x40 - 0x14]; };
struct C { char p[0x68]; int n; E *e; };
struct B { int x0; C *c; };
struct A { char p[0x11F8]; B *b; };
struct T { char p[0x15C]; A *a; };
extern long D_002DCD68[]; extern "C" float func_002071F8(float);
extern "C" int func_00201480(T *t, int i) { C *c = t->a->b->c; if (i >= c->n) return 0; if (i < 2) { if (i >= 0) return 1; } int k = (int)(func_002071F8(((E *)((char *)c->e + (i << 6)))->x10) + 22.5f) / 45; if (k > 8) k = 8; return D_002DCD68[k]; }

