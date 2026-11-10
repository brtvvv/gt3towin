// @flags -fexceptions
struct X { char d[0x30]; X(); void m(int); ~X(); };
extern "C" int func_00232210(void *);
extern "C" void func_0012FC58(void *a) { X t; t.m(func_00232210(a)); }

