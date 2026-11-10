// @flags -fexceptions
#include "/tmp/claude-1000/b29/hdr.h"
extern char D_00354080[], D_00354088[];
extern "C" int func_001C35A8(int, char *, int);
struct X { HEAPOPS char d[0x100]; X(int, int); };
struct T { char p[0xC4]; int xC4; char q[0x58]; X *x120, *x124; };
extern "C" void func_001C96E8(T *t) {
    int o = func_001C35A8(t->xC4, D_00354080, 0);
    if (o) t->x120 = new X(o, t->xC4);
    int o2 = func_001C35A8(t->xC4, D_00354088, 0);
    if (o2) t->x124 = new X(o2, t->xC4);
}

