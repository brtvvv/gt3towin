// @flags -fexceptions
#include "/tmp/claude-1000/b16/hdr.h"
extern "C" void func_001B37E0(void);
struct B { HEAPOPS char p[0x1C]; virtual ~B(); B(); };
struct D : B { void *fn; int a, b; D(void *f, int x, int y) : fn(f), a(x), b(y) {} void m(void *); };
extern "C" void func_001B3800(void *p0, int p1, int p2) { D *x = new D((void *)func_001B37E0, p1, p2); x->m(p0); }

