// @flags -fexceptions
#include "/tmp/claude-1000/b56/hdr.h"
extern "C" char *func_001CA6E0(char *);
extern "C" void func_0027FDBC(char *, const char *);
extern "C" int func_0026ACA0(const char *);
extern "C" int func_00232210(void *);
struct S7 { int d[7]; };
extern S7 D_00311DB8[];
struct R { char p[0x19B]; unsigned char x19B; };
struct L { char p[0x18]; R *x18; char q[0x14]; L(); void m(int); ~L(); };
struct X { HEAPOPS char d[0x100]; X(int, int, int); };
struct T { char p[0xDC8]; int xDC8; char q[8]; char *xDD4[4]; };
extern "C" X *func_0011DCE0(T *t, int p1, int p2, int p3) {
    char buf[0x40];
    func_0027FDBC(buf, func_001CA6E0(t->xDD4[t->xDC8]));
    char *c = &buf[func_0026ACA0(buf) - 1];
    if (*c == '0') (*c)++;
    L l;
    l.m(func_00232210(buf));
    int idx = l.x18->x19B;
    if (!idx) return 0;
    S7 tbl = D_00311DB8[0];
    int v = tbl.d[idx];
    return new X(v, p1, p3);
}

