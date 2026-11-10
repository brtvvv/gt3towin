// @flags -fexceptions
#include "../../include/eh_heap.h"
extern "C" char *func_00219680();
extern "C" int func_0023C040(int);
extern "C" int func_001C34E8(int);
extern "C" int func_001C3538(int, int);
extern "C" int func_001C36B0(int, int);
struct X { HEAPOPS char d[0x100]; X(int, int); };
extern "C" X *func_0011E990(int p0, int p1) {
    int o = func_0023C040(*(int *)(({ char *_g = func_00219680() + 0x307C8; _g; }) + 0x538));
    if (!o) return 0;
    int c = func_001C34E8(p1);
    if (!c) return 0;
    int k1 = func_001C3538(o, c);
    if (!k1) return 0;
    int k = func_001C36B0(p1, k1);
    return new X(k1, k);
}

