struct N { int a; N *next; N *child; char p[8]; int f; char q[4]; virtual void f0(); virtual void f1();  virtual void g(); };
extern "C" void func_001C0A40(void *c, N *n) { do { if (!n->f) { n->g(); if (n->child) func_001C0A40(c, n->child); } n = n->next; } while (n); }
