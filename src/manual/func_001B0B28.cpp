// @flags -fexceptions
#include "../../include/eh_heap.h"
struct X { HEAPOPS char d[0x100]; X(const char *, int); };
extern "C" void func_001B0BC8(void *, X *, int);
extern "C" void func_001B0B28(int p0, void *p1, const char *p2, int p3) { X *x = new X(p2, p0); func_001B0BC8(p1, x, p3); }

