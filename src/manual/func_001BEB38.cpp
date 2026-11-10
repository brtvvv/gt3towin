// @flags -fexceptions
#include "/tmp/claude-1000/b25/hdr.h"
struct T { char p[0xBC]; int xBC; int xC0; int xC4; char q[0x60]; int x128; char r[8]; char x134[0x100]; char x234[0x100]; int x334; };
struct X { HEAPOPS char d[0x3BC]; X(float, int, T *, int, int, int, int, void *, void *, int, int); void m(T *); };
extern "C" X *func_001BEB38(T *t, int p1, int p2, int p3, float f) { X *x = new X(f, t->x128, t, t->xBC, t->xC4, p2, p1, t->x134, t->x234, p3, t->x334); x->m(t); return x; }

