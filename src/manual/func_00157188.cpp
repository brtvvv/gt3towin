// @flags -fexceptions
struct X { char d[0x2A0]; X(); int m(void *); ~X(); };
extern "C" int func_00157188(void *a) { X t; return t.m(a); }

