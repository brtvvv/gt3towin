struct B0 { char p[8]; virtual void f0(); virtual void f1(); virtual void f2(); virtual void f3(); virtual void f4(); virtual void f5(); virtual void f6();  virtual char *data(); virtual int len(); };
extern "C" B0 *func_0014ADA8(int);
extern "C" void func_00280088(char *, char *, int);
extern "C" void func_0014C048(int a, char *buf) { B0 *o = func_0014ADA8(a); if (o) { int n = o->len(); func_00280088(buf, o->data(), n); buf[n] = 0; } else *buf = 0; }
