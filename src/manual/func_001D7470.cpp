struct B0 { char p[0x1C]; virtual void f0(); virtual void f1(); virtual void f2(); virtual void f3(); virtual void f4(); virtual void f5(); virtual void f6(); virtual void f7(); virtual void f8(); virtual void f9(); virtual void f10(); virtual void f11(); virtual void f12(); virtual void f13(); virtual void f14(); virtual void f15();  virtual int f16(int); };
struct S : B0 { char q[0x174 - 0x20]; int x; };
extern "C" int func_001D7470(S *o) { int x = o->x; if (x) return o->f16(x); return 1; }

