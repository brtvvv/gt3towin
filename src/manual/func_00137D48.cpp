// @flags -fexceptions
#include "/tmp/claude-1000/b25/hdr.h"
extern char D_00352F68[], D_00352F70[];
extern "C" int func_001C36B0(int, int);
extern "C" int func_0019B910(int);
extern "C" void func_0026D950(char *, const char *, ...);
struct X { HEAPOPS char d[0x100]; X(int, int); void m(char *); };
struct T { char p[0xEF0]; int xEF0; };
extern "C" X *func_00137D48(T *t, int p1, int p2, int p3) {
    int k = func_001C36B0(p1, p3);
    char buf[0x40];
    if (t->xEF0 >= 0) func_0026D950(buf, D_00352F68, func_0019B910(t->xEF0 + 1));
    else func_0026D950(buf, D_00352F70);
    X *x = new X(p3, k);
    x->m(buf);
    return x;
}

