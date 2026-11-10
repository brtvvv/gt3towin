struct Q { virtual void f0(); virtual void f1(); virtual void f2(); virtual void f3(); virtual void f4(); virtual void f5(); virtual int f6(); };
struct O { char p[0x3C]; Q *x3C; };
struct Sub { char p[0x2B4]; O *x2B4; int x2B8; };
struct T { char p[0xC]; Sub s; };
extern "C" void func_001A4148(T *t, O *o) { int v = o->x3C->f6(); Sub *s = &t->s; s->x2B4 = o; s->x2B8 = v; }

