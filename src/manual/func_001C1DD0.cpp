// @flags -fexceptions
#include "/tmp/claude-1000/b21/hdr.h"
struct T { char p[0xBC]; int xBC; int xC0; int xC4; char q[0x60]; char x128[4]; };
struct X { HEAPOPS char d[0x268]; X(T *, int, float, int, int, int, void *, int); void m(T *); };
extern "C" X *func_001C1DD0(T *t, int p1, int p2, int p3, float f) { X *x = new X(t, t->xBC, f, t->xC4, p2, p1, t->x128, p3); x->m(t); return x; }

