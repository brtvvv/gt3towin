struct R { int a, b; };
struct S { char p[0xE8]; int k; };
struct B0 { char p[8]; virtual void f0(); virtual void f1(); virtual void f2(); virtual void f3();  virtual int g(); virtual void f5(); virtual void f6();  virtual long h(S *); };
extern "C" void func_001C5E88(int);
extern "C" long func_00151CB8(B0 *o, S *s) { R r; if (s->k && o->g()) { func_001C5E88(7); return o->h(s); } r.a = 0; r.b = 0; return *(long *)&r; }
