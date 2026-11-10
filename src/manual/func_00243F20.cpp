struct T { virtual void f0(); virtual void f1(); virtual void f2(); virtual void f3(); virtual void f4(); virtual void f5(); virtual int f6(int, int); int g(int, int) asm("func_00243F20"); };
extern "C" int func_00243FE8(T *, int);
int T::g(int a, int b) { if (!func_00243FE8(this, a)) return 0; return f6(a, b); }

