// @flags -fexceptions
#include "/tmp/claude-1000/b66/hdr.h"
extern "C" char *func_00219680();
extern "C" char *func_00219F60(char *);
extern "C" int func_00232210(void *);
struct S2 { int d[2]; };
extern S2 D_00352B98[];
struct L { char p[0x30]; L(); void m(int); int count(); long get(int); ~L(); };
struct X { HEAPOPS char d[0xF0]; int xF0; char e[0xC]; X(int, int, int); };
extern "C" X *func_001221F0(int p0, int p1, int p2, int p3) {
    char *g = func_00219680() + 0x3080C;
    L l;
    l.m(func_00232210(g));
    int n = l.count();
    S2 tbl = D_00352B98[0];
    int v = tbl.d[n != 0];
    X *x = new X(v, p1, p3);
    int ok = 0;
    char *r = func_00219F60(func_00219680());
    if (r) {
        long id = *(long *)(r + 0x10);
        ok = 1;
        if (n) {
            int i;
            for (i = 0; i < n; i++) if (id == l.get(i)) break;
            ok = i < n;
        }
    }
    if (!ok) x->xF0 = 0x804040FF;
    return x;
}

