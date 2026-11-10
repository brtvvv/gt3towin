// @flags -fexceptions
#include "../../include/eh_heap.h"
struct X;
struct R { void m(X *); };
struct C { char p[0x40]; int x40; int *x44; int x48; int *x4C; };
extern "C" C *func_001C34A0(void *, int);
extern "C" R *func_001C3BD0(void *, int, X *, X *);
extern "C" R *func_001C3CA0(void *, int, X *, X *);
extern "C" void func_001C3A20(void *, X *);
extern "C" void func_001C3B10(void *, X *);
struct X { HEAPOPS char d[0xC4]; X(); void m(void *); };
struct T { char p[0xC4]; void *xC4; X *xC8; X *xCC; };
extern "C" void func_001C9F38(T *t, void *a, int b) {
    C *c = func_001C34A0(t->xC4, b);
    X *old = t->xCC;
    if (c) {
        t->xCC = new X;
        int i;
        for (i = 0; i < c->x40; i++) { R *r = func_001C3BD0(t->xC4, c->x44[i], t->xCC, t->xCC); if (r) r->m(t->xCC); }
        for (i = 0; i < c->x48; i++) { R *r = func_001C3CA0(t->xC4, c->x4C[i], t->xCC, t->xCC); if (r) r->m(t->xCC); }
        func_001C3A20(t->xC4, t->xCC);
        t->xCC->m(a);
    } else t->xCC = 0;
    if (old) func_001C3B10(t->xC4, old);
}

