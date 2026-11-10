// @flags -fexceptions
#include "../../include/eh_heap.h"
extern "C" int func_001C36B0(int, int);
extern char D_00352C90[];
struct B0 { HEAPOPS char p[0x1C]; virtual ~B0(); };
struct B : B0 { char r[0xE0]; B(int, int); ~B(); void set(const char *); };
struct D : B { void *x100; D(int a, int b, void *p) : B(a, b), x100(p) { set(D_00352C90); } };
extern "C" D *func_00129CB0(char *t, int p1, int p2, int p3) { int k = func_001C36B0(p1, p3); char *m = t + 0xEF8; D *x = new D(p3, k, m); return x; }

