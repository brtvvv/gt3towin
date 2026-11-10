struct B { int x0; struct B *x4; struct B *x8; int xC; struct B *x10; int p14, p18; virtual void f0(); virtual void f1(); virtual void f2(); virtual void f3(); virtual void f4(); virtual void f5(B *); virtual void f6(); virtual void f7(); virtual void f8(); virtual void f9(); virtual void f10(); virtual void f11(); virtual void f12(); virtual void f13(); virtual void f14(); virtual void f15(); virtual void f16(); virtual void f17(); virtual void f18(); virtual void f19(); virtual void f20(int); };
struct T : B { char q[0x204 - 0x20]; B *x204; int p208, p20C; B *x210; };
struct U : T { };
static inline T *cv(B *q) { return q ? dynamic_cast<T *>(q) : 0; }
extern "C" void func_001D7698(T *, int);
extern "C" void func_001D5360(T *t, int v) { func_001D7698(t, v); for (T *c = cv(t->x8); c; c = cv(c->x4)) { if (!dynamic_cast<U *>(c)) c->f20(v); } B *o = t->x210; if (o) o->f20(v); B *w = t->x204; if (w) w->f5(o); }

