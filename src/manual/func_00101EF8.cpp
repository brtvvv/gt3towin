struct OB { virtual void f0(); virtual void f1(); };
struct O : OB { char p[0x10]; O *x14; };
struct T { char p[0x1C]; O *x1C; };
extern "C" void func_00101EF8(T *t) { for (O *o = t->x1C; o; o = o->x14) o->f1(); }

