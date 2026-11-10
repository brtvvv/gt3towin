// @flags -fexceptions
struct B { char p[0x284]; void *x284; virtual ~B(); B(); };
struct MB { int x; ~MB(); };
struct MM { char d[0x54]; MM(); ~MM(); };
struct M1 : MB { MM mm; M1(); };
struct D;
struct M2 { char d[0xB5C]; M2(D *); };
struct S { void init(); };
struct D : B { M1 m1; M2 m2; int xE40, xE44, xE48, xE4C, xE50, xE54; S xE58; D() asm("func_0013FDF8"); };
D::D() : m2(this) { xE40 = 0; xE44 = 0; xE48 = 0; xE4C = 0; xE50 = 0; xE54 = 2; xE58.init(); x284 = &m2; }

