// @flags -fexceptions
struct S24 { char b[24]; };
struct P { char p[0x4C]; S24 x4C; };
struct B { char p[0x28]; S24 x28; char q[0x14]; virtual ~B(); B(); int m1(); void m2(int); };
struct D : B { P *x58; D(P *) asm("func_0018E0F8"); };
D::D(P *p) : x58(p) { m2(m1()); x28 = x58->x4C; }

