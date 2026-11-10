// @flags -fexceptions
#include "../../include/eh_heap.h"
extern char D_0031E460[];
extern "C" int func_001C36B0(int, int);
struct V3 { float a, b, c; void set(float x, float y, float z) { a = x; c = z; b = y; } void clear() { a = 0; b = 0; c = 0; } };
struct D;
struct XS { HEAPOPS char p[0x18]; float x18; char q[4]; V3 v20, v2C; float x38, x3C; char r[0x5C]; D *x9C; int xA0; char s[0x5C]; XS(const char *, int); void m(D *); };
struct XB0 { HEAPOPS char p[0x18]; float x18; virtual void f0(); };
struct XM : XB0 { V3 v20, v2C; float x38, x3C; char r[0xC0]; XM(int, int); ~XM(); };
struct D : XM { XS *x100; int x104; int x108;
    D(int a, int b, int p0, int p1) : XM(a, b), x108(p0) {
        x100 = new XS(D_0031E460, p1);
        XS *q = x100;
        q->x38 = 0;
        q->x3C = x3C;
        q->v20.set(0, 0, x38 * 0.5f);
        q->v2C.clear();
        q->x18 = x18 + 1.0f;
        q->m(this);
        x104 = 0;
        x100->xA0 = 3;
        x100->x9C = this;
    } };
extern "C" D *func_0014D858(int p0, int p1, int p2, int p3) { int k = func_001C36B0(p1, p3); D *x = new D(p3, k, p0, p1); return x; }

