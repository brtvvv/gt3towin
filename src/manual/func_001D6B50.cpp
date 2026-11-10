// @flags -fexceptions
struct B0 { char p[0x1C]; virtual ~B0(); };
struct B : B0 { char q[0x1C4]; B(); ~B(); };
struct M { char d[0x14]; M(); };
struct D : B { M m; int a, b, c; D() asm("func_001D6B50"); };
D::D() { a = 0; b = 0; c = 0; }

