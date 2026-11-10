// @flags -fexceptions
struct B { char pad[0x90]; virtual ~B(); B(); };
struct M { char d[0x30]; M(); };
struct D : B { M m; int x; D() asm("func_00225110"); };
D::D() { x = 0; }

