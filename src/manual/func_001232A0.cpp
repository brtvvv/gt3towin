// @flags -fexceptions
#include "../../include/eh_heap.h"
extern "C" char *func_00219680();
extern "C" char *func_00219F60(char *);
extern "C" int func_00237088(char *);
struct X { HEAPOPS char d[0x100]; X(int, int, int); };
extern "C" X *func_001232A0(int p0, int p1, int p2, int p3) {
    char *r = func_00219F60(func_00219680());
    if (!r) return 0;
    int o = func_00237088(r + 0x10);
    if (!o) return 0;
    return new X(o, p1, p3);
}

