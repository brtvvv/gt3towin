// @flags -fexceptions
#include "/tmp/claude-1000/b56/hdr.h"
extern "C" int func_00232210(void *);
struct S { char d[0x40]; void init(int); void set(int); };
struct R { char p[0x1C4]; unsigned char a0, b0; unsigned short c0; unsigned char a1, b1; unsigned short c1; unsigned char a2, b2; unsigned short c2; };
struct L { char p[0x18]; R *x18; char q[0x14]; L(); void m(int); ~L(); };
struct X { HEAPOPS char d[0x100]; X(int, int); void m(S *); };
extern "C" X *func_0011DFF0(int p0, int p1, int k) {
    S s;
    s.init(p1);
    int v = 0;
    {
        L l;
        l.m(func_00232210(&s));
        switch (k) {
        case 0: { R *r = l.x18; v = r->a0 * 60000 + r->b0 * 1000 + r->c0; break; }
        case 1: { R *r = l.x18; v = r->a1 * 60000 + r->b1 * 1000 + r->c1; break; }
        case 2: { R *r = l.x18; v = r->a2 * 60000 + r->b2 * 1000 + r->c2; break; }
        }
    }
    s.set(v);
    X *x = new X(p1, p0);
    x->m(&s);
    return x;
}

