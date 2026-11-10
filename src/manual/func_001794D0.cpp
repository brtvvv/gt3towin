struct S { char p[0x14]; int x14; };
struct TB { int x0, x4; S **x8; char p[0x10]; virtual void f0(); virtual void f1();  virtual int f2(); };
struct T : TB { int g(S *) asm("func_001794D0"); };
int T::g(S *s) { if (!f2()) return -1; int n = x0; s->x14 = n; x8[n] = s; return x0++; }

