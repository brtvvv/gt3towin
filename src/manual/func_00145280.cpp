struct B { char p[8]; virtual void f0(); virtual void f1(); virtual void f2(); virtual void f3(); virtual void f4(); virtual void f5(); virtual void f6(); virtual void f7(); virtual void f8(); virtual void f9(); virtual void f10(); virtual void f11(); virtual void f12(); virtual void f13(); virtual void f14(); virtual void f15(); virtual void f16(); virtual void f17(); virtual void f18(); virtual void f19();  virtual unsigned g(); };
struct T : B { char q[0x34 - 0xC]; char s[4]; };
extern float D_00351560;
extern "C" float func_00246E64(); extern "C" long func_00279868(float); extern "C" void func_001451F0(char *, int, long); extern "C" int func_00240AC8(int, char *, char *, int, int); extern "C" int func_00241AB8(int);
extern "C" int func_00145280(T *t, int p, signed char c) { int n = 0; char *s = t->s; long base = t->g() & 0x3FFFFFFF; long r = func_00279868(func_00246E64() * D_00351560); char buf[0x40]; for (;;) { func_001451F0(s, c, base | ((r & 0xFFF) << 30)); if (func_00240AC8(p, s, buf, 0, 1)) return 0; if (!func_00241AB8(p)) return 1; n++; if (n >= 0x1000) return 0; r++; } }

