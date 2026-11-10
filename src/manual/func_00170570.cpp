// @flags -fexceptions
extern char D_003259A0[], D_003259B8[];
struct O { virtual void f0(); virtual void f1(); virtual void f2(); virtual void f3(); virtual int f4(); virtual void f5(); virtual void f6(); virtual void f7(); virtual void f8(); virtual void f9(); virtual void f10(); virtual void f11(); virtual void f12(); virtual void f13(); virtual void f14(); virtual void f15(); virtual void f16(); virtual void f17(); virtual void f18(); virtual void f19(); virtual void f20(); virtual void f21(); virtual void f22(); virtual void f23(); virtual void f24(); virtual void f25();  virtual int f26(int); };
struct R { char p[0x3C]; O *x3C; };
struct R2 { char p[0x23C]; int x23C, x240; };
struct C { R2 *m(char *); };
extern "C" R *func_00136900();
struct B0 { char p[0x1C]; virtual ~B0(); };
struct B : B0 { char q[0x150]; int x170; char q2[0x70]; B(void *); ~B(); C *create(char *, void *, int); };
struct D : B { C *x1E4; R2 *x1E8; char q3[8]; R *x1F4; O *x1F8; int x1FC, x200, x204; char q4[0x24]; int x22C; D(void *) asm("func_00170570"); };
D::D(void *s) : B(s) {
    R *r = func_00136900();
    x1F4 = r;
    x1F8 = r->x3C;
    x1FC = x1F8->f4();
    x200 = x1F8->f26(0x100);
    x204 = x1F8->f26(1);
    C *c = create(D_003259A0, s, 0);
    x1E4 = c;
    R2 *r2 = c->m(D_003259B8);
    r2->x240 = 0;
    r2->x23C = 1;
    x1E8 = r2;
    x170 = 0;
    x22C = 0;
}

