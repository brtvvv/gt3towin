struct OB { int a, b; virtual void f0(); virtual void f1(); virtual void f2(); virtual void f3(); virtual void f4(); virtual void f5(); virtual void f6();  virtual char *f7(); virtual int f8(); };
extern "C" OB *func_0014ADA8(int); extern "C" void func_00280088(char *, char *, int);
extern "C" void func_0014C048(int a, char *b) { OB *o = func_0014ADA8(a); if (o) { int n = o->f8(); func_00280088(b, o->f7(), n); b[n] = 0; } else *b = 0; }

