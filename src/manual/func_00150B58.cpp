struct O { virtual void f0(); virtual void f1(); virtual void f2(); virtual void f3(); virtual void f4(); virtual void f5(); virtual void f6(); virtual void f7(); virtual void f8(); virtual void f9(); virtual void f10(); virtual void f11(); virtual void f12(); virtual void f13(); virtual void f14(); virtual void f15(); virtual void f16(); virtual void f17(); virtual void f18(); virtual void f19(); virtual void f20(); virtual void f21(); virtual void f22(); virtual void f23(); virtual void f24(); virtual void f25(); virtual void f26(); virtual void f27(); virtual void f28(); virtual void f29();  virtual int g(); };
extern "C" int func_0014F648(void *);
extern "C" O *func_0014BCF8(void *);
extern "C" int func_00150B58(void *s) { int a = func_0014F648(s); O *o = func_0014BCF8(s); return (a - 1) / o->g(); }

