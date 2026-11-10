struct OB { char p[0x2140]; virtual void f0(int); };
struct T { unsigned n; int x4; OB **x8; };
extern "C" void func_00179440(T *t) { if (t->x8) { for (unsigned i = 0; i < t->n; i++) if (t->x8[i]) t->x8[i]->f0(3); } t->n = 0; }

