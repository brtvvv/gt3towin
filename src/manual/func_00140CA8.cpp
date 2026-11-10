// @flags -fexceptions
#include "../../include/eh_heap.h"
extern "C" int func_001C36B0(int, int);
struct T { char p[0x134]; char x134[0x1B0]; char x2E4[4]; };
struct X { HEAPOPS char d[0x1180]; X(T *, int, int, void *, void *, int, int, int, int, int); };
extern "C" void func_00140CA8(T *t, int p1, int p2, int p3) { char *m1 = t->x134; char *m2 = t->x2E4; int k = func_001C36B0(p1, p3); new X(t, p3, k, m1, m2, p1, 1, 1, 0, 0); }

