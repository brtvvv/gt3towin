// @flags -fexceptions
extern "C" void func_00136858();
struct B00 { char p[0x1C]; virtual ~B00(); };
struct B0 : B00 { char q[0x18]; float x38; };
struct B : B0 { char r[0x1A8]; B(); ~B(); };
struct D : B { int x1E4, x1E8; float x1EC; int x1F0; void m1(int); void m2(float); void m3(); D() asm("func_0016BDC8"); };
D::D() { x1E4 = 0; x1F0 = 0; x1E8 = 1; x1EC = x38; m1(0); m2(0.0f); m3(); func_00136858(); }

