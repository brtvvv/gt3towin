// @flags -fexceptions
#include "../../include/eh_heap.h"
extern char D_00311C98[];
extern "C" char *func_00219680();
extern "C" int func_00216650(char *, int, int);
extern "C" int func_001C3670(int, char *);
extern "C" int func_001C36B0(int, int);
struct X { HEAPOPS char d[0x100]; X(int, int); void m(int); };
extern "C" X *func_0011DAB8(int p0, int p1, int p2, int p3) {
    char *s = 0;
    if (func_00216650(func_00219680() + 0x1F550, 5, 0)) s = D_00311C98;
    if (!s) return 0;
    int o = func_001C3670(p1, s);
    if (!o) return 0;
    int k = func_001C36B0(p1, o);
    X *x = new X(o, k);
    x->m(p3);
    return x;
}

