// @flags -fexceptions
extern char D_00325390[], D_003253A8[];
extern char *D_00353478[2];
struct R { char p[0x170]; int x170; };
extern "C" void *func_00136900();
extern "C" void func_0016C220(void *, void *, int);
struct S { int x0; };
struct B0 { char p[0x1C]; virtual ~B0(); };
struct B : B0 { char q[0x150]; int x170; char q2[0x70]; B(S *); ~B(); R *create(char *, S *, int); void *m8(char *); void m9(int); };
struct D : B { R *x1E4; void *x1E8[2]; R *x1F0; int x1F4; D(S *) asm("func_0016C5E8"); };
D::D(S *s) : B(s) {
    x1F4 = 0; x170 = 0;
    R *r = create(D_00325390, s, 0);
    x1E4 = r;
    r->x170 = 0;
    void *g = func_00136900();
    for (int i = 0; i < 2; i++) { x1E8[i] = m8(D_00353478[i]); func_0016C220(x1E8[i], g, i); }
    m9(s->x0);
    x1F0 = create(D_003253A8, s, 0);
}

