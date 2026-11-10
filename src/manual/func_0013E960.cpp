// @flags -fexceptions
#include "/tmp/claude-1000/b13/hdr.h"
extern "C" int func_001C36B0(int, int);
struct B { HEAPOPS char p[0x1C]; B(int, int); virtual ~B(); };
struct D : B { char r[0xE0]; int x100; D(int a, int b, int c) : B(a, b), x100(c) {} };
extern "C" D *func_0013E960(int p0, int p1, int p2, int p3) { int k = func_001C36B0(p1, p3); D *x = new D(p3, k, p0); return x; }

