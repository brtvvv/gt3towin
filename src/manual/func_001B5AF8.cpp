// @flags -fexceptions
#include "../../include/eh_heap.h"
struct T { char p[0xC4]; int xC4; char q[0x148 - 0xC8]; char x148[0xC]; char x154[0xC]; char x160[0xC]; };
struct X { HEAPOPS char d[0x16C]; X(T *, int, int, int, int, void *, void *, void *); void m(T *); };
extern "C" X *func_001B5AF8(T *t, int p1, int p2, int p3) { X *x = new X(t, t->xC4, p2, p1, p3, t->x148, t->x154, t->x160); x->m(t); return x; }

