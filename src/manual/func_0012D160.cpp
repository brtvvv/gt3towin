// @flags -fexceptions
#include "../../include/eh_heap.h"
extern "C" int func_001C36B0(int, int);
struct G { char p[0x24]; int x24; };
extern G *D_00352E94;
struct S { char d[0x80]; void init(int); };
struct B0 { HEAPOPS char p[0x1C]; virtual void f0(); };
struct B : B0 { char r[0xE0]; B(int, int); void m(S *); };
struct D : B { S m100; D(int a, int b) : B(a, b) {} };
extern "C" D *func_0012D160(int p0, int p1, int p2, int p3) { int k = func_001C36B0(p1, p3); D *x = new D(p3, k); x->m100.init(D_00352E94->x24); x->m(&x->m100); return x; }

