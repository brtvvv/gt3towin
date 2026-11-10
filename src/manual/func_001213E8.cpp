// @flags -fexceptions
#include "../../include/eh_heap.h"
struct A { int a; };
struct Q { char p[0x100]; };
struct DD : Q, A { };
extern "C" A *func_0023D558(char *, int);
struct T { char p[0xDC8]; int xDC8; char q[8]; char *xDD4[4]; };
struct X { HEAPOPS char d[0xD0]; X(int, DD *, int); };
extern "C" X *func_001213E8(T *t, int p1, int p2, int p3, int p4) {
    char *o = t->xDD4[t->xDC8];
    if (o) {
        DD *d = (DD *)func_0023D558(o + 0xB0, p4);
        if (d) return new X(p3, d, p1);
        return 0;
    }
    return 0;
}

