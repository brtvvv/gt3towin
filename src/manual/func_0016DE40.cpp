struct O { char p[0x1C]; virtual void f0(); virtual void f1(); virtual void f2(); virtual void f3(); virtual void f4(); virtual void f5(); virtual void f6(); virtual void f7(); virtual void f8(); virtual void f9(); virtual void f10(); virtual void f11(); virtual void f12(); virtual void f13();  virtual void f(int); virtual void f15(); virtual void f16(); virtual void f17(); virtual void f18(); virtual void f19();  virtual void g(int); };
extern "C" O *func_0016DDF0(void *);
extern "C" void func_00136930(int);
extern "C" void func_0016DE40(void *s) { func_0016DDF0(s)->f(0); func_0016DDF0(s)->g(1); func_00136930(1); }

