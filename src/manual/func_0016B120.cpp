// @flags -fexceptions
extern char D_00324990[], D_00324A58[], D_00324928[], D_00324A70[], D_003249C0[], D_00324A80[];
struct W { char p[0x1C]; virtual void f0(); virtual void f1(); virtual void f2(); virtual void f3(); virtual void f4(); virtual void f5(); virtual void f6(); virtual void f7(); virtual void f8(); virtual void f9(); virtual void f10(); virtual void f11(); virtual void f12(); virtual void f13(); virtual void f14(); virtual void f15(); virtual void f16(); virtual void f17(); virtual void f18(); virtual void f19(); virtual void f20(); virtual void f21(); virtual void f22();  virtual void f23(int); virtual void f24(); virtual void f25(); virtual void f26(); virtual void f27(); virtual void f28(); virtual void f29(); virtual void f30();  virtual void f31(int); };
struct E { char d[0x10]; };
struct S { int n; char x4, x5, x6; char p[9]; E e[1]; };
struct G { char p[0x1080]; S s; };
struct P { G *x0; };
extern "C" void func_0016A890(W *, E *);
struct B0 { char p[0x1C]; virtual ~B0(); };
struct B : B0 { char q[0x248 - 0x20]; B(P *); ~B(); W *make(char *, char *, P *, int, int, int, int); void add(W *, int); };
struct D : B { G *x248; W *x24C, *x250; char *x254; int x258; D(P *) asm("func_0016B120"); };
D::D(P *p) : B(p) {
    G *g = p->x0;
    x248 = g;
    x254 = (char *)g + 0x2E4;
    W *w = make(D_00324990, D_00324A58, p, 0, 0, 0, 0);
    x24C = w;
    w->f23(0);
    S *s = &x248->s;
    x258 = s->n;
    for (int i = 0; i < x258; i++) {
        W *c = make(D_00324928, D_00324A70, p, 0, 0, 0, 0);
        func_0016A890(c, &s->e[i]);
        add(c, 1);
    }
    x250 = make(D_003249C0, D_00324A80, p, 0, 0, 0, 0);
    add(x250, 1);
    x250->f31(s->x6 != 0);
}

