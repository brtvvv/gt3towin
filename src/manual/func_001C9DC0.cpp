// @flags -fexceptions
#include "/tmp/claude-1000/b51/hdr.h"
struct X;
struct R { void m(X *); };
struct C { char p[0x40]; int x40; int *x44; int x48; int *x4C; };
extern "C" C *func_001C34A0(void *, int);
extern "C" R *func_001C3BD0(void *, int, X *, int);
extern "C" R *func_001C3CA0(void *, int, X *, int);
struct X { HEAPOPS char d[0xC4]; X(); void m(void *); void m5(int); };
struct T { char p[0xC4]; void *xC4; X *xC8; };
extern "C" void func_001C9DC0(T *t, void *a, int b) {
    C *c = func_001C34A0(t->xC4, b);
    X *old = t->xC8;
    if (c) {
        t->xC8 = new X;
        int i;
        for (i = 0; i < c->x40; i++) { R *r = func_001C3BD0(t->xC4, c->x44[i], t->xC8, 0); if (r) r->m(t->xC8); }
        for (i = 0; i < c->x48; i++) { R *r = func_001C3CA0(t->xC4, c->x4C[i], t->xC8, 0); if (r) r->m(t->xC8); }
        t->xC8->m(a);
    } else t->xC8 = 0;
    if (old) old->m5(0);
}

