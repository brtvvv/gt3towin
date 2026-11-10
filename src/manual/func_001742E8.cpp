// @flags -fexceptions
#include "../../include/eh_heap.h"
struct T { char p[0xBC]; int xBC; int xC0; int xC4; };
struct X { HEAPOPS char d[0x170]; X(T *, int, float, int, int, int, int); void m(T *); };
extern "C" X *func_001742E8(T *t, int p1, int p2, int p3, float f) { X *x = new X(t, t->xBC, f, t->xC4, p2, p1, p3); x->m(t); return x; }

