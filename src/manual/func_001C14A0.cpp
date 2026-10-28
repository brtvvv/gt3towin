struct O { char p[0x1C]; virtual void f0(); virtual void f1();  virtual void g(); };
struct S { char p[0xC4]; O **o; int n; char q[8]; int i; };
extern "C" void func_001C14A0(S *s) { int i = s->i; if (i >= 0 && i < s->n) { O *o = s->o[i]; if (o) o->g(); } }

