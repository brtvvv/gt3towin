// @flags -fexceptions
#include "/tmp/claude-1000/b9/hdr.h"
struct T { char p[0xDE8]; char xDE8[4]; };
struct U { char p[0x4C]; float x4C; };
struct X { HEAPOPS char p[0x18]; float x18; char d[0x100]; X(void *, int, float, float); };
extern "C" X *func_0013A0A8(T *t, int p1, int p2, U *p3) { char *m = t->xDE8; X *x = new X(m, 4, 3.0f, 1.5f); x->x18 = p3->x4C; return x; }

