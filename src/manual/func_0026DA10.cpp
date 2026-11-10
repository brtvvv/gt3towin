// @flags -fexceptions
struct X { char d[0x10]; X(void *); int m(void *, void *); void m2(int); ~X(); };
extern "C" int func_0026DA10(void *a, void *b, void *c) { X t(a); int r = t.m(b, c); t.m2(0); return r; }

