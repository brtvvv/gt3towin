struct R { int x0, x4; };
extern "C" R *func_00230B40(int); extern "C" void func_00230AD8(int, char *);
struct TB { int x0; virtual void f0(); virtual void f1(); virtual void f2(); virtual void f3();  virtual void f4(); };
struct T : TB { signed char x8; char p[3]; unsigned char xC; char q[3]; int x10; char r[0x34 - 0x14]; int x34; char x38[8]; void g(int) asm("func_00230C30"); };
void T::g(int k) { if (!k) { x0 = 0; xC = 0; return; } x0 = 1; if (xC != k) { xC = k; x10 = func_00230B40(k & 0xFF)->x4; } if (x34) func_00230AD8(x8, x38); f4(); }

