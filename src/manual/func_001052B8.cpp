// @flags -fexceptions
#include "../../include/eh_heap.h"
extern char D_0030B238[];
extern "C" int func_001C36B0(int, int);
struct X { HEAPOPS char p[0xA4]; float xA4; char q[0x58]; X(int, int); void set(const char *); void m(void *); };
struct T { char p[0x290]; char x290[0x230]; int x4C0; char q[0x3A30 - 0x4C4]; int x3A30; char r[0x20]; X *x3A54; char s[8]; int x3A60, x3A64, x3A68, x3A6C; };
extern "C" void func_001052B8(T *t) {
    int arr[4] = { t->x3A60, t->x3A64, t->x3A68, t->x3A6C };
    int o = arr[t->x3A30];
    int k = 0;
    if (o) k = func_001C36B0(t->x4C0, o);
    t->x3A54 = new X(o, k);
    t->x3A54->set(D_0030B238);
    t->x3A54->m(t->x290);
    t->x3A54->xA4 = 1.0f;
}

