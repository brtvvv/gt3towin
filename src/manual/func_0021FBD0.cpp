// @flags -fexceptions
struct B { char pad[0x24]; B(); ~B(); };
struct M { M(int); };
struct D : B { int a, b, c, d30; M m; D() asm("func_0021FBD0"); };
D::D() : a(0), b(0), c(0), m(0) {}

