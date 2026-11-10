// @flags -fexceptions
#include "../../include/eh_heap.h"
struct T { char p[0x104]; int x104; int x108; };
struct X { HEAPOPS char d[0x16C]; X(int, int, int, int); };
extern "C" void func_0011AE58(int p0, T *p1, int p2, int p3, int p4, int p5, int p6, int p7) { new X(p1->x108, p1->x104, p6, p7); }

