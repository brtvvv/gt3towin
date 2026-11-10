struct U { char p[0x18]; int *x18; };
struct T { char p[0x54]; virtual void f0(); virtual void f1(); virtual void f2(); virtual void f3(); virtual void f4(); virtual void f5(); virtual void f6(); virtual void f7(); virtual void f8(); virtual void f9(); virtual void f10(); virtual void f11(); virtual void f12();  virtual void f13(U *, int, int); void g(U *) asm("func_00182448"); };
extern "C" void func_0017B260(U *); extern "C" void func_0017B2A0(U *, int, int);
void T::g(U *u) { int *p = u->x18; f13(u, 1, *p); func_0017B260(u); func_0017B2A0(u, 0, *p - 1); }

