struct N { int x0; N *x4; N *x8; int xC, x10, x14, x18; virtual void f0(); virtual void f1();  virtual void f2(); };
extern "C" void func_001C0A40(void *a, N *n) { do { if (!n->x14) { n->f2(); if (n->x8) func_001C0A40(a, n->x8); } n = n->x4; } while (n); }

