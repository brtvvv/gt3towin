// @flags -fexceptions
#include "/tmp/claude-1000/b32/hdr.h"
extern "C" int func_001C36B0(int, int);
struct B0 { char p[0x1C]; virtual ~B0(); };
struct X : B0 { HEAPOPS char q[0x18]; float x38, x3C; char r[0xC0]; X(int, int); };
struct T { char p[0x114]; float x114, x118; int x11C, x120; int x124; X **x128; };
extern "C" void func_0010CD88(T *t, int i, int p2, int p3) {
    if (i < 0 || i >= t->x124) return;
    delete t->x128[i];
    int k = func_001C36B0(p3, p2);
    t->x128[i] = new X(p2, k);
    t->x114 = t->x128[i]->x38;
    t->x118 = t->x128[i]->x3C;
}

