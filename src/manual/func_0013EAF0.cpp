// @flags -fexceptions
#include "/tmp/claude-1000/b24/hdr.h"
extern "C" int func_001C36B0(int, int);
struct T { char p[0x28C]; char x28C[0xC04]; int xE90; int xE94; int xE98; };
struct X { HEAPOPS char d[0x1048]; X(int, int, int, void *, T *, int, T *); void f(); };
extern "C" X *func_0013EAF0(T *t, int p1, int p2, int p3) {
    char *m = t->x28C;
    int a = t->xE90;
    int b = t->xE98;
    int k = func_001C36B0(p1, p3);
    X *x = new X(a, p3, k, m, t, b, t);
    x->f();
    return x;
}

