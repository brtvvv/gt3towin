// @flags -fexceptions
#include "/tmp/claude-1000/b33/hdr.h"
struct U { char p[0x142]; unsigned short x142; int x144, x148; };
struct T { char p[0xBC]; int xBC; int xC0; int xC4; char q[0x30]; int xF8; };
struct X { HEAPOPS char d[0x164]; X(T *, int, float, int, int, U *, int, int, int, int, int, int, int); void m(T *); };
extern "C" X *func_001C9198(T *t, int p1, U *p2, int p3, float f) {
    int b4 = (p2->x142 >> 4) & 1;
    int b5 = (p2->x142 >> 5) & 1;
    X *x = new X(t, t->xBC, f, t->xC0, t->xC4, p2, p1, p2->x148, p2->x144, b4, b5, t->xF8, p3);
    x->m(t);
    return x;
}

