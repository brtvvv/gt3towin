// @flags -fexceptions
#include "../../include/eh_heap.h"
extern "C" int func_001C36B0(int, int);
struct T { char p[0x2E4]; char x2E4[4]; };
struct X { HEAPOPS char d[0x1180]; X(T *, int, int, T *, void *, int, int, int, int, int); };
extern "C" void func_00140BE0(T *t, int p1, int p2, int p3) { char *m = t->x2E4; int k = func_001C36B0(p1, p3); new X(t, p3, k, t, m, p1, 1, 0, 0, 0); }

