// @flags -fexceptions
#include "/tmp/claude-1000/b18/hdr.h"
extern char D_0030C0D8[];
struct B0 { HEAPOPS char p[0x1C]; virtual void f0(); };
struct B : B0 { char q[0xA4]; B(); void set(const char *); void m(int); };
struct D2 : B { void *xC4; D2(void *p) : xC4(p) {} };
struct T { char p[0xDC8]; int xDC8; int xDCC[0x21]; char xE50[0x2CC8]; D2 *x3B18; };
extern "C" void func_0010AF50(T *t) {
    int o = t->xDCC[t->xDC8];
    t->x3B18 = new D2(t->xE50);
    t->x3B18->set(D_0030C0D8);
    t->x3B18->m(o);
}

