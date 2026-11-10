// @flags -fexceptions
#include "../../include/eh_heap.h"
extern char D_00334318[];
struct X { HEAPOPS char p[0x1C]; X(int, int); virtual ~X(); char r[0xE0]; void set(const char *); };
extern "C" X *func_001B4A60(int p0, int p1, int p2, int p3) { X *x = new X(p3, p1); x->set(D_00334318); return x; }

