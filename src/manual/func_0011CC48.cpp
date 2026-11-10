// @flags -fexceptions
#include "../../include/eh_heap.h"
struct S { char d[0x40]; S(int, int); };
struct X { HEAPOPS char d[0x100]; X(void *, int); void m(S *); };
struct R { char p[8]; int x8; };
struct T { char p[0x68]; R *x68; };
extern "C" R *func_00219680();
extern "C" X *func_0011CC48(int p0, int p1, int p2, T *p3) {
    if (p3->x68) {
        if (p3->x68->x8) {
            X *x = new X(p3, p1);
            R *r = p3->x68;
            R *g = func_00219680();
            S s(r->x8, g->x8);
            x->m(&s);
            return x;
        }
        return 0;
    }
    return 0;
}

