// @flags -fexceptions
#include "../../include/eh_heap.h"
extern "C" int func_001C36B0(int, int);
struct X { HEAPOPS char d[0x424]; X(int, int, int, int); };
extern "C" void func_001C4F58(int p0, int p1, int p2, int p3) { int k = func_001C36B0(p1, p3); new X(p0, p1, p3, k); }

