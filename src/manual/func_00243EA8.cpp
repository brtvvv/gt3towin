struct O { virtual void f0(); virtual void f1(); virtual void f2();  virtual int f3(); virtual int f4(); };
extern "C" void func_00243E78(O *, unsigned short *, int);
extern "C" int func_00243EA8(O *o, int a) { unsigned short b[8]; func_00243E78(o, b, a); if (b[5] != o->f3()) return 2; int x = b[4]; return (x ^ o->f4()) != 0; }

