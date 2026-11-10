struct O { char p[8]; virtual void f0(); virtual void f1(); virtual int f2(int, int); };
struct TB { virtual void f0(); virtual void f1(); virtual void f2(); virtual void f3(); virtual void f4(); virtual void f5(); virtual void f6(); virtual void f7(); virtual void f8(); virtual void f9(); virtual void f10(); virtual void f11(); virtual void f12(); virtual void f13(); virtual void f14(); virtual void f15(); virtual void f16(); virtual void f17(); virtual void f18(); virtual void f19(); virtual void f20(); virtual void f21(); virtual void f22(); virtual void f23(); virtual void f24();  virtual int f25(); virtual void f26(); virtual void f27(); virtual void f28(); virtual void f29(); virtual void f30(); virtual void f31(); virtual void f32(); virtual void f33(); virtual void f34(int); virtual void f35(); virtual void f36(); };
struct T : TB { int x4; char p[0xC880 - 8]; O *o; };
extern "C" void func_0018A6F8(T *); extern "C" void func_00181F00(T *, int);
extern "C" void func_0018A5D8(T *t) { O *o = t->o; switch (o->f2(t->f25(), t->x4)) { case 2: t->f34(3); break; case 4: func_0018A6F8(t); case 3: func_00181F00(t, 0); t->f36(); break; case 5: t->f34(4); break; } }


