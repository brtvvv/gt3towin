// @flags -fexceptions
struct B { char p[0x288]; virtual ~B(); B(); };
struct MB { int x; ~MB(); };
struct MM { char d[0x5C]; MM(); ~MM(); };
struct M1 : MB { MM mm; M1(); };
struct D;
struct M2 { char d[0xB5C]; M2(D *); };
struct D : B { int x28C; M1 m1; M2 m2; int xE4C; D() asm("func_0012C7B8"); };
D::D() : m2(this) { x28C = 0; xE4C = 0; }

