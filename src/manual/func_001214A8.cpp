// @flags -fexceptions
#include "../../include/eh_heap.h"
struct T { char p[0xDC8]; int xDC8; char q[8]; int xDD4[4]; };
struct X { HEAPOPS char d[0x108]; X(int, int, int, int); };
extern "C" X *func_001214A8(T *t, int p1, int p2, int p3, int p4) {
    int o = t->xDD4[t->xDC8];
    if (o) return new X(p4, o, p3, p1);
    return 0;
}

