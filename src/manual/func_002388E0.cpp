// @flags -fexceptions
struct B0 { char pad[0x1DC]; virtual ~B0(); };
struct B1 : B0 { char q[0x14]; B1(); ~B1(); };
struct B2 { B2(); };
struct D : B1, B2 { void init(); D() asm("func_002388E0"); };
D::D() { init(); }

