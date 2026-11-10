// @flags -fexceptions
#include "/tmp/claude-1000/b43/hdr.h"
extern char D_003525D0[];
extern "C" void func_00105238(void *);
extern "C" void func_0026D950(char *, const char *, ...);
struct V3 { float a, b, c; void set(float x, float y, float z) { a = x; c = z; b = y; } void flip() { set(0, 0, 640.0f - c); } };
struct X { HEAPOPS char p[0x20]; V3 v20; char q[0xC]; float x38, x3C; char r[0xC0]; X(char *, int); void m(int); };
struct Sub { char p[0x1DC]; int x1DC; char q[0xAE4 - 0x1E0]; int xAE4; };
struct T { char p[0x2E4]; Sub sub; char a[0xDCC - 0x2E4 - sizeof(Sub)]; int xDCC[0x21]; char b[0x38DC - 0xDCC - 0x84]; int x38DC; char c[0x3974 - 0x38E0]; int x3974; char d[0x3A48 - 0x3978]; X *x3A48; char e[0x3B50 - 0x3A4C]; X *x3B50; int m(int); };
extern "C" void func_001068C8(T *t, int k) {
    X **p = k == 2 ? &t->x3B50 : &t->x3A48;
    int *q = k != 2 ? &t->x38DC : &t->x3974;
    Sub *sb = &t->sub;
    int o = t->xDCC[sb->xAE4];
    int v = sb->x1DC;
    func_00105238(*p);
    char buf[0x40];
    int r = t->m(*q);
    func_0026D950(buf, D_003525D0, r);
    *p = new X(buf, v);
    X *x = *p;
    x->x38 *= 0.75f;
    x->x3C *= 0.75f;
    if (k == 2) x->v20.flip();
    (*p)->m(o);
}

