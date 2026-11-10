// @flags -fexceptions
struct B { char p[0x284]; void *x284; virtual ~B(); B(); };
struct M1 { char d[0x5C]; M1(); ~M1(); };
struct D;
struct M2 { char d[0xB5C]; M2(D *); };
struct D : B { M1 m1; M2 m2; int xE44; D() asm("func_00136AE0"); };
D::D() : m2(this) { x284 = &m2; xE44 = 0; }

