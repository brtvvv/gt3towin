// @flags -fexceptions
#include "../../include/eh_heap.h"
struct B0 { char p[0x1C]; virtual ~B0(); };
struct X : B0 { HEAPOPS char r[0xE0]; X(const char *, int); };
struct T { char p[0x12C]; X *x12C; };
extern "C" void func_0010CE90(T *t, const char *a, int b) { delete t->x12C; t->x12C = new X(a, b); }

