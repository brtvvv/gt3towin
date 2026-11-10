extern char D_003253C8[];
struct W { char p[0x1C]; virtual void f0(); virtual void f1(); virtual void f2(); virtual void f3(); virtual void f4(); virtual void f5(); virtual void f6(); virtual void f7(); virtual void f8(); virtual void f9(); virtual void f10(); virtual void f11(); virtual void f12(); virtual void f13();  virtual void g(int); };
struct T { char p[0x1E4]; int x1E4; };
extern "C" void func_001D7588(T *, int); extern "C" W *func_001D8A08(int, char *);
extern "C" void func_0016C768(T *t, int a) { func_001D7588(t, a); func_001D8A08(t->x1E4, D_003253C8)->g(a); }

