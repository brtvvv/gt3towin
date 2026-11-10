// @flags -fexceptions
#include "../../include/eh_heap.h"
extern "C" void func_001CC410();
extern "C" int func_00286D90();
extern "C" void func_00286DC0();
extern int D_00354098;
struct T { int x0; char x4[4]; };
struct B { HEAPOPS char p[0x1C]; virtual ~B(); B(); };
struct D : B { void *fn; T *a; int b; D(void *f, T *x, int y) : fn(f), a(x), b(y) {} void m(void *); };
extern "C" void func_001CC450(T *t, float f) {
    D *x = new D((void *)func_001CC410, t, (int)(f * 50.0f));
    x->m(t->x4);
    D_00354098 = func_00286D90();
    func_00286DC0();
}

