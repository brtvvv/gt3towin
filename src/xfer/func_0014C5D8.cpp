// @flags -fexceptions
struct R { char p[0x18]; long x18; };
struct X { char d[0x30]; X(); int m(long); ~X(); };
extern "C" R *func_0014CAF8(void *);
extern "C" void func_0027FDBC(void *, int);
extern "C" void func_0014C5D8(void *a, void *s) { R *o = func_0014CAF8(a); if (o) { X t; func_0027FDBC(s, t.m(o->x18)); } }

