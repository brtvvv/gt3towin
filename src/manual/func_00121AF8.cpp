// @flags -fexceptions
#include "../../include/eh_heap.h"
extern "C" char *func_00219680();
extern "C" char *func_00219F60(char *);
extern "C" int func_00232210(void *);
struct Q { unsigned short x0; char p[0xE]; unsigned short x10; };
extern "C" int func_00237338(Q *);
struct S4 { int d[4]; };
extern S4 D_00311F08[];
struct R { char p[0x1F4]; unsigned char x1F4; };
struct L { char p[0x18]; R *x18; char q[0x14]; L(); void m(int); ~L(); };
struct X { HEAPOPS char d[0xF0]; int xF0; char e[0xC]; X(int, int, int); };
extern "C" X *func_00121AF8(int p0, int p1, int p2, int p3) {
    char *g = func_00219680() + 0x3080C;
    L l;
    l.m(func_00232210(g));
    int idx = l.x18->x1F4;
    S4 tbl = D_00311F08[0];
    int v = tbl.d[idx];
    X *x = new X(v, p1, p3);
    int ok = 0;
    char *r = func_00219F60(func_00219680());
    if (r) {
        switch (idx) {
        case 0: ok = 1; break;
        case 1: if (((Q *)(r + 0x10))->x10) ok = 1; break;
        case 2: if (func_00237338((Q *)(r + 0x10))) ok = 1; break;
        case 3: { Q *q = (Q *)(r + 0x10); if (!q->x10 && !func_00237338(q)) ok = 1; } break;
        }
    }
    if (!ok) x->xF0 = 0x804040FF;
    return x;
}

