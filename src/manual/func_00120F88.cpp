// @flags -fexceptions
#include "../../include/eh_heap.h"
extern "C" char *func_00219680();
extern "C" int func_001C3670(int, char *);
extern "C" int func_001C36B0(int, int);
struct X { HEAPOPS char d[0x100]; X(int, int); };
extern "C" X *func_00120F88(int p0, int p1) {
    int o = func_001C3670(p1, func_00219680() + 0x3080C);
    if (!o) return 0;
    int k = func_001C36B0(p1, o);
    return new X(o, k);
}

