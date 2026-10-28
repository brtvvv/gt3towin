struct T { char p[8]; int a; char q[0x74]; char *g; };
struct X { char p[0x38]; T **t; };
struct O0 { virtual void f0(); virtual void f1(); virtual void f2(); virtual void f3(); virtual void f4(); virtual void f5();  virtual int h(); }; struct O : O0 { X *x; };
extern "C" void func_00226CD0(int), func_00226CE0(int), func_001AA1E8(T *, int, int, int);
extern "C" void func_00180038(O *o) { T *t = *o->x->t; int v = o->h(); func_00226CD0(1); func_00226CE0(-1); func_001AA1E8(t, t->a, v, *(int *)(t->g + 0xF30)); func_00226CD0(0); }
