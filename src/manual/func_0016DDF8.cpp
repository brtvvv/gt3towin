struct B0 { char p[0x1C]; virtual void f0(); virtual void f1(); virtual void f2(); virtual void f3(); virtual void f4(); virtual void f5(); virtual void f6(); virtual void f7(); virtual void f8(); virtual void f9(); virtual void f10(); virtual void f11(); virtual void f12(); virtual void f13();  virtual void f14(int); };
struct S { char p[0x174]; int x; };
extern "C" B0 *func_0016DDF0(S *); extern "C" void func_00136930(int);
extern "C" void func_0016DDF8(S *s) { func_0016DDF0(s)->f14(s->x); func_00136930(0); }

