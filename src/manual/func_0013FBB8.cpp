// @flags -fexceptions
#include "/tmp/claude-1000/b10/hdr.h"
struct T { char p[0xEA0]; int xEA0; };
struct B { HEAPOPS char p[0x1C]; B(int, int, int); virtual ~B(); };
struct D : B { char r[0xE0]; D(int a, int b, int c) : B(a, b, c) {} };
extern "C" D *func_0013FBB8(T *t, int p1, int p2, int p3) { D *x = new D(t->xEA0, p1, p3); return x; }

