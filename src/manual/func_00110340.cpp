// @flags -fexceptions
#include "/tmp/claude-1000/b72/hdr.h"
extern char D_00352868[], D_00352870[], D_00352878[], D_00352880[], D_00352888[], D_00352890[], D_00352898[], D_003528A0[], D_003528A8[], D_003528B0[],  D_0030D668[];
extern "C" void func_00110308();
extern "C" int func_001C3670(int, char *);
struct X { HEAPOPS char d[0xD8]; X(int, void *, int); };
extern "C" void func_001C1268(X *, int, int, int);
extern "C" X *func_00110340(int p0, int p1) {
    X *x = new X(11, (void *)func_00110308, p0);
    func_001C1268(x, func_001C3670(p1, D_00352868), p1, 0);
    func_001C1268(x, func_001C3670(p1, D_00352870), p1, 1);
    func_001C1268(x, func_001C3670(p1, D_00352878), p1, 2);
    func_001C1268(x, func_001C3670(p1, D_00352880), p1, 3);
    func_001C1268(x, func_001C3670(p1, D_00352888), p1, 4);
    func_001C1268(x, func_001C3670(p1, D_00352890), p1, 5);
    func_001C1268(x, func_001C3670(p1, D_00352898), p1, 6);
    func_001C1268(x, func_001C3670(p1, D_003528A0), p1, 7);
    func_001C1268(x, func_001C3670(p1, D_003528A8), p1, 8);
    func_001C1268(x, func_001C3670(p1, D_003528B0), p1, 9);
    func_001C1268(x, func_001C3670(p1, D_0030D668), p1, 10);
    return x;
}

