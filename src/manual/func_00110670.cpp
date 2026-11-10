// @flags -fexceptions
#include "../../include/eh_heap.h"
extern char D_0030E890[];
extern "C" int func_001C36B0(int, int);
struct X { HEAPOPS char d[0x100]; X(int, int); void set(const char *); };
extern "C" X *func_00110670(int p0, int p1, int p2, int p3) { int k = func_001C36B0(p1, p3); X *x = new X(p3, k); x->set(D_0030E890); return x; }

