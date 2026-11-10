// @flags -fexceptions
#include "../../include/eh_heap.h"
extern char D_00352680[];
extern "C" void func_001CF038(int, int);
extern "C" void func_00105238(void *);
struct X { HEAPOPS char d[0x100]; X(const char *, int); void m(int); };
struct Sub { char p[0x1DC]; int x1DC; char q[0xAE4 - 0x1E0]; int xAE4; };
struct T;
extern "C" void func_00108A70(T *);
extern "C" X *func_00108B20(T *, int);
extern "C" X *func_00108BB8(T *, int);
extern "C" int func_001089F8(T *, int, int);
extern "C" X *func_00108958(T *, int, int);
struct T { char p[0x2E4]; Sub sub; char a[0xDCC - 0x2E4 - sizeof(Sub)]; int xDCC[0x21]; char b[0x38DC - 0xDCC - 0x84]; int x38DC; char c[0x3A38 - 0x38E0];
    X *x3A38; char c2[8]; X *x3A44, *x3A48, *x3A4C; char d[0x3AC8 - 0x3A50]; int x3AC8; void m2(X *, int); void m3(int *); };
extern "C" void func_00109020(T *t) {
    Sub *sb = &t->sub;
    int *pp = &t->x38DC;
    int o = t->xDCC[sb->xAE4];
    func_00108A70(t);
    func_001CF038(t->x3AC8, t->x38DC);
    t->m3(pp);
    func_00105238(t->x3A48);
    X *r = func_00108B20(t, 0);
    t->x3A48 = r;
    t->m2(r, t->x3AC8);
    t->x3A48->m(o);
    func_00105238(t->x3A44);
    t->x3A44 = new X(D_00352680, sb->x1DC);
    t->m2(t->x3A44, t->x3AC8);
    t->x3A44->m(o);
    func_00105238(t->x3A4C);
    r = func_00108BB8(t, 0);
    t->x3A4C = r;
    t->m2(r, t->x3AC8);
    t->x3A4C->m(o);
    func_00105238(t->x3A38);
    r = func_00108958(t, func_001089F8(t, t->x38DC, 0), 0);
    t->x3A38 = r;
    t->m2(r, t->x3AC8);
    t->x3A38->m(o);
}

