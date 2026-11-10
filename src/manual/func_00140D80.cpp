// @flags -fexceptions
#include "/tmp/claude-1000/b26/hdr.h"
extern "C" int func_001C36B0(int, int);
struct T { char p[0x2E4]; char x2E4[0xB6C]; int xE50; int xE54; };
struct X { HEAPOPS char d[0x1180]; X(T *, int, int, T *, void *, int, int, int, int, int); };
extern "C" void func_00140D80(T *t, int p1, int p2, int p3) { char *m = t->x2E4; int k = func_001C36B0(p1, p3); int a = t->xE54; int b = t->xE50; new X(t, p3, k, t, m, p1, a, b, 1, 1); }

