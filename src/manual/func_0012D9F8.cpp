// @flags -fexceptions
#include "../../include/eh_heap.h"
extern char D_00352E20[];
extern "C" int sprintf(char *, const char *, ...);
extern "C" char *func_00219680();
extern "C" int func_001C36B0(int, int);
extern "C" void func_0023B938(char *, int *, int *);
extern "C" int func_0023BB98(int);
extern "C" void func_0023C9B0(char *, int);
struct T { char p[0x1C4]; unsigned char a0, b0; unsigned short c0; unsigned char a1, b1; unsigned short c1; unsigned char a2, b2; unsigned short c2; };
struct R { char p[0x18]; T *x18; };
struct O { char p[0x54]; virtual void f0(); virtual void f1(); virtual void f2(); virtual void f3(); virtual void f4(); virtual void f5(); virtual void f6(); virtual void f7(); virtual void f8(); virtual void f9(); virtual void f10(); virtual void f11(); virtual void f12(); virtual void f13();  virtual R *get(); };
struct G { char p[0x34]; O *x34; };
extern G *D_00352E94;
struct XB0 { char p[0x1C]; virtual ~XB0(); };
struct XB : XB0 { char q[0x180 - 0x20]; XB(int, int); };
struct X : XB { HEAPOPS X(int a, int b) : XB(a, b) {} void m(char *); };
extern "C" X *func_0012D9F8(int p0, int p1, int p2, int p3, int p4) {
    int s = func_001C36B0(p1, p3);
    X *x = new X(p3, s);
    char buf[0x80];
    R *r = D_00352E94->x34->get();
    switch (p4) {
    case 0: { int a, b; func_0023B938(func_00219680() + 0x3080C, &a, &b); int v = func_0023BB98(a); sprintf(buf, D_00352E20, v, b + 1); break; }
    case 1: { T *t = r->x18; func_0023C9B0(buf, t->a0 * 60000 + t->b0 * 1000 + t->c0); break; }
    case 2: { T *t = r->x18; func_0023C9B0(buf, t->a1 * 60000 + t->b1 * 1000 + t->c1); break; }
    case 3: { T *t = r->x18; func_0023C9B0(buf, t->a2 * 60000 + t->b2 * 1000 + t->c2); break; }
    }
    x->m(buf);
    return x;
}

