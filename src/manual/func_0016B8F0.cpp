// @flags -fexceptions
extern char D_00324A48[];
struct D;
struct S { int x0; char p[0xC]; int x10; };
struct R { char p[0x220]; D *x220; int x224; void m1(float); void m2(float); };
struct B0 { char p[0x1C]; virtual ~B0(); };
struct B : B0 { char q[0xFC]; int x11C; char q2[0xC4]; B(S *); ~B(); R *create(char *, int, S *, int, int, int, int); void m3(int); };
struct D : B { R *x1E4; D(S *) asm("func_0016B8F0"); };
D::D(S *s) : B(s) {
    int f = s->x10 != 0;
    x11C = 1;
    R *r = create(D_00324A48, 0, s, 0, 0, 0, 0);
    r->x224 = 1;
    x1E4 = r;
    r->x220 = this;
    r->m1(0.0f);
    x1E4->m2(0.0f);
    if (!f) m3(s->x0);
}

