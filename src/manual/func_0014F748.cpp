struct A { virtual void f0(); virtual void f1(); virtual void f2(); virtual void f3(); virtual int f4(); virtual void f5(); virtual int f6(); virtual int f7(); virtual void f8(); virtual void f9(); };
struct T { A *x0; int x4, x8, xC, x10; char p[8]; int x1C; };
extern "C" A *func_0014BCF8(); extern "C" int func_0014F590(T *);
extern "C" void func_0014F748(T *t) { if (!func_0014BCF8()->f4()) t->x1C = 0; if (func_0014F590(t)) return; int b = t->x10; t->xC = 0; t->x4 = 0; t->x8 = 0; if (b) return; if (!t->x0->f7() || t->x0->f4()) { if (!t->x0->f6()) { t->xC = 0; return; } } t->x0->f8(); t->x0->f9(); t->xC = 0; }

