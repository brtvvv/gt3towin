struct R { int a, b; };
struct S { char p[0xE8]; int xE8; };
struct TB { int a, b; virtual void f0(); virtual void f1(); virtual void f2(); virtual void f3();  virtual int f4(); virtual void f5(); virtual void f6();  virtual long f7(S *); };
struct T : TB { long g(S *) asm("func_00151CB8"); };
extern "C" void func_001C5E88(int);
long T::g(S *s) { if (s->xE8 && f4()) { func_001C5E88(7); return f7(s); } R r; r.a = 0; r.b = 0; return *(long *)&r; }

