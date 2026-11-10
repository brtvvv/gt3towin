// @flags -fexceptions
struct A0 { int x0, x4; A0() { x4 = 0; x0 = 0; } ~A0(); };
struct A : A0 { A() {} virtual ~A() {} };
struct D2a { long l; char p[0x1D4]; virtual ~D2a(); };
struct D2 : D2a { char q[0x38]; D2(); ~D2(); };
struct D : A, D2 { int x228, x22C; D() asm("func_0023BF20"); };
D::D() { x22C = -1; x228 = 0; }

