// @flags -fexceptions
#include "/tmp/claude-1000/b50/hdr.h"
extern "C" int func_0021EE60();
extern "C" int func_0021E528(int, int, int);
extern "C" int func_00103430(void *);
extern "C" void func_001CF038(int, int);
extern "C" void func_00105238(void *);
struct X { HEAPOPS char d[0x100]; X(int, int); void m(int); };
struct Sub { char p[0x1DC]; int x1DC; char q[0xAE4 - 0x1E0]; int xAE4; };
struct T;
extern "C" void func_0010E328(T *);
extern "C" void func_0010E400(T *);
extern "C" void func_0010E4E0(T *);
extern "C" void func_0010E630(T *);
struct T { char p[0x2E4]; Sub sub; char a[0xDCC - 0x2E4 - sizeof(Sub)]; int xDCC[0x21]; char b[0x38C0 - 0xDCC - 0x84]; int x38C0; char c[0x3A44 - 0x38C4];
    X *x3A44, *x3A48, *x3A4C; char d[0x3AA8 - 0x3A50]; int x3AA8; char e[4]; X *x3AB0, *x3AB4, *x3AB8, *x3ABC, *x3AC0;
    int m(); void m2(X *, int); void m3(int *); };
extern "C" void func_0010EC30(T *t) {
    Sub *sb = &t->sub;
    int v = sb->x1DC;
    int o = t->xDCC[sb->xAE4];
    func_0010E328(t);
    func_001CF038(t->x3AA8, func_00103430(&t->x38C0));
    func_00105238(t->x3AB4);
    int g = func_0021EE60();
    int w = t->x38C0;
    int r = t->m();
    int k = func_0021E528(g, w, r);
    t->x3AB4 = new X(k, v);
    t->m2(t->x3AB4, t->x3AA8);
    t->x3AB4->m(o);
    func_00105238(t->x3A48);
    func_0010E400(t);
    func_00105238(t->x3A4C);
    func_00105238(t->x3A44);
    func_0010E4E0(t);
    func_00105238(t->x3AB0);
    func_00105238(t->x3AB8);
    if (t->x3ABC) func_00105238(t->x3ABC);
    func_00105238(t->x3AC0);
    func_0010E630(t);
    t->m3(&t->x38C0);
}

