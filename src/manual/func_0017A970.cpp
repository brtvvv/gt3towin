struct B { char p[0x54]; virtual void f0(); virtual void f1(); virtual void f2(); virtual void f3(); virtual void f4(); virtual void f5(); virtual void f6(); virtual void f7(); virtual void f8(); virtual void f9(); virtual void f10(); virtual void f11();  virtual void g(int, int *, int); };
extern "C" void func_0017A970(B *t, int a, int lo, int hi) { int n = hi - lo; if (n <= 0) return; int *b = (int *)__builtin_alloca(n * 4); for (int i = 0; i < n; i++) b[i] = i + lo; t->g(a, b, n); }

