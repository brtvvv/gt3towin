struct R;
struct O { int x0; virtual void f0(); virtual void f1(R *); };
struct R { char p[0xC]; O *xC; };
struct A { char p[0x3C]; }; struct B { char p[0x74]; }; struct C { char p[0xD0]; }; struct D { char p[0x10]; };
struct T { int x0; A a[8]; B b[2]; D d[2]; C c[8]; };
extern "C" void func_0022F7E0(T *); extern "C" void func_0022EEC0(R *, T *); extern "C" void func_0022F800(T *);
extern "C" void func_0022FB08(T *t, R *r, unsigned k) { if (k < 8) r->xC = (O *)((char *)t + k * 0x3C + 4); else if (k - 10 < 2) r->xC = (O *)((char *)t + k * 0x74 + -676); else if (k - 12 < 8) r->xC = (O *)((char *)t + k * 0xD0 + -1748); else if (k - 20 < 2) r->xC = (O *)((char *)(k * 0x10 + (int)t) + 396); func_0022F7E0(t); if (r->xC) r->xC->f1(r); func_0022EEC0(r, t); func_0022F800(t); }

