// @flags -fexceptions
#include "/tmp/claude-1000/b27/hdr.h"
extern "C" int func_001C36B0(int, void *);
struct U { char p[0x4C]; float x4C; };
struct T { char p[0x284]; int x284; };
struct X { HEAPOPS char p[0x18]; float x18; char q[0x114]; X(T *, int, int, int, int, U *, int); };
extern "C" X *func_001C6A88(T *p0, int p1, int p2, U *p3, int (*f)(int *), int p5) {
    int k = func_001C36B0(p1, p3);
    int out;
    int r = f(&out);
    int v = p0->x284;
    X *x = new X(p0, r, out, v, p5, p3, k);
    x->x18 = p3->x4C;
    return x;
}

