// @flags -fexceptions
#include "/tmp/claude-1000/b39/hdr.h"
extern "C" int func_001CA6E0(char *);
extern "C" int func_00232210(int);
struct L { char p[0x20]; long x20; char q[8]; L(); int m(int); int m2(long); ~L(); };
struct T { char p[0xDC8]; int xDC8; char q[8]; char *xDD4[4]; };
struct X { HEAPOPS char d[0x100]; X(int, int, int); };
extern "C" X *func_001216A0(T *t, int p1, int p2, int p3) {
    char *o = t->xDD4[t->xDC8];
    if (o) {
        int d = func_001CA6E0(o);
        if (d) {
            L l;
            if (l.m(func_00232210(d))) { int v = l.m2(l.x20); return new X(v, p1, p3); }
        }
    }
    return 0;
}

