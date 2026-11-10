struct R { int a, b; };
struct B0 { int x0, x4; virtual void f0(); virtual void f1(); virtual void f2(); virtual void f3(); virtual void f4(); virtual void f5(); virtual void f6(); virtual long f7(char *); virtual void f8(); virtual void f9(); virtual void f10(char *); };
struct X : B0 { char p[0x258 - 0xC]; char x258[4]; };
struct T : B0 { char p[0x20 - 0xC]; int x20, x24, x28; };
static inline X *cv(B0 *q) { return q ? dynamic_cast<X *>(q) : 0; }
extern "C" long func_00151C00(T *, char *); extern "C" B0 *func_0014ADA8(char *); extern "C" void func_001C5E88(int); extern "C" void func_0027FDBC(char *, char *);
extern "C" long func_00153CF8(T *t, char *u) {
  R rr[2];
  if (t->x20) return func_00151C00(t, u);
  if (!t->x24) {
    if (*(int *)(u + 0xE8)) {
      X *x = dynamic_cast<X *>(func_0014ADA8(u));
      if (x) { func_001C5E88(7); t->f10(u); func_0027FDBC(u + 0x3077C, x->x258); rr[0].a = 9; rr[0].b = 1; return *(long *)&rr[0]; }
    }
  } else if (++t->x28 == 4) {
    X *x = cv(func_0014ADA8(u));
    if (x) func_0027FDBC(x->x258, u + 0x3077C);
    t->x24 = 0;
    return t->f7(u);
  }
  rr[1].a = 0; rr[1].b = 0; return *(long *)&rr[1];
}
