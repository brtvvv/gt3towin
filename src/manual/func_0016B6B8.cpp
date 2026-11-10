struct E { int d[4]; };
struct C { unsigned n; char p[2]; signed char x6; char q[9]; E e[1]; };
struct P { char p[0x1080]; C c; };
struct O { char p[0x1C]; virtual void f0(); virtual void f1(); virtual void f2(); virtual void f3(); virtual void f4(); virtual void f5(); virtual void f6(); virtual void f7(); virtual void f8(); virtual void f9(); virtual void f10(); virtual void f11(); virtual void f12(); virtual void f13(); virtual void f14(); virtual void f15(); virtual void f16(); virtual void f17(); virtual void f18(); virtual void f19(); virtual void f20(); virtual void f21(); virtual void f22(); virtual void f23(); virtual void f24(); virtual void f25(); virtual void f26(); virtual void f27(); virtual void f28(); virtual void f29(); virtual void f30();  virtual void f31(int); };
struct T { char p[0x248]; P *x248; int x24C; O *x250; };
extern "C" int func_0026AD38(); extern "C" int func_001D5C08(T *, unsigned); extern "C" void func_0016A890(int, E *);
extern "C" void func_0016B6B8(T *t) { unsigned i = 0; int r = func_0026AD38(); C *c = &t->x248->c; for (; i < c->n; i++) func_0016A890(func_001D5C08(t, i), &c->e[i]); t->x250->f31(c->x6 != 0); if (r) __asm__ volatile("ei"); }

