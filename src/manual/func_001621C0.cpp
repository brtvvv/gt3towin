// @flags -fexceptions
#include "/tmp/claude-1000/b28/hdr.h"
extern char D_00322750[], D_00322760[];
extern "C" char *func_00219680();
extern "C" int func_00235100(char *);
struct X { HEAPOPS char d[0x100]; X(const char *, int, int); };
extern "C" X *func_001621C0(int p0, int p1, int p2, int p3) {
    char *o = *(char **)(({ char *_g = func_00219680() + 0x307C8; _g; }) + 0x540);
    if (o && func_00235100(o + 0x10)) return new X(D_00322750, p1, p3);
    return new X(D_00322760, p1, p3);
}

