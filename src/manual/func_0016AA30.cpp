// @flags -fexceptions
extern char D_003249A0[], D_003249B0[];
struct Q { int a, b, c, d; };
struct S { int a, b, c, d; char *e, *f; int g, h; S(const Q &x, char *y, char *z) : a(x.a), b(x.b), c(x.c), d(x.d), e(y), f(z), g(0), h(0) {} };
struct B0 { char p[0x1C]; virtual ~B0(); };
struct B : B0 { char r[0xF4]; int x114; B(S); ~B(); void m1(int); void m2(int); };
struct D : B { D(Q *) asm("func_0016AA30"); };
D::D(Q *t) : B(S(*t, D_003249A0, D_003249B0)) { x114 = 1; m1(1); m2(0); }

