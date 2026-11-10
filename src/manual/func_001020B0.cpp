// @flags -fexceptions
struct X { char d[0x35210]; X(); };
struct T { int x0; X *x4; };
extern "C" void func_00219D10(X *);
extern "C" void func_001020B0(T *t) { if (!t->x4) { t->x4 = new X; func_00219D10(t->x4); } }

