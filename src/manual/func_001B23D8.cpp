// @flags -fexceptions
#include "/tmp/claude-1000/b38/hdr.h"
extern char D_00353D58[], D_00333798[], D_00353D60[], D_003337A8[], D_00353D68[], D_003337B8[], D_00353D70[];
extern "C" void func_0026D950(char *, const char *, ...);
extern "C" void func_001BAE10(void *, char *);
struct X { HEAPOPS char d[0x104]; X(const char *, int); };
struct T { char p[0x3C]; void *x3C, *x40, *x44; X *x48; char x4C[0x40];
    void f1(int, char *, char *); void *f2(int, char *, int); void f3(X *, int); };
extern "C" void func_001B23D8(T *t, int a, int b) {
    t->f1(a, D_00333798, D_00353D58);
    t->x3C = t->f2(a, D_00353D60, 1);
    t->x40 = t->f2(a, D_003337A8, 1);
    t->x44 = t->f2(a, D_00353D68, 1);
    t->x48 = new X(D_003337B8, a);
    t->f3(t->x48, 1);
    func_0026D950(t->x4C, D_00353D70, b + 1);
    func_001BAE10(t->x3C, t->x4C);
}

