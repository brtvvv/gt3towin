struct O { virtual void f0(); virtual void f1(); };
struct S { int a; char x[0x54]; O *o; int f; };
extern "C" void func_001C08E0(void *);
extern "C" void func_0012CEB0(S *s) { if (s->o && s->f) s->o->f1(); func_001C08E0(s->x); }

