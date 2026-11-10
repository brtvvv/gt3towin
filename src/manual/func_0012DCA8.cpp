// @flags -fexceptions
#include "/tmp/claude-1000/b23/hdr.h"
extern char D_00316568[], D_002F49E0[];
extern "C" void *func_0026D660(int, int);
extern "C" int func_002428C8(const char *, void *, int, int, void *);
extern "C" void func_00249EB0(void *);
struct X { HEAPOPS char p[0xCC]; void *xCC; char q[0x30]; X(int, int); void m(); };
extern "C" X *func_0012DCA8(int p0, int p1, int p2, int p3) {
    void *h = func_0026D660(0x40, 0x4000);
    if (!func_002428C8(D_00316568, h, 0x4000, 1, D_002F49E0)) return 0;
    func_00249EB0(h);
    X *x = new X(p3, 0);
    x->xCC = h;
    x->m();
    return x;
}

