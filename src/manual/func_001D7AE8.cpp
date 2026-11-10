struct B { int x0; struct B *x4; struct B *x8; int xC; struct B *x10; int p14, p18; virtual void f0(); virtual void f1(); virtual void f2(); virtual void f3(); virtual void f4(); virtual void f5(); virtual void f6(); virtual void f7(); virtual char *f8(); virtual void f9(); virtual void f10(); virtual void f11(); virtual void f12(); virtual void f13(); virtual void f14(); virtual int f15(); virtual void f16(); virtual int f17(void *, int, int); virtual int f18(void *, void *, int, int); };
struct T : B { char q[0x18C - 0x20]; int x18C; };
static inline T *cv(B *q) { return q ? dynamic_cast<T *>(q) : 0; }
extern "C" int func_001D7AE8(T *t, int k, int a, int b, int c) { t->x18C = k; T *p = cv(t->x10); if (!t->f17((void *)a, b, c)) return 0; if (!p) return 1; return p->f18(p, (void *)a, b, c); }

