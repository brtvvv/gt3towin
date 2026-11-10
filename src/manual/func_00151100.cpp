struct N { N *x0, *x4; virtual void f0(); virtual void f1(); virtual void f2(); virtual void f3();  virtual int f4(int); };
struct L { N *g(int a, N *n) asm("func_00151100"); };
N *L::g(int a, N *n) { if (!n) return 0; while ((n = n->x4)) if (n->f4(a)) return n; return 0; }

