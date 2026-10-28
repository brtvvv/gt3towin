struct O { virtual void f0(); virtual void f1();  virtual int g(); };
extern "C" int func_00243D98(O *);
extern "C" int func_00243D40(O *o) { int a = func_00243D98(o); return (a + o->g() + 0x3F) & -0x40; }

