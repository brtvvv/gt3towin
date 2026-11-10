// @flags -fexceptions
#include "../../include/eh_heap.h"
extern "C" int func_001C36B0(int, int);
extern "C" int func_0023B0D0(long);
extern "C" void func_0026D950(char *, const char *, ...);
extern char D_00352E08[], D_00352E10[];
struct E { long x0; int x8, xC, x10, x14; };
struct G { char p[0x38]; E e[8]; };
extern G *D_00352E94;
struct B0 { HEAPOPS char p[0x1C]; virtual void f0(); };
struct B : B0 { char r[0xD0]; unsigned int xF0; char r2[0xC]; B(int, int); void m(char *); };
struct D : B { char m100[0x80]; D(int a, int b) : B(a, b) {} };
extern "C" D *func_0012D4F8(int p0, int p1, int p2, int p3, int p4) {
    int k = func_001C36B0(p1, p3);
    D *x = new D(p3, k);
    E *e = D_00352E94->e + p4;
    if (!e->x0) x->m(D_00352E08);
    else {
        char buf[0x80];
        func_0026D950(buf, D_00352E10, func_0023B0D0(e->x0));
        x->m(buf);
        if (e->x10) x->xF0 = 0x800080FFu;
    }
    return x;
}

