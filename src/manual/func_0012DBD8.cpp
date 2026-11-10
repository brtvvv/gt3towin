// @flags -fexceptions
#include "../../include/eh_heap.h"
extern "C" int func_001C36B0(int, int);
extern char D_00352E28[];
struct P { int a, b; };
extern P D_002B30E0[];
struct G { char p[0x30]; int x30; };
extern G *D_00352E94;
struct S { char d[0x80]; void init(const char *, int, int, int); };
struct B0 { HEAPOPS char p[0x1C]; virtual void f0(); };
struct B : B0 { char r[0xE0]; B(int, int); void m(S *); };
struct D : B { S m100; D(int a, int b) : B(a, b) {} };
extern "C" D *func_0012DBD8(int p0, int p1, int p2, int p3) {
    int k = func_001C36B0(p1, p3);
    D *x = new D(p3, k);
    x->m100.init(D_00352E28, D_002B30E0[0].a, D_00352E94->x30 + 1, D_002B30E0[0].b);
    x->m(&x->m100);
    return x;
}

