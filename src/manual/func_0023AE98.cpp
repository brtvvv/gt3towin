// @flags -fexceptions
struct B { virtual ~B(); B(); };
struct M { M(); };
struct D : B { int y; M m; D() asm("func_0023AE98"); };
D::D() {}

