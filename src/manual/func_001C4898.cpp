// @flags -fexceptions
extern char D_00353FD0[];
extern "C" int func_001C3670(int, char *);
extern "C" int func_001C36B0(int, int);
extern "C" int func_0026ACA0(const char *);
extern "C" void func_001C4D68(char *, int *, int);
struct XB0 { char p[0x1C]; virtual ~XB0(); };
struct XB : XB0 { char q[0x100 - 0x20]; XB(int, int); ~XB(); void set(int, int); };
struct S { int x0, x4, x8, xC, x10; S() : x0(0), x4(0), x8(1), xC(0), x10(0) {} virtual void v0(); void f(int, int); void g(int); };
struct D;
extern D *D_00353FC0;
extern int D_00353FC4;
extern char *D_00353FC8;
struct D : XB { int x100; XB m104; int x204; int x208[0x81]; S s; D(int, int, int, int) asm("func_001C4898"); };
D::D(int p1, int p2, int a, int b) : XB(a, b), x100(p1), m104(0, 0) {
    S *ps = &s;
    ps->f(0, 0x81);
    ps->g(0);
    ps->xC = 1;
    int p = func_001C3670(p2, D_00353FD0);
    if (p) { m104.set(p, func_001C36B0(p2, p)); x204 = 1; }
    else x204 = 0;
    int *buf = x208;
    for (int i = 0x80; i >= 0; i--) x208[i] = 0;
    D_00353FC0 = this;
    if (D_00353FC4 > 0) ps->f(0, D_00353FC4 + 1);
    if (D_00353FC8) {
        func_001C4D68(D_00353FC8, buf, func_0026ACA0(D_00353FC8));
        int n = 0;
        if (x208[0]) { int *q = buf; do { q++; n++; } while (*q); }
        ps->g(n);
    }
}

