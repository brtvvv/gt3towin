struct T { virtual void f0(); virtual void f1(); virtual int f2(); };
extern "C" int func_00243D98(T *);
extern "C" int func_00243D40(T *t) { int a = func_00243D98(t); a += t->f2(); return (a + 63) & -64; }

