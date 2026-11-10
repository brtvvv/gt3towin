// @flags -fexceptions
#include "/tmp/claude-1000/b22/hdr.h"
extern "C" int func_001C36B0(int, int);
extern "C" int func_0023D4B8(char *);
struct X { HEAPOPS char d[0x208]; X(char *, int, int, int); };
extern "C" X *func_001C45B8(void *p0, int p1, int p2, int p3, char *(*f)(void *)) {
    int k = func_001C36B0(p1, p3);
    char *o = f(p0);
    if (!o) return 0;
    if (func_0023D4B8(o + 0xB0) <= 0) return 0;
    return new X(o, p1, p3, k);
}

