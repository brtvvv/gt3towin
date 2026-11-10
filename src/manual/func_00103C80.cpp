// @flags -fexceptions
#include "../../include/eh_heap.h"
extern char D_0030AD00[], D_00352510[];
extern "C" void func_0026D950(char *, const char *, ...);
struct X { HEAPOPS char d[0x100]; X(const char *, int); void m(int); };
struct Sub { char p[0x1DC]; int x1DC; char q[0xAE4 - 0x1E0]; int xAE4; };
struct T { char p[0x2E4]; Sub sub; char a[0xDCC - 0x2E4 - sizeof(Sub)]; int xDCC[0x21]; char b[0x38F4 - 0xDCC - 0x84]; int x38F4; char c[0x3A44 - 0x38F8]; X *x3A44, *x3A48, *x3A4C; char d[0x3AD0 - 0x3A50]; int x3AD0; void m2(X *, int); };
extern "C" void func_00103C80(T *t) {
    Sub *q = &t->sub;
    int o = t->xDCC[q->xAE4];
    char buf[0x40];
    func_0026D950(buf, D_0030AD00, t->x38F4 + 1);
    t->x3A4C = new X(buf, q->x1DC);
    t->m2(t->x3A4C, t->x3AD0);
    t->x3A4C->m(o);
    t->x3A44 = new X(D_00352510, q->x1DC);
    t->m2(t->x3A44, t->x3AD0);
    t->x3A44->m(o);
}

