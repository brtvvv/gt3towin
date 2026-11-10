// @flags -fexceptions
struct A { char p[0x10]; int x10, x14; char q[0x14]; int x2C, x30, x34; int m38[16]; int m78[3]; char r[0xD0 - 0x84];
    A(); ~A(); void assign(A *); int m(); };
struct O { int x0; virtual void f0(); virtual int get(A *); };
struct O2 { int x0; virtual void f0(); virtual void get(A *); };
struct D { int x0, x4; O *x8; O2 *xC; void f(A *) asm("func_00231068"); };
void D::f(A *out) {
    A a, b;
    x8->get(&a);
    xC->get(&b);
    if (!a.x10) out->assign(&b);
    else if (!b.x10) out->assign(&a);
    else {
    out->x10 = 1;
    out->x14 = a.x14 | b.x14;
    out->x30 = a.x30;
    out->x34 = b.x30;
    out->x2C = a.m() | b.m();
    int *d = out->m38;
    for (int i = 0; i < 16; i++) d[i] = a.m38[i];
    for (int i = 0; i < 3; i++) d[16 + i] = b.m38[i];
    }
}

