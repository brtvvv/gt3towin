// @flags -fexceptions
#include "../../include/eh_heap.h"
extern "C" char *func_00219680();
extern "C" int func_00219F60(char *);
struct T { char p[0x104]; int x104, x108; };
struct U { char p[0x44]; float x44, x48, x4C, x50, x54; };
struct X { HEAPOPS char d[0x128]; X(int, int, int, int, float, float, float, float, int, int, int, float, int); };
extern "C" void func_0011B660(int p0, T *p1, U *p2, int p3, int a4, int a5, int a6, int a7) {
    int n = 1;
    if (func_00219F60(func_00219680())) n = 2;
    float d = p2->x54;
    float c = p2->x50;
    float a = p2->x44 + c * 0.5f;
    float b = 448.0f - (p2->x48 + d * 0.5f);
    new X(a4, a5, a6, p1->x108, a, b, c, d, n, 1, a7, 54.0f, 0);
}

