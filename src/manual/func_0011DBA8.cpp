// @flags -fexceptions
#include "../../include/eh_heap.h"
extern char D_00311CA8[], D_00311CB8[], D_00311CC8[], D_00311CD8[], D_00311CE8[], D_00311CF8[], D_00311D08[];
extern "C" char *func_00219680();
extern "C" int func_00216730(char *);
extern "C" int func_001C3670(int, char *);
extern "C" int func_001C36B0(int, int);
struct X { HEAPOPS char d[0x100]; X(int, int); };
extern "C" X *func_0011DBA8(int p0, int p1) {
    char *s = 0;
    switch (func_00216730(func_00219680() + 0x1F550)) {
    case -1: s = D_00311CA8; break;
    case 0: s = D_00311CB8; break;
    case 1: s = D_00311CC8; break;
    case 2: s = D_00311CD8; break;
    case 3: s = D_00311CE8; break;
    case 4: s = D_00311CF8; break;
    case 5: s = D_00311D08; break;
    case 6: break;
    }
    if (!s) return 0;
    int o = func_001C3670(p1, s);
    if (!o) return 0;
    int k = func_001C36B0(p1, o);
    return new X(o, k);
}

