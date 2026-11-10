struct O { virtual void f0(); virtual void f1(); virtual void f2(); virtual void f3(); virtual void f4(); virtual void f5(); virtual void f6(); virtual void f7(); virtual void f8(); virtual void f9(); virtual void f10(); virtual void f11(); virtual void f12();  virtual void f13(int); virtual void f14(); virtual void f15(); virtual void f16(); virtual void f17(); virtual void f18();  virtual void f19(int); virtual void f20(int); void g(int, int) asm("func_00188840"); };
void O::g(int k, int a) { if (!k) { f13(a); return; } f19(a); f20(a); }

