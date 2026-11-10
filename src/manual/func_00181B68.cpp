struct A { virtual void f0();  virtual void f1(); };
struct BB { int x0, x4; virtual void f0(); virtual void f1();  virtual void f2(); };
struct T { char p[0xC884]; BB *xC884; A *xC888; };
extern "C" void func_0017E228(T *);
extern "C" void func_00181B68(T *t) { if (t->xC888) t->xC888->f1(); if (t->xC884) t->xC884->f2(); func_0017E228(t); }

