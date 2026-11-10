// @flags -fexceptions
#include "/tmp/claude-1000/b51/hdr.h"
struct X;
struct R { void m(X *); void m2(X *); };
struct C { char p[0x40]; int x40; int *x44; int x48; int *x4C; };
struct T { int x0, x4, x8; };
extern "C" C *func_001C34A0(T *, int);
extern "C" R *func_001C3BD0(T *, int, X *, X *);
extern "C" R *func_001C3CA0(T *, int, X *, X *);
struct X { HEAPOPS char d[0xC4]; X(); };
extern "C" X *func_001C38A0(T *t, int a, int f) {
    if (!t->x8) return 0;
    C *c = func_001C34A0(t, a);
    if (!c) return 0;
    int i;
    X *x = new X;
    for (i = 0; i < c->x40; i++) { R *r = func_001C3BD0(t, c->x44[i], x, x); if (r) { if (f) r->m2(x); else r->m(x); } }
    for (i = 0; i < c->x48; i++) { R *r = func_001C3CA0(t, c->x4C[i], x, x); if (r) { if (f) r->m2(x); else r->m(x); } }
    return x;
}

