// @flags -fexceptions
#include "../../include/eh_heap.h"
extern char D_0030B9A0[], D_0030B9B0[], D_0030B9C0[];
struct T { char p[0x4C0]; int x4C0; };
struct X { HEAPOPS char d[0x100]; X(const char *, int); };
extern "C" void func_00108958(T *t, int a, int b) {
    int v = t->x4C0;
    const char *s;
    if (a) { if (b != 2) s = D_0030B9A0; else s = D_0030B9B0; } else s = D_0030B9C0;
    new X(s, v);
}

