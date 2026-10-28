struct O0 { virtual void f0(); virtual void f1(); };
struct O : O0 { char p[0x10]; O *next; };
struct S { char p[0x1C]; O *first; };
extern "C" void func_00101EF8(S *s) { for (O *o = s->first; o; o = o->next) o->f1(); }

