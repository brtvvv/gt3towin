struct CB { char p[0x8]; int x8; char q[4]; virtual void f0(); virtual void go(); void s(int v) { x8 = v; go(); } }; struct C : CB { char r[0xC]; };
struct T { char p[0x34]; void *x34; int x38, x3C; char q[0x50 - 0x40]; int x50; char r[0x210 - 0x54]; C c[5]; C *x2B0, *x2B4, *x2B8; int x2BC; };
extern "C" void func_001B16C0(T *, int, int);
extern "C" void func_001A46A0(T *t) { int one = 1; C *a = &t->c[0], *b = &t->c[1], *c = &t->c[2]; t->x50 = 0; a->s(one); b->s(one); c->s(one); t->c[3].s(0); t->c[4].s(0); func_001B16C0(t, t->x2BC, 0); t->x2B0 = a; t->x2B4 = b; t->x2B8 = c; t->x34 = &t->x2B0; t->x38 = 3; t->x3C = 0; }

