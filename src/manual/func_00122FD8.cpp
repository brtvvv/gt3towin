// @flags -fexceptions
extern "C" char *func_00219680();
extern "C" int func_00232210(void *);
extern "C" void func_0023C8E8(void *, int);
struct X { char d[0x30]; X(); void m(int); int m2(int); ~X(); };
extern "C" void func_00122FD8(void *p0, void *p1) { char *s = func_00219680() + 0x3080C; X t; t.m(func_00232210(s)); func_0023C8E8(p1, t.m2(4)); }

