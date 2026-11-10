struct OB { virtual void f0(); virtual void f1(); virtual void f2(); virtual void f3(); virtual void f4(); virtual void f5();  virtual void f6(int); };
struct O : OB { char d[0xA478]; };
struct T { int x0; O o[2]; };
extern "C" void func_00196C78(T *t, int a) { O *o = t->o; for (int i = 1; i >= 0; i--) { o->f6(a); o++; } }

