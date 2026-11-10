// @flags -fexceptions
#include "../../include/eh_heap.h"
extern "C" int func_00253458(int);
struct T { char p[0x38]; float x38, x3C; char q[0x118]; float x158, x15C; char *x160, *x164, *x168; };
struct X { HEAPOPS char d[0xD4]; X(float, float, float, float, int *); void m(T *); void m2(char *, char *, char *); };
extern "C" void func_001B6050(T *t) {
    float a = t->x158, b = t->x15C, c = t->x38, d = t->x3C;
    int flag;
    X *x = new X(a, b, c, d, &flag);
    x->m2(t->x168 + 8, t->x160 + 8, t->x164 + 8);
    x->m(t);
    while (flag != 1) func_00253458(1);
}

