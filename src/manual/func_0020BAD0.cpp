struct O { virtual void f0(); virtual void f1(); virtual void f2(); virtual void f3(); virtual void f4(); virtual void f5(); virtual void f6(); virtual void f7(); virtual void f8(); virtual void f9(); virtual void f10(); virtual void f11(); virtual void f12(); virtual void f13(); virtual void f14(); virtual void f15(); virtual void f16(); virtual void f17(); virtual void f18(); virtual void f19(); virtual void f20();  virtual float f21(); };
struct T { char p[0x268]; int x268; float x26C; };
extern "C" void func_0020BAD0(T *t, O *o) { float v = o->f21(); if (4.0f < v) v = 4.0f; if (0.0f < v) { t->x26C = v; t->x268 = 1; } }

