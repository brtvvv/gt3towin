struct CB { char p[0x8]; int x8; char q[4]; virtual void f0(); virtual void go(); void s(int v) { x8 = v; go(); } }; struct C : CB { char r[0xC]; };
struct T { char p[0x34]; void *x34; int x38, x3C; char q[0x50 - 0x40]; int x50; char r[0x210 - 0x54]; C c[5]; char s[0x2B0 - 0x2B0]; C *x2B0, *x2B4; char u[0x2BC - 0x2B8]; int x2BC; };
extern "C" void func_001B16C0(T *, int, int);
extern "C" void func_001A47A8(T *t) { int one = 1; C *a = &t->c[3], *b = &t->c[4]; t->x50 = one; t->c[0].s(0); t->c[1].s(0); t->c[2].s(0); a->s(one); b->s(one); func_001B16C0(t, t->x2BC, 1); t->x3C = one; t->x2B0 = a; t->x2B4 = b; t->x38 = 2; t->x34 = &t->x2B0; }

