// @flags -fexceptions
#include "/tmp/claude-1000/b39/hdr.h"
extern char D_0030B3B8[];
extern "C" int func_001C36B0(int, int);
struct X { HEAPOPS char d[0x100]; X(int, int); void set(const char *); void m(void *); };
struct T { char p[0x290]; char x290[0x230]; int x4C0; char q[0x38DC - 0x4C4]; int x38DC; char r[0x3A5C - 0x38E0]; X *x3A5C; char s[0x28]; int x3A88, x3A8C, x3A90, x3A94, x3A98, x3A9C, x3AA0; };
extern "C" void func_001055A8(T *t) {
    int arr[7] = { t->x3A88, t->x3A8C, t->x3A90, t->x3A94, t->x3A98, t->x3A9C, t->x3AA0 };
    int o = arr[t->x38DC];
    int k = 0;
    if (o) k = func_001C36B0(t->x4C0, o);
    t->x3A5C = new X(o, k);
    t->x3A5C->set(D_0030B3B8);
    t->x3A5C->m(t->x290);
}

