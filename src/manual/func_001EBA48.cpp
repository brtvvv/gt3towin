struct O { char p[0xE3A8]; virtual void f0(); virtual void f1(); virtual void f2(); virtual void f3(); virtual void f4(); virtual void f5(); virtual void f6(); virtual void f7(); virtual void f8(); virtual void f9(); virtual void f10(); virtual void f11(); virtual void f12(); virtual void f13(); virtual void f14(); virtual void f15(); virtual void f16(); virtual void f17(); virtual void f18(); virtual void f19(); virtual void f20(); virtual void f21(); virtual void f22(); virtual void f23(); virtual void f24(); virtual void f25(); virtual void f26(); virtual void f27(); virtual void f28();  virtual void f29(); };
struct Q { char p[0x434]; short x434; char q[0x4E0 - 0x436]; unsigned char x4E0; };
struct T { int x0; O *x4; char p[0xF84 - 8]; Q q; };
extern "C" int func_001EBA48(T *t) { Q *q = &t->q; int n = q->x434; t->x4->f29(); if (n <= 0) n = 1; else if (q->x4E0) n--; return n; }

