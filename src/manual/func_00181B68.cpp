struct A0 { char p[8]; virtual void f0(); virtual void f1();  virtual void g(); };
struct B { virtual void f0();  virtual void f(); };
struct S { char p[0xC884]; A0 *a; B *b; };
extern "C" void func_0017E228(S *);
extern "C" void func_00181B68(S *s) { if (s->b) s->b->f(); if (s->a) s->a->g(); func_0017E228(s); }
