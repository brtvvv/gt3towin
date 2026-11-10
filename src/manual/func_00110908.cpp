// @flags -fexceptions
#include "/tmp/claude-1000/b28/hdr.h"
extern char D_0030D708[], D_003528B8[];
extern "C" char *func_00219680();
extern "C" int func_0021EE60();
extern "C" int func_0021E528(int, int, char *);
extern "C" int func_0021E568(int, int, char *);
extern "C" void func_0026D950(char *, const char *, ...);
struct X { HEAPOPS char d[0x100]; X(char *, int, int); };
extern "C" X *func_00110908(int p0, int p1, int p2, int p3, int p4) {
    int a = func_0021E528(func_0021EE60(), p4, D_0030D708);
    int b = func_0021E568(func_0021EE60(), p4, D_0030D708);
    if (*(int *)(func_00219680() + 0x44) < b) return 0;
    char buf[0x40];
    func_0026D950(buf, D_003528B8, a);
    return new X(buf, p1, p3);
}

