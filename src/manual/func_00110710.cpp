// @flags -fexceptions
#include "/tmp/claude-1000/b33/hdr.h"
extern "C" char *func_00219680();
extern "C" int func_00218210(char *);
extern "C" int func_00218230(char *);
extern "C" int func_00218250(char *);
extern char D_0030D678[];
struct X { HEAPOPS char d[0x100]; X(int, int); void set(const char *); };
extern "C" X *func_00110710(int p0, int p1, int p2, int p3) {
    int f = 0;
    if (func_00218210(func_00219680() + 0x23510) || func_00218230(func_00219680() + 0x23510) || func_00218250(func_00219680() + 0x23510) || *(int *)(func_00219680() + 0x44) >= 6) f = 1;
    if (!f) return 0;
    X *x = new X(p3, p1);
    x->set(D_0030D678);
    return x;
}

