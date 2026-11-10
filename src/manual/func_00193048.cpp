struct C { char p[8]; int *x8; };
struct B { char p[0x18]; C *x18; };
struct A { char p[0x18]; C *x18; };
struct T { char p[0x18]; A *x18; char q[0xA46A - 0x1C]; signed char x1046A; };
extern "C" void func_00193098(T *, int);
extern "C" void func_00193048(T *t, int a) { if (t->x1046A == a) return; t->x1046A = a; func_00193098(t, t->x18->x18->x8[a]); }

