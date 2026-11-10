// @flags -fexceptions
struct B0 { virtual ~B0(); };
struct B : B0 { int x4; void *x8, *xC; char d[0x21BF0]; B(); ~B(); };
struct E { char d[0x2044]; E(); };
struct C0 { int x0, x4; C0() : x0(0), x4(0) {} virtual ~C0() {} };
struct C : C0 { char p[0x14]; int x20; char q[0x28 - 0x24]; C() : x20(0) {} };
struct M1B { char d[8]; M1B(); virtual ~M1B(); char e[0x2D0 - 0xC]; };
struct M2 { char d[0x540]; M2(int); ~M2(); };
struct M3 { char d[0xA47C]; M3(); ~M3(); };
struct M4 { M4(); };
extern "C" void func_00181FB0(B *, M3 *);
struct D : B { int x21C00; E arr[7]; C c; M1B m1; M2 m2; M3 m3; M4 m4; D(int) asm("func_0018D9E0"); };
D::D(int a) : x21C00(a), m2(0) { func_00181FB0(this, &m3); x8 = &m4; }

