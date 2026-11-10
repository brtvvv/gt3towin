// @flags -fexceptions
struct B { char p[0xC0]; virtual ~B(); B(); };
struct M { char d[0x60]; M(); };
struct D : B { M m; int x124, x128, x12C, x130, x134, x138, x13C, x140; D(int a) asm("func_002114C0"); };
D::D(int a) { x13C = a; x130 = 0; x138 = 0; x140 = 0; x124 = 0; x128 = 0; }

