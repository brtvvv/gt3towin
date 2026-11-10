// @flags -fexceptions
#include "/tmp/claude-1000/b46/hdr.h"
extern char D_00352B30[], D_002F7008[];
extern "C" int func_00232210(void *);
extern "C" int func_002469A8(char *);
extern "C" void func_0026D950(char *, const char *, ...);
struct S { char d[0x40]; void init(int); };
struct R { char p[0x198]; unsigned char x198; };
struct L1 { char p[0x18]; R *x18; char q[0x14]; L1(); void m(int); ~L1(); };
struct L2 { char d[0x1F0]; L2(); ~L2(); };
struct X { HEAPOPS char d[0x100]; X(int, int); void m(char *); };
extern "C" X *func_0011E3C8(int p0, int p1, int p2, int p3) {
    char buf[0x80];
    S s;
    s.init(p3);
    {
        L1 l;
        l.m(func_00232210(&s));
        L2 l2;
        func_0026D950(buf, D_00352B30, l.x18->x198, func_002469A8(D_002F7008));
    }
    X *x = new X(p3, p1);
    x->m(buf);
    return x;
}

