struct C { char p[0x20E0]; int x20E0; };
struct L { int n; int x4; C **e; };
struct R { char p[0x18]; L *x18; };
struct B { char p[0x54]; virtual void f0(); virtual void f1(); virtual void f2(); virtual void f3(); virtual void f4(); virtual void f5(); virtual void f6(); virtual void f7(); virtual void f8(); virtual void f9(); virtual void f10(); virtual void f11();  virtual void g(R *, char *, int); };
struct T : B { char q[0x1058 - 0x58]; char x1058[0x20]; int x1078; };
extern "C" int func_0022EA88(); extern "C" void func_0017A7A8(int); extern "C" void func_0017B260(R *); extern "C" int func_0022E8D0(); extern "C" int func_0022E850(int);
extern "C" void func_001854E8(T *t, R *r) { int a = 0, i = 0; func_0017A7A8(func_0022EA88()); L *l = r->x18; t->g(r, t->x1058, t->x1078); func_0017B260(r); int *b = (int *)__builtin_alloca(l->n * 4); int c = func_0022E8D0(); for (; i < l->n; i++) b[i] = func_0022E850(i) ? a++ : c++; for (i = 0; i < l->n; i++) r->x18->e[i]->x20E0 = b[i]; }

