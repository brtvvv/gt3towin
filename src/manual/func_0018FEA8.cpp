// @flags -fexceptions
struct B0 { virtual ~B0(); };
struct B : B0 { int x4; void *x8; char d[0x16EB4]; B(); ~B(); };
struct E { char d[0x2044]; E(); };
struct MC { char d[0x10]; MC(); ~MC(); };
struct C0 { int x0, x4; C0() : x0(0), x4(0) {} virtual ~C0() {} };
struct C : C0 { MC m; char pad[0x9A0 - 0x1C]; C() {} };
struct C2 : C { int x9A0, x9A4; C2() { x9A0 = 0; x9A4 = 0; } };
struct M1 { char d[0x2AC]; M1(); ~M1(); };
struct M2 { char d[0x540]; M2(int); ~M2(); };
struct M3 { M3(); };
struct D : B { E arr[7]; C2 c; M1 m1; M2 m2; M3 m3; D() asm("func_0018FEA8"); };
D::D() : m2(0) { x8 = &m3; }

