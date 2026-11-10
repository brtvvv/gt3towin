struct O { char p[0x1C]; virtual void f0(); virtual void f1(); virtual void f2(); };
struct T { char p[0xC4]; O **xC4; int xC8; char q[8]; int xD4; };
extern "C" void func_001C14A0(T *t) { int i = t->xD4; if (i >= 0 && i < t->xC8) { O *o = t->xC4[i]; if (o) o->f2(); } }

