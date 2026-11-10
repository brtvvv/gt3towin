struct R { char p[0xF4]; int xF4; };
struct G { char p[0x84]; char x84[4]; };
struct B { virtual void f0(); virtual void f1(); virtual void f2(); virtual void f3(); virtual void f4(); virtual void f5(); virtual void f6(); virtual void f7(); virtual void f8(); virtual void f9(); virtual void f10(); virtual void f11(); virtual void f12(); virtual void f13(); virtual void f14(); virtual void f15(); virtual void f16(); virtual void f17(); virtual void f18(); virtual void f19(); virtual void f20(); virtual void f21(); virtual void f22(); virtual void f23(); virtual void f24(); virtual void f25();  virtual R *get(int); };
struct T : B { G *g; char p[0x9784 - 8]; int st; };
extern "C" void func_00181BE0(T *); extern "C" void func_001846C8(T *); extern "C" void func_0017A100(char *, int, int, int);
extern "C" void func_00184568(T *t) { func_00181BE0(t); func_001846C8(t); switch (t->st) { case 2: break; case 0: if (t->get(0x100)->xF4) func_0017A100(t->g->x84, 0x16, 0, 2); if (t->get(0x101)->xF4) func_0017A100(t->g->x84, 0x16, 1, 2); break;
 case 1: if (t->get(0x100)->xF4 || t->get(0x101)->xF4) func_0017A100(t->g->x84, 1, 0, 0); break; } }

