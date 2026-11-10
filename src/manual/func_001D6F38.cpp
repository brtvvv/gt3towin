struct B { int x0; struct B *x4; struct B *x8; int xC; struct B *x10; int p14, p18; virtual void f0(); virtual void f1(); virtual void f2(); virtual void f3(); virtual void f4(); virtual void f5(); virtual void f6(); virtual void f7(); virtual char *f8(); virtual void f9(); virtual void f10(); virtual void f11(); virtual void f12(); virtual void f13(); virtual void f14(); virtual int f15(); virtual void f16(); virtual int f17(void *, int, int); virtual int f18(void *, void *, int, int); };
struct T : B { char q[0x18C - 0x20]; int x18C; };
static inline T *cv(B *q) { return q ? dynamic_cast<T *>(q) : 0; }
extern "C" int func_001D6F38(T *t) { for (T *c = cv(t->x8); c; c = cv(c->x4)) if (!func_001D6F38(c)) return 0; return t->f15(); }

