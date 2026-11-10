struct TB { virtual void f0(); virtual void f1(); virtual void f2(); virtual void f3(); virtual void f4(); virtual void f5(); };
struct T : TB { int x4, x8; };
extern "C" int func_0026AD38();
extern "C" void func_00101DB0(T *t, int v) { int r = func_0026AD38(); int a = t->x4; t->f5(); t->x8 = v; if (a) t->f4(); if (r) __asm__ volatile("ei"); }

