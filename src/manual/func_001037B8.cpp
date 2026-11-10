// @flags -fexceptions
#include "/tmp/claude-1000/b51/hdr.h"
extern char D_0030AB78[], D_00352500[], D_00352508[];
extern "C" void func_0026D950(char *, const char *, ...);
struct XS { HEAPOPS char d[0x100]; XS(const char *, int); };
struct XB0 { char p[0x1C]; virtual ~XB0(); };
struct XA : XB0 { char r[0xE0]; XA(int, int); ~XA(); };
struct D : XA { XS *x100[8]; XS *x120, *x124; D(int, int) asm("func_001037B8"); };
D::D(int a, int b) : XA(a, b) {
    for (int i = 0; i < 8; i++) { char buf[0x40]; func_0026D950(buf, D_0030AB78, i + 1); x100[i] = new XS(buf, b); }
    x120 = new XS(D_00352500, b);
    x124 = new XS(D_00352508, b);
}

