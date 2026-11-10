struct B { char p[8]; virtual ~B(); virtual void f1(); virtual void f2(); virtual void f3(); virtual void f4(); virtual int f5(); };
struct X : B { };
extern "C" B *func_0014ADA8(int);
extern "C" char *func_0014CAF8(int a, char *s) { B *o = func_0014ADA8(a); X *x = dynamic_cast<X *>(o); if (x && o->f5()) return (char *)x + 0x230; *s = 0; return 0; }

