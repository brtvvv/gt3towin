// @flags -fexceptions
#include "../../include/eh_heap.h"
extern char D_00352828[], D_00352830[], D_00352838[], D_00352840[], D_00352848[], D_00352850[], D_00352858[], D_00352860[];
extern "C" void func_00110140();
extern "C" int func_001C3670(int, char *);
struct X { HEAPOPS char d[0xD8]; X(int, void *, int); };
extern "C" void func_001C1268(X *, int, int, int);
extern "C" X *func_00110160(int p0, int p1) {
    X *x = new X(8, (void *)func_00110140, p0);
    func_001C1268(x, func_001C3670(p1, D_00352828), p1, 0);
    func_001C1268(x, func_001C3670(p1, D_00352830), p1, 1);
    func_001C1268(x, func_001C3670(p1, D_00352838), p1, 2);
    func_001C1268(x, func_001C3670(p1, D_00352840), p1, 3);
    func_001C1268(x, func_001C3670(p1, D_00352848), p1, 4);
    func_001C1268(x, func_001C3670(p1, D_00352850), p1, 5);
    func_001C1268(x, func_001C3670(p1, D_00352858), p1, 6);
    func_001C1268(x, func_001C3670(p1, D_00352860), p1, 7);
    return x;
}

