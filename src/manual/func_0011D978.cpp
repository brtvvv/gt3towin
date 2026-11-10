// @flags -fexceptions
#include "../../include/eh_heap.h"
extern char D_00311C28[], D_00311C38[], D_00311C48[], D_00311C58[], D_00311C68[];
extern "C" char *func_00219680();
extern "C" int func_00216730(char *);
extern "C" int func_001C3670(int, char *);
extern "C" int func_001C36B0(int, int);
struct X { HEAPOPS char d[0x100]; X(int, int); void m(int); };
extern "C" X *func_0011D978(int p0, int p1, int p2, int p3) {
    char *s = 0;
    switch (func_00216730(func_00219680() + 0x1F550)) {
    case 0: s = D_00311C28; break;
    case 1: s = D_00311C38; break;
    case 2: s = D_00311C48; break;
    case 3: s = D_00311C58; break;
    case 4: s = D_00311C68; break;
    }
    if (!s) return 0;
    int o = func_001C3670(p1, s);
    if (!o) return 0;
    int k = func_001C36B0(p1, o);
    X *x = new X(o, k);
    x->m(p3);
    return x;
}

