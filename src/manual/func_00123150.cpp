// @flags -fexceptions
#include "../../include/eh_heap.h"
extern "C" char *func_00219680();
extern "C" float func_001DAD78(char *);
struct X { HEAPOPS char d[0x124]; X(void *, float, int, int); };
struct T { char p[0x2E4]; char x2E4[0xB8C]; X *xE70; };
extern "C" void func_00123150(T *t, int p1, int p2, int p3) {
    char *m = t->x2E4;
    char *g = func_00219680() + 0x307C8;
    float f = func_001DAD78(*(char **)(g + 0x538) + 0x204);
    X *x = new X(m, f, p3, p1);
    t->xE70 = x;
}

