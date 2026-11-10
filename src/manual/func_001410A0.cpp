// @flags -fexceptions
#include "../../include/eh_heap.h"
struct T { char p[0xE50]; int xE50; int xE54; char xE58[4]; };
struct X { HEAPOPS char d[0x2F0]; X(int, int, T *, void *, int, int, int); };
extern "C" void func_001410A0(T *t, int p1, int p2, int p3, int p4) {
    char *m = t->xE58;
    int b = t->xE50;
    int a = t->xE54;
    new X(p3, p1, t, m, b, a, p4);
}

