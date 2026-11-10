// @flags -fexceptions
#include "../../include/eh_heap.h"
extern "C" int func_001C36B0(int, int);
extern "C" void func_0026D950(char *, const char *, ...);
extern char D_00352E18[];
extern int D_002B30E8[], D_002B30EC[];
struct G { char p[0x2C]; int x2C; };
extern G *D_00352E94;
struct B0 { HEAPOPS char p[0x1C]; virtual void f0(); };
struct B : B0 { char r[0xE0]; B(int, int); void m(char *); };
struct D : B { char m100[0x80]; D(int a, int b) : B(a, b) {} };
extern "C" D *func_0012D908(int p0, int p1, int p2, int p3) {
    int k = func_001C36B0(p1, p3);
    D *x = new D(p3, k);
    int n = D_00352E94->x2C;
    if (n >= 2) func_0026D950(x->m100, D_00352E18, n, D_002B30EC[0]);
    else func_0026D950(x->m100, D_00352E18, n, D_002B30E8[0]);
    x->m(x->m100);
    return x;
}

