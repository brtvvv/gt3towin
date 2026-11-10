// @flags -fexceptions
#include "../../include/eh_heap.h"
extern char D_003525A0[], D_003525A8[];
struct X { HEAPOPS char d[0x100]; X(const char *, int); void m(int); };
struct T { char p[0x3A3C]; X *x3A3C, *x3A40; void m2(int); };
extern "C" void func_001050B0(T *t, int p1, int p2, int p3) {
    t->x3A3C = new X(D_003525A0, p2);
    t->x3A3C->m(p3);
    t->x3A40 = new X(D_003525A8, p2);
    t->x3A40->m(p3);
    t->m2(p1);
}

