// @flags -fexceptions
#include "../../include/eh_heap.h"
extern "C" char *func_00219680();
extern "C" int func_00232210(void *);
extern "C" int func_00216650(char *, int, int);
struct S7 { int d[7]; };
extern S7 D_00311E70[];
struct R { char p[0x19B]; unsigned char x19B; };
struct L { char p[0x18]; R *x18; char q[0x14]; L(); int m(int); ~L(); };
struct X { HEAPOPS char d[0xF0]; int xF0; char e[0xC]; X(int, int, int); };
extern "C" X *func_001217D8(int p0, int p1, int p2, int p3) {
    char *g = func_00219680() + 0x3080C;
    L l;
    if (!l.m(func_00232210(g))) return 0;
    int idx = l.x18->x19B;
    S7 tbl = D_00311E70[0];
    int v = tbl.d[idx];
    X *x = new X(v, p1, p3);
    int ok = 0;
    switch (idx) {
    case 0: ok = 1; break;
    case 1: ok = func_00216650(func_00219680() + 0x1F550, 0, 0); break;
    case 2: ok = func_00216650(func_00219680() + 0x1F550, 1, 0); break;
    case 3: ok = func_00216650(func_00219680() + 0x1F550, 2, 0); break;
    case 4: ok = func_00216650(func_00219680() + 0x1F550, 3, 0); break;
    case 5: ok = func_00216650(func_00219680() + 0x1F550, 4, 0); break;
    case 6: ok = func_00216650(func_00219680() + 0x1F550, 5, 0); break;
    }
    if (!ok) x->xF0 = 0x804040FF;
    return x;
}

