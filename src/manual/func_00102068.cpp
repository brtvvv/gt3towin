struct V { virtual void f0(); virtual void f1(int); };
struct S { int a; V *v; };
extern "C" void func_00102068(S *s) { s->a = 0; if (s->v) { s->v->f1(3); s->v = 0; } }

