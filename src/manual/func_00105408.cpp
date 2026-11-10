// @flags -fexceptions
#include "../../include/eh_heap.h"
extern char D_0030B2F8[];
extern "C" int func_001C36B0(int, int);
extern "C" int func_0021EE60();
extern "C" int func_0021E568(int, int, int);
struct X { HEAPOPS char p[0xA4]; float xA4; char q[0x58]; X(int, int); void set(const char *); void m(void *); };
struct T { char p[0x290]; char x290[0x230]; int x4C0; char q[0x38C0 - 0x4C4]; int x38C0; char r[0x3A58 - 0x38C4]; X *x3A58; char s[0x14]; int x3A70, x3A74, x3A78, x3A7C, x3A80, x3A84; int m(); };
extern "C" void func_00105408(T *t) {
    int arr[7] = { t->x3A70, t->x3A74, t->x3A78, t->x3A7C, t->x3A80, t->x3A84, 0 };
    int k = 0;
    int g = func_0021EE60();
    int v = t->x38C0;
    int o = arr[func_0021E568(g, v, t->m())];
    if (o) k = func_001C36B0(t->x4C0, o);
    t->x3A58 = new X(o, k);
    t->x3A58->set(D_0030B2F8);
    t->x3A58->m(t->x290);
    t->x3A58->xA4 = 1.0f;
}

