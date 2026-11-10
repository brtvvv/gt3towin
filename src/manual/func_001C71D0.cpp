// @flags -fexceptions
#include "/tmp/claude-1000/b15/hdr.h"
extern "C" int func_001C36B0(int, int);
struct X { HEAPOPS char d[0x590]; X(int, int, int); };
extern "C" X *func_001C71D0(void *p0, int p1, int p2, int p3, int (*f)(void *)) {
    int k = func_001C36B0(p1, p3);
    int o = f(p0);
    if (!o) return 0;
    return new X(o, p3, k);
}

