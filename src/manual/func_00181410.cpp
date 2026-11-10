struct O { virtual void f0(); virtual void f1(); virtual void f2(); virtual float a(); virtual float b(); virtual float c(); };
struct S { char p[0x8]; int x8; char q[0x80 - 0xC]; int x80; };
struct Z { char p[0x38]; S **x38; };
struct B { virtual void f0(); virtual void f1(); virtual void f2(); virtual void f3(); virtual void f4(); virtual void f5();  virtual O *g(); };
struct T : B { Z *x4; };
extern "C" void func_001A9910(int, char *); extern "C" int *func_002279D0(int, float, float, float); extern "C" void func_001AA528(S *, char *, int);
extern "C" void func_00181410(T *t) { S *s = *t->x4->x38; O *o = t->g(); func_001A9910((*t->x4->x38)->x80, (char *)t + 0x9830); float a = o->a(); float b = o->b(); float c = o->c(); int k; if (!s->x8) k = 0; else k = *func_002279D0(s->x8, a, b, c); func_001AA528(s, (char *)t + 0x9830, k); }

