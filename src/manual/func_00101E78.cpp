struct NB { virtual void f0(); virtual void f1(); virtual void f2(); virtual void f3(); virtual void f4();  virtual void f5(); }; struct N : NB { int x4, x8, xC, x10; N *x14; };
struct T { void *x0; char p[0x18]; N *x1C; };
extern char D_00309E38[]; extern "C" void func_00101BD0(T *, int);
extern "C" void func_00101E78(T *t, int a) { t->x0 = D_00309E38; for (N *n = t->x1C; n; n = n->x14) { n->f5(); n->xC = 0; } func_00101BD0(t, a); }

