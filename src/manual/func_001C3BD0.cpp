// @flags -fexceptions
#include "/tmp/claude-1000/b22/hdr.h"
extern "C" int func_001C36B0(void *, int);
struct T { char p[0x58]; int x58; };
struct X { HEAPOPS char p[0x18]; float x18; char q[0x80]; int x9C, xA0; char r[0x5C]; X(int, int); };
extern "C" X *func_001C3BD0(T *t, int p1, int p2, int p3) {
    int k = func_001C36B0(t, p1);
    X *x = new X(p1, k);
    x->x18 += t->x58 * 100.0f;
    if (p3) { x->x9C = p3; x->xA0 = 3; }
    return x;
}

