struct N { char p[0x1E4]; int x1E4; N *x1E8, *x1EC; };
struct B0 { char p[0x1C]; virtual void f0(); virtual void f1(); virtual void f2(); virtual void f3(); virtual void f4(); virtual void f5(); virtual void f6(); virtual void f7(); virtual void f8(); virtual void f9(); virtual void f10(); virtual void f11(); virtual void f12(); virtual void f13(); virtual void f14(); virtual void f15(); virtual void f16(); virtual void f17(); virtual void f18(); virtual void f19(); virtual void f20(); virtual void f21(); virtual void f22(); virtual void f23(); virtual void f24(); virtual void f25(); virtual void f26(); virtual void f27(); virtual void f28();  virtual void f29(N *); };
struct T : B0 { char q[0x208 - 0x20]; N *x208, *x20C, *x210; int x214; };
extern "C" int func_0026AD38(); extern "C" void func_001D5E90(T *);
extern "C" void func_001D5DC0(T *t, N *n, int flag) { N *cur = t->x210; int r = func_0026AD38(); N *p = n->x1E8, *q = n->x1EC; if (!p) t->x208 = q; else p->x1EC = q; if (!q) t->x20C = p; else q->x1E8 = p;
 t->x214--; n->x1E8 = 0; n->x1EC = 0; n->x1E4 = 0; t->x210 = 0; if (n == cur) cur = q ? q : p; if (r) __asm__ volatile("ei"); t->f29(cur); if (flag) func_001D5E90(t); }

