// @flags -fexceptions
#include "/tmp/claude-1000/b23/hdr.h"
extern "C" int func_001CA6E0(char *);
struct T { char p[0xDC8]; int xDC8; char q[8]; char *xDD4[4]; };
struct X { HEAPOPS char d[0x134]; X(int, int, int); };
extern "C" X *func_00121330(T *t, int p1, int p2, int p3) {
    char *o = t->xDD4[t->xDC8];
    if (o) {
        int d = func_001CA6E0(o);
        if (d) return new X(p3, d, p1);
        return 0;
    }
    return 0;
}

