struct R { char p[0x58]; int v; };
struct O { char p[0x14]; int a; char q[0x14]; int b; };
extern "C" R *func_0014ADA8(int);
extern "C" void func_00153350(O *o, int x) { R *r = func_0014ADA8(x); if (!r) o->b = 0; else o->b = r->v >= 0; o->a = o->b ^ 1; }

