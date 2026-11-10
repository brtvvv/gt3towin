// @flags -fexceptions
struct B0 { virtual ~B0(); };
struct B : B0 { char x4, x5; char d[0x182]; B(); ~B(); };
struct M { char d[0x450]; M(); ~M(); };
struct D : B { M m1, m2; char pad[0x10]; unsigned int xA38; D() asm("func_002023C8"); };
D::D() { x4 = 1; xA38 = 0x87654321u; x5 = 1; }

