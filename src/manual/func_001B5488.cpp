// @flags -fexceptions
#include "../../include/eh_heap.h"
extern "C" int func_00253458(int);
struct T { char p[0x38]; float x38, x3C; char q[0x118]; float x158, x15C; };
struct X { HEAPOPS char d[0xD4]; X(float, float, float, float, int *); void m(T *); };
extern "C" void func_001B5488(T *t) {
    float a = t->x158, b = t->x15C, c = t->x38, d = t->x3C;
    int flag;
    X *x = new X(a, b, c, d, &flag);
    x->m(t);
    while (flag != 1) func_00253458(1);
}

