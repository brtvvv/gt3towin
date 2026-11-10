// @flags -fexceptions
#include "/tmp/claude-1000/b14/hdr.h"
struct B { HEAPOPS char p[0x1C]; virtual ~B(); B(); };
struct D : B { int x20; D(int v) : x20(v) {} void m(void *); };
struct T { int x0; int x4; int x8; };
extern "C" void func_001C29E8(T *t, void *a) { if (t->x4) { D *x = new D(t->x0); x->m(a); } t->x8 = 1; }

