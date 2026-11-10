extern "C" char *func_00219680(); extern "C" void func_00213E38(char *, char *, int);
struct OB { int a, b; virtual void f0(); virtual void f1(); virtual void f2(); virtual void f3(); virtual void f4(); virtual void f5(); virtual void f6(); virtual void f7(); virtual void f8(); virtual void f9();  virtual int f10(int); };
struct O : OB { char p[0x14]; char x20; void g(int) asm("func_00176D50"); };
void O::g(int a) { char *g = func_00219680() + 0x26160; func_00213E38(g, &x20, f10(a)); }

