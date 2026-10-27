struct B0 { char p[0x1C]; virtual void f0(); virtual void f1(); virtual void f2(); virtual void f3(); virtual void f4(); virtual void f5(); virtual void f6(); virtual void f7(); virtual void f8(); virtual void f9(); virtual void f10(); virtual void f11(); virtual void f12(); virtual void f13(); virtual void f14(int); };
struct S { char p[0x210]; B0 *o; char q[0x244 - 0x214]; int f; };
extern "C" void func_001D54D8(S *s, int x) { B0 *o = s->o; if (o) o->f14(s->f ? x : 0); }

