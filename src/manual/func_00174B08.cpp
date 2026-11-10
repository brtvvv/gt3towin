// @flags -fexceptions
struct XB0 { char p[0x1C]; virtual ~XB0(); };
struct XM : XB0 { char r[0xE0]; XM(int, int); ~XM(); };
struct E { XM m; int a, b; E() : m(0, 0) {} };
struct D { E a, b, c, d, e, f, g; D() asm("func_00174B08"); };
D::D() {}

