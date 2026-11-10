// @flags -fexceptions
#include "/tmp/claude-1000/b9/hdr.h"
extern char D_00352658[];
struct S { char d[0x40]; S(const char *, int); };
struct X { HEAPOPS char d[0x100]; X(S *, int); };
struct T { char p[0x4C0]; int x4C0; char q[0x38DC - 0x4C4]; int x38DC; char r[0x3974 - 0x38E0]; int x3974; int m(int); };
extern "C" void func_00108B20(T *t, int k) {
    int *p = k != 2 ? &t->x38DC : &t->x3974;
    int v = t->x4C0;
    int r = t->m(*p);
    S s(D_00352658, r);
    new X(&s, v);
}

