struct Y { int n; };
struct X { char p[0x18]; Y *y; };
struct S { char p[0x54]; virtual void f0(); virtual void f1(); virtual void f2(); virtual void f3(); virtual void f4(); virtual void f5(); virtual void f6(); virtual void f7(); virtual void f8(); virtual void f9(); virtual void f10(); virtual void f11(); virtual void f12();  virtual void g(X *, int, int); };
extern "C" void func_0017B260(X *), func_0017B2A0(X *, int, int);
extern "C" void func_00182448(S *s, X *x) { Y *y = x->y; s->g(x, 1, y->n); func_0017B260(x); func_0017B2A0(x, 0, y->n - 1); }

