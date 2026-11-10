// @flags -fexceptions
#include "../../include/eh_heap.h"
extern "C" int func_001C36B0(int, int);
extern "C" void func_00121038();
struct T { char p[0xDC8]; int xDC8; char q[8]; int xDD4[4]; };
struct X { HEAPOPS char d[0x108]; X(int, int, int, void *); };
extern "C" X *func_00121088(T *t, int p1, int p2, int p3) {
    int o = t->xDD4[t->xDC8];
    if (!o) return 0;
    int k = func_001C36B0(p1, p3);
    return new X(p3, k, o, (void *)func_00121038);
}

