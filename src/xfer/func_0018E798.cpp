struct O { virtual void _fam0(); virtual void _fam1(); virtual void _fam2(); virtual void _fam3(); virtual void _fam4(); virtual void _fam5(); virtual void f0(); virtual void f1(); virtual void f2(); virtual void f3(); virtual void f4(); virtual void f5(); virtual void f6(); virtual void f7(); virtual void f8(); virtual void f9(); virtual void f10();  virtual void g(int *); };
struct G { char p[0x3C]; O *o; };
extern G *D_003538E8;
extern "C" int *func_00243DC8(void);
extern "C" char *func_0018E798(void) { int *r = func_00243DC8(); D_003538E8->o->g(r); return (char *)r + *r; }

