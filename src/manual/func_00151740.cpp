// @flags -fexceptions
struct R { char p[0x4C]; float x4C; void m(int); };
extern "C" R *func_001C38A0(int, int, int);
extern "C" int func_001C34A0(int, int);
extern "C" R *func_001C3538(int, int);
struct P { int a, b; virtual ~P(); };
struct Q { int c, d; virtual ~Q(); };
struct B : P, Q { char q[0x10]; B(int, int); ~B(); };
struct D : B { int x28; R *x2C; R *x30; int x34, x38; void m(float); D(int, int, int, int, int, int) asm("func_00151740"); };
D::D(int a, int b, int c, int d, int e, int f) : B(a, b), x28(c), x30(0), x34(1), x38(1) {
    R *r = func_001C38A0(c, e, 0);
    x2C = r;
    r->m(d);
    if (f) { R *r2 = func_001C3538(f, func_001C34A0(x28, e)); x30 = r2; if (r2) m(r2->x4C); }
}

