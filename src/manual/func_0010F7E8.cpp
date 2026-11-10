// @flags -fexceptions
#include "../../include/eh_heap.h"
struct P { char p[0x1C]; virtual ~P(); };
struct Q { char q[0x98]; virtual ~Q(); };
struct B : P, Q { char r[0x3C]; B(int, int, int); ~B(); void init(int, int, int); void m(); };
struct D : B { HEAPOPS int xF8; char pad[0x2C]; D(int a, int b, int c, int x, int y) : B(a, b, c), xF8(0) { init(x, y, 0); m(); } };
struct T { char p[0x104]; int x104, x108; };
extern "C" D *func_0010F7E8(int p0, T *p1, int p2, int p3, int a4, int a5, int a6) { D *x = new D(a4, a5, a6, p1->x108, p1->x104); return x; }

