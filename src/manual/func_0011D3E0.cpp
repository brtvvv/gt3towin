// @flags -fexceptions
#include "../../include/eh_heap.h"
extern char D_00352AD8[], D_00352AF8[];
extern "C" int func_00232210(void *);
extern "C" void func_0023C8E8(char *, int);
extern "C" void func_0026D950(char *, const char *, ...);
struct S { char d[0x40]; void init(int); };
struct L3 { char d[0x220]; L3(); int m(int); int m2(); int m3(); ~L3(); };
struct X { HEAPOPS char d[0x100]; X(int, int); void m(char *); };
extern "C" X *func_0011D3E0(int p0, int p1, int p2, int p3) {
    S s;
    s.init(p3);
    int c, f;
    {
        L3 l;
        if (!l.m(func_00232210(&s))) return 0;
        c = l.m2();
        f = l.m3() & 1;
    }
    X *x = new X(p3, p1);
    if (f) x->m(D_00352AD8);
    else {
        char b2[0x80];
        func_0023C8E8(s.d, c);
        func_0026D950(b2, D_00352AF8, s.d);
        x->m(b2);
    }
    return x;
}

