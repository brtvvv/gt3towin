// @flags -fexceptions
#include "../../include/eh_heap.h"
struct P { char p[0x1C]; virtual ~P(); };
struct Q { char q[0x98]; virtual ~Q(); };
struct S { void m(int); };
struct B : P, Q { char r[0x14]; S xD0; char r2[0x24]; B(int, int, int); ~B(); void init(int, int, int); void m(); };
struct T { char p[0x104]; int x104, x108; char q[0x3A30 - 0x10C]; int x3A30; };
struct D : B { HEAPOPS int xF8; char pad[0x2C]; T *x128; int x12C;
    D(int a, int b, int c, int x, int y, T *t, int n) : B(a, b, c), xF8(0), x128(t), x12C(1) { init(x, y, 0); m(); xD0.m(n < 3 ? n : 2); } };
extern "C" D *func_0010F6A8(T *t, T *p1, int p2, int p3, int a4, int a5, int a6) { int n = t->x3A30; D *x = new D(a4, a5, a6, p1->x108, p1->x104, t, n); return x; }

