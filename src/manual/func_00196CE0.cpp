struct OB { virtual void f0(int, int, int); };
struct O : OB { char d[0xA478]; };
struct T { int x0; O o[2]; };
extern "C" void func_00196CE0(T *t, int a, int b, int c) { O *o = t->o; for (int i = 1; i >= 0; i--) { o->f0(a, b, c); o++; } }

