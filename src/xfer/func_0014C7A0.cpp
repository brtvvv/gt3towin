// @flags -fexceptions
struct R { char p[0x10]; long x18; };
struct X { char d[0x30]; X(); int m(long); ~X(); };
extern "C" R *func_0014CB98(void *);
extern "C" void func_0027FDBC(void *, int);
extern "C" void func_0014C7A0(void *a, void *s) { R *o = func_0014CB98(a); if (o) { X t; func_0027FDBC(s, t.m(o->x18)); } }

