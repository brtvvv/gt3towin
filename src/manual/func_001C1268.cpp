// @flags -fexceptions
#include "/tmp/claude-1000/b14/hdr.h"
extern "C" int func_001C36B0(int, int);
struct X { HEAPOPS char d[0x100]; X(int, int); };
struct T { char p[0xC4]; X **xC4; };
extern "C" void func_001C1268(T *t, int a1, int a2, int a3) {
    if (a1) { int k = func_001C36B0(a2, a1); t->xC4[a3] = new X(a1, k); }
}

