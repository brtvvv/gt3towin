// @flags -fexceptions
struct B { char p[0x2C]; virtual ~B(); B(); };
struct M { M(); };
struct D : B { int x30, x34, x38, x3C, x40; M m; int x48; D() asm("func_00223710"); };
D::D() { x34 = 0; x30 = 1; x48 = 0; x3C = 0; x40 = 0; x38 = 0; }

