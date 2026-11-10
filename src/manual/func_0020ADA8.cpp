struct O { virtual void f0(); virtual void f1(); virtual void f2(); virtual void f3(); virtual void f4(); virtual void f5(); virtual void f6(); virtual void f7(); virtual void f8(); virtual void f9(); virtual void f10();  virtual void f11(void *); };
extern "C" void func_0020ADA8(char *a) { O *o = *(O **)(a + *(int *)(a + 0x96D8) * 0x24C0 + 0x5D4); o->f11(a + 4); }

