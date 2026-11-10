// @flags -fexceptions
struct P { char p[0x1C]; virtual ~P(); };
struct Q { char q[0xE8]; virtual ~Q(); };
struct B : P, Q { char r[0x54]; B(int, int, int, int, int, int, int); ~B(); };
struct XB0 { char p[0x1C]; virtual ~XB0(); };
struct S;
struct XM : XB0 { char r[0xE0]; XM(int, int); ~XM(); void init2(S *, int); };
struct S { void init(int); };
struct D : B { int x160; XM m164; S m264; D(int, int, int, int, int, int, int, int) asm("func_001B6A00"); };
D::D(int a, int b, int c, int d, int e, int f, int g, int h) : B(a, b, c, d, e, f, g), x160(h), m164(0, 0) { m264.init(d); m164.init2(&m264, c); }

