// @flags -fexceptions
#include "/tmp/claude-1000/b30/hdr.h"
extern char D_00311E40[];
extern "C" int func_001CA6E0(char *);
extern "C" int func_00121038(int);
extern "C" int func_001C36B0(int, int);
struct T { char p[0xDC8]; int xDC8; char q[8]; char *xDD4[4]; };
struct X { HEAPOPS char d[0x100]; X(const char *, int); X(int, int); };
extern "C" X *func_00121140(T *t, int p1, int p2, int p3) {
    char *o = t->xDD4[t->xDC8];
    if (o) {
        int d = func_001CA6E0(o);
        if (d && !func_00121038(d)) return new X(D_00311E40, p1);
    }
    int k = func_001C36B0(p1, p3);
    return new X(p3, k);
}

