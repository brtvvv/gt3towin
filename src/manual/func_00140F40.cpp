// @flags -fexceptions
#include "/tmp/claude-1000/b20/hdr.h"
extern char D_0031BA70[];
extern "C" char *func_00219680();
struct V { char p[0x3C]; int x3C; int x40; int x44; };
struct S { char d[0x40]; S(const char *, int); };
struct X { HEAPOPS char d[0x100]; X(S *, int, int); };
extern "C" void func_00140F40(int p0, int p1, int p2, int p3, int p4) {
    int n;
    if (!p4) n = ({ V *_g = (V *)(func_00219680() + 0x2FF38); _g; })->x3C;
    else n = ({ V *_g = (V *)(func_00219680() + 0x2FF38); _g; })->x44;
    S s(D_0031BA70, n + 1);
    new X(&s, p1, p3);
}

