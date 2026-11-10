// @flags -fexceptions
#include "/tmp/claude-1000/b47/hdr.h"
extern char D_00352960[], D_00352968[];
struct XS { HEAPOPS char d[0x100]; XS(const char *, int); };
struct XB0 { char p[0x1C]; virtual ~XB0(); };
struct XA : XB0 { char r[0xE0]; XA(int, int); ~XA(); };
struct D : XA { void *x100; XS *x104, *x108, *x10C; float x110, x114; int x118, x11C, x120; D(void *, int, int, float) asm("func_00116EE8"); };
D::D(void *p, int b, int c, float f) : XA(b, c), x100(p), x110(f), x114(1.0f), x118(0), x11C(0), x120(0) {
    x104 = new XS(D_00352960, c);
    x108 = new XS(D_00352968, c);
    x10C = new XS(D_00352960, c);
}

