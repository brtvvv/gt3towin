// @flags -fexceptions
#include "/tmp/claude-1000/b65/hdr.h"
extern "C" char *func_00219680();
extern "C" char *func_00219F60(char *);
extern "C" int func_00232210(void *);
extern "C" int func_002350C8(char *);
struct S3 { int d[3]; };
extern S3 D_00311FE8[];
struct R { char p[0x1F5]; unsigned char x1F5; };
struct L { char p[0x18]; R *x18; char q[0x14]; L(); void m(int); ~L(); };
struct X { HEAPOPS char d[0xF0]; int xF0; char e[0xC]; X(int, int, int); };
extern "C" X *func_00121EA0(int p0, int p1, int p2, int p3) {
    char *g = func_00219680() + 0x3080C;
    L l;
    l.m(func_00232210(g));
    int idx = l.x18->x1F5;
    S3 tbl = D_00311FE8[0];
    int v = tbl.d[idx];
    X *x = new X(v, p1, p3);
    int ok = 0;
    char *r = func_00219F60(func_00219680());
    if (r) {
        switch (idx) {
        case 0: ok = 1; break;
        case 1: if (!func_002350C8(r + 0x10)) ok = 1; break;
        case 2: if (func_002350C8(r + 0x10)) ok = 1; break;
        }
    }
    if (!ok) x->xF0 = 0x804040FF;
    return x;
}

