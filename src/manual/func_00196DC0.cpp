struct EB { virtual void f0(); virtual void f1(); virtual void f2(); };
struct E : EB { char d[0xA47C - 4]; };
struct T { int x0; E e[2]; };
extern "C" void func_00196DC0(T *t) { E *e = t->e; for (int i = 0; i < 2; i++, e++) e->f2(); }

