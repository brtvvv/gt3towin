// @flags -fexceptions
struct B0 { char pad[0x14]; virtual ~B0(); B0(); };
struct B1 : B0 { int x18, x1C; B1(); ~B1() {} };
struct M { char d[0x20]; M(); };
struct D : B1 { M m; char x40; D() asm("func_0019E650"); };
D::D() { x40 = 0; }

