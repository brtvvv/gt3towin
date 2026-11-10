// @flags -fexceptions
#include "/tmp/claude-1000/b31/hdr.h"
extern char D_00311EB0[];
extern "C" char *func_00219680();
extern "C" char *func_00219F60(char *);
extern "C" int func_00232210(void *);
struct X { char d[0xB0]; X(); void m(int); ~X(); };
struct Y { HEAPOPS char p[0xF0]; unsigned int xF0; char q[0xC]; Y(const char *, int, int); };
extern "C" Y *func_001219F8(int p0, int p1, int p2, int p3) {
    char *g = func_00219680() + 0x3080C;
    X t;
    t.m(func_00232210(g));
    Y *x = new Y(D_00311EB0, p1, p3);
    if (!func_00219F60(func_00219680())) x->xF0 = 0x804040FFu;
    return x;
}

