// @flags -fexceptions
extern char D_00352688[];
extern "C" int func_00232210(void *);
struct X { char d[0x1F0]; X(); int m(int); char *m2(); ~X(); };
extern "C" char *func_0010A338(void *a0, void *a1) { X t; if (t.m(func_00232210(a1))) return t.m2(); return D_00352688; }

