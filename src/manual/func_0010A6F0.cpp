// @flags -fexceptions
#include "/tmp/claude-1000/b29/hdr.h"
extern "C" int func_0023C0E8(int);
struct Q { char p[0x18]; float x18; char q[0xB0]; int xCC; };
struct X { HEAPOPS char p[0x18]; float x18; char q[0xAC]; int xC8; char r[0x654]; X(int, char *, int, int); void m1(int); void m2(int); void m4(int); };
struct T { char p[0xE40]; int xE40; char a[0xC]; char xE50[0x3914 - 0xE50]; int x3914; char b[0x3A2C - 0x3918]; int x3A2C; char c[0x3AD8 - 0x3A30]; Q *x3AD8; int m3(int); };
extern "C" X *func_0010A6F0(T *t, int p1) {
    X *x = new X(t->x3AD8->xCC, t->xE50, 0, t->xE40);
    x->m1(p1);
    x->m2(t->x3914);
    int r = t->m3(0);
    if (r) x->m4(func_0023C0E8(r));
    x->x18 = t->x3AD8->x18;
    if (t->x3A2C == 1) x->xC8 = 3; else x->xC8 = 0;
    return x;
}

