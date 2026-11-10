// @flags -fexceptions
#include "/tmp/claude-1000/b29/hdr.h"
extern "C" int func_001C36B0(int, int);
extern char D_00352C90[];
struct B0 { HEAPOPS char p[0x1C]; virtual ~B0(); };
struct B : B0 { char r[0xE0]; B(int, int); ~B(); void set(const char *); };
struct D : B { int x100; void *x104; void *x108; int x10C; char x110; D(int a, int b, void *p, void *t) : B(a, b), x100(0), x104(p), x108(t), x10C(0), x110(0) { set(D_00352C90); } };
extern "C" D *func_0012A128(char *t, int p1, int p2, int p3) { int k = func_001C36B0(p1, p3); char *m = t + 0xEF8; D *x = new D(p3, k, m, t); return x; }

