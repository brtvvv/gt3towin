// @flags -fexceptions
struct X { char d[16]; X(const X &); ~X(); };
struct M { void foo(const X &); };
struct T { char pad[0x70]; M m; };
extern "C" void func_00182510(T *t, X x) { t->m.foo(x); }

