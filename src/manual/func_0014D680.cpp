// @flags -fexceptions
#include "../../include/eh_heap.h"
extern "C" int func_001C36B0(int, int);
struct T { char p[0x2E4]; char x2E4[4]; };
struct X { HEAPOPS char d[0x200]; X(int, int, void *, int, T *); };
extern "C" void func_0014D680(T *p0, int p1, int p2, int p3) { char *m = p0->x2E4; int k = func_001C36B0(p1, p3); new X(p3, k, m, p1, p0); }

