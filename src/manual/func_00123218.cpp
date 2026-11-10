// @flags -fexceptions
#include "../../include/eh_heap.h"
struct B { HEAPOPS char p[0x1C]; B(int, int); virtual ~B(); };
struct D : B { char r[0xE0]; D(int a, int b) : B(a, b) {} };
extern "C" D *func_00123218(int p0, int p1, int p2, int p3) { return new D(p3, p1); }

