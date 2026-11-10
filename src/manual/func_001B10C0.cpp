// @flags -fexceptions
struct B { char pad[0x134]; B(); ~B(); };
struct M { char pad[0x84]; M(B *); };
struct D : B { M m; int x; D() asm("func_001B10C0"); };
D::D() : m(this) { x = 0; }

