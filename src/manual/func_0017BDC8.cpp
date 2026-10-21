#include "m2c.h"
struct T { char p[0x1C]; VTE *vt; }; struct S { char p[0x18]; T *t; }; extern "C" void func_0017BDC8(S *s, int x) { T *t = s->t; VFN(t, 0x1C, 3)(VTHIS(t, 0x1C, 3), x); }
