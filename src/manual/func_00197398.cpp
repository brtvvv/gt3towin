// @__1T 0x197398
struct T { int a, b; char p[8]; unsigned char c0, c1, c2; char pad; virtual void f0(); virtual void f1(); virtual void f2(); virtual void f3(); virtual void f4(); virtual void f5();  virtual void g(int, int); virtual void h(int, int); T(); };
T::T() : a(0), b(0) { T *t = this; t->g(0, 0); t->h(0, 0); c0 = 2; c1 = 2; c2 = 0; }
