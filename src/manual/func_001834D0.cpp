// @flags -fexceptions
struct O { virtual void f0(); virtual void f1(); virtual void f2(); virtual void f3();  virtual void f4(int); };
struct B0 { virtual ~B0(); };
struct B : B0 { char p[0xC884]; O *xC888; char q[0x34580 - 0xC88C]; B(); ~B(); };
struct M1 { char d[0x2AC]; M1(); ~M1(); };
struct M2 { M2(int); ~M2(); };
struct D : B { int x34580; M1 m1; M2 m2; D() asm("func_001834D0"); };
D::D() : m2(0) { xC888->f4(0); }

