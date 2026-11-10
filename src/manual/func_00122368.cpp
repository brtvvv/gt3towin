// @flags -fexceptions
#include "../../include/eh_heap.h"
extern "C" char *func_00219680();
extern "C" int func_00232210(char *);
struct S7 { int d[7]; };
extern S7 D_00312050[];
struct R { char p[0x19B]; unsigned char x19B; };
struct L { char p[0x18]; R *x18; char q[0x14]; L(); void m(int); ~L(); };
struct X { HEAPOPS char d[0x100]; X(int, int, int); };
extern "C" X *func_00122368(int p0, int p1, int p2, int p3) {
    char *g = func_00219680() + 0x3080C;
    L l;
    l.m(func_00232210(g));
    int idx = l.x18->x19B;
    S7 tbl = D_00312050[0];
    int v = tbl.d[idx];
    return new X(v, p1, p3);
}

