struct O { virtual void f0(); virtual void f1(); virtual void f2(); virtual void f3(); virtual void f4(); virtual void f5();  virtual int g(); };
struct A { char p[0x3C]; O *o; };
struct In { char p[0x2B4]; A *a; int v; };
struct S { char p[0xC]; In in; };
extern "C" void func_001A4148(S *s, A *a) { int v = a->o->g(); In *in = &s->in; in->a = a; in->v = v; }

