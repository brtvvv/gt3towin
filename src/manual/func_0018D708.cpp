// @flags -fexceptions
struct B { char p[0x48]; int x48; char q[8]; virtual ~B(); B(); };
struct M { M(); };
struct D : B { int x58, x5C; M m; D() asm("func_0018D708"); };
D::D() { x5C = 0; x48 = 2; }

