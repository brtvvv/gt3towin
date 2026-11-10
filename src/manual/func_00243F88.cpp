struct T { virtual void f0(); virtual void f1(); virtual void f2(); virtual void f3(); virtual void f4(); virtual void f5(); virtual void f6(); virtual int f7(); int g(int) asm("func_00243F88"); };
extern "C" void func_00244068(T *, int);
int T::g(int a) { int r = f7(); func_00244068(this, a); return r; }

