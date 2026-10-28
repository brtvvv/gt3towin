struct R { char p[0x124]; int k; };
struct O { virtual void f0(); virtual void f1(); virtual void f2(); virtual void f3(); virtual void f4(); virtual void f5(); virtual void f6(); virtual void f7(); virtual void f8(); virtual void f9(); virtual void f10(); virtual void f11(); virtual void f12(); virtual void f13(); virtual void f14(); virtual void f15(); virtual void f16(); virtual void f17(); virtual void f18(); virtual void f19(); virtual void f20(); virtual void f21(); virtual void f22(); virtual void f23(); virtual void f24(); virtual void f25();  virtual R *h(int); };
struct X { char p[0x3C]; O *o; };
struct S { X *x; char p[0xB7A8]; unsigned char f; };
extern "C" void func_001F4000(S *);
extern "C" int *func_001F60D0(int);
extern "C" void func_001F2118(S *s) { func_001F4000(s); if (s->f) return; int *r = func_001F60D0(s->x->o->h(0x100)->k); if (!r[4]) r[4] = 0x157529FF; }
