// @flags -fexceptions
struct B { char p[0x90]; virtual ~B(); B(); };
struct E0 { char p[0x2C]; virtual ~E0(); };
struct E : E0 { char q[0x1C]; E(); };
struct D : B { E arr[3]; D() asm("func_00222F20"); };
D::D() {}

