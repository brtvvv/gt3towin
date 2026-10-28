struct O { virtual void f0(); virtual void f1(); virtual void f2(); virtual void f3(); virtual void f4(); virtual void f5(); virtual void f6(); virtual void f7(); virtual void f8(); virtual void f9(); virtual void f10();  virtual void g(void *); };
extern "C" void func_0020ADA8(char *s) {
    char *q = s + *(int *)(s + 0x96D8) * 0x24C0;
    O *o = *(O **)(q + 0x5D4);
    o->g(s + 4);
}

