struct V { virtual void f0(); virtual void f1(); virtual void f2(); virtual void f3(); virtual void f4(); virtual void f5(); virtual void f6(); virtual char *f7(int); };
struct S { char p[0x28C]; V *v; int x; };
extern "C" void func_00173DA8(char *, char *);
extern "C" void func_00173DF0(S *s, char *out) { func_00173DA8(out, s->v->f7(s->x)); }

