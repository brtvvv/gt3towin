// @flags -fexceptions
struct X { char d[0x10]; X(char *, int); int m(void *, void *); void m3(); ~X(); };
extern "C" int func_0026D828(void *a, void *b) { char buf[256]; X t(buf, 256); int r = t.m(a, b); t.m3(); return r; }

