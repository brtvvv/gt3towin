// @flags -fexceptions
#include "/tmp/claude-1000/b37/hdr.h"
extern "C" int func_001C36B0(int, int);
extern "C" void func_0026D950(char *, const char *, ...);
extern char D_00352E18[];
extern int D_002B30F0[], D_002B30F4[];
struct E { int x0, x4, x8, xC, x10, x14; };
struct G { char p[0x38]; E e[8]; };
extern G *D_00352E94;
struct B0 { HEAPOPS char p[0x1C]; virtual void f0(); };
struct B : B0 { char r[0xD0]; unsigned int xF0; char r2[0xC]; B(int, int); void m(char *); };
struct D : B { char m100[0x80]; D(int a, int b) : B(a, b) {} };
extern "C" D *func_0012D7E0(int p0, int p1, int p2, int p3, int p4) {
    int k = func_001C36B0(p1, p3);
    D *x = new D(p3, k);
    E *e = D_00352E94->e + p4;
    int n = e->x8;
    if (n >= 2) func_0026D950(x->m100, D_00352E18, n, D_002B30F4[0]);
    else func_0026D950(x->m100, D_00352E18, n, D_002B30F0[0]);
    x->m(x->m100);
    if (e->x10) x->xF0 = 0x800080FFu;
    return x;
}

