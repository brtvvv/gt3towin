// @flags -fexceptions
extern char D_00353648[];
struct S { S(const char *, int); };
struct P { char p[0x1C]; virtual ~P(); };
struct Q { char q[0xE8]; virtual ~Q(); };
struct B : P, Q { char r[0x54]; B(int, int, int, int, int, int, int); ~B(); };
struct D : B { int x160, x164; S m; D(int, int, int, int, int, int) asm("func_00174678"); };
D::D(int a, int b, int c, int d, int e, int f) : B(a, b, c, d, e, 1, f), x160(a), x164(f), m(D_00353648, f + 1) {}

