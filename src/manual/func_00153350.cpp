struct R { char p[0x58]; int x58; };
extern "C" R *func_0014ADA8(int);
struct T { char p[0x14]; int x14; char q[0x14]; int x2C; };
extern "C" void func_00153350(T *t, int a) { R *r = func_0014ADA8(a); if (!r) t->x2C = 0; else t->x2C = r->x58 >= 0; t->x14 = t->x2C ^ 1; }

