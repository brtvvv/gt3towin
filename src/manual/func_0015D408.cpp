// @flags -fexceptions
struct B { char p[0x288]; virtual ~B(); B(); };
struct MB { int x; ~MB(); };
struct MM { char d[0x54]; MM(); ~MM(); };
struct M1 : MB { MM mm; M1(); };
struct D;
struct M2 { char d[0xB5C]; M2(D *); };
struct M3 { char d[0x230]; M3(); ~M3(); };
struct D : B { M1 m1; M2 m2; M3 m3; char pad[0x4C]; int x10BC, x10C0; D() asm("func_0015D408"); };
D::D() : m2(this) { x10BC = 0; x10C0 = 0; }

