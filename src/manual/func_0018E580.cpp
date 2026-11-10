struct X { int x0; };
struct O { virtual void f0(); virtual void f1(); virtual void f2(); virtual void f3(); virtual void f4(); virtual void f5(); virtual void f6(); virtual void f7(); virtual void f8(); virtual void f9(); virtual void f10();  virtual void g(X *); };
struct G { char p[0x3C]; O *x3C; };
extern G *D_003538E8;
extern "C" X *func_00243DC8(int);
extern "C" char *func_0018E580(int a) { X *x = func_00243DC8(a); D_003538E8->x3C->g(x); return (char *)x + x->x0; }

