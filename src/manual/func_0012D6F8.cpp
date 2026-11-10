// @flags -fexceptions
#include "/tmp/claude-1000/b27/hdr.h"
extern "C" int func_001C36B0(int, int);
struct E { int a, b, c, xC, x10, x14; };
struct G { char p[0x38]; E e[8]; };
extern G *D_00352E94;
struct S { char d[0x80]; void init(int); };
struct B0 { HEAPOPS char p[0x1C]; virtual void f0(); };
struct B : B0 { char r[0xD0]; unsigned int xF0; char r2[0xC]; B(int, int); void m(S *); };
struct D : B { S m100; D(int a, int b) : B(a, b) {} };
extern "C" D *func_0012D6F8(int p0, int p1, int p2, int p3, int p4) {
    int k = func_001C36B0(p1, p3);
    D *x = new D(p3, k);
    E *e = &D_00352E94->e[p4];
    x->m100.init(e->xC);
    x->m(&x->m100);
    if (e->x10) x->xF0 = 0x800080FFu;
    return x;
}

