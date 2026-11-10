struct V { virtual void f0(); virtual void f1(); virtual void f2(); virtual void f3(); virtual void f4(); virtual void f5(); virtual void f6(); virtual void f7(); virtual void f8(); virtual void f9(); virtual void f10(); virtual void f11(); virtual void f12(); virtual void f13(); virtual void f14(); virtual void f15(); virtual void f16(); virtual void f17(); virtual void f18(); virtual void f19(); virtual void f20(); virtual void f21(); virtual void f22(); virtual void f23(); virtual void f24(); virtual void f25(); virtual void f26(); virtual void f27(); virtual void f28(); virtual void f29();  virtual int g(); };
struct S { char p[8]; int x8; };
struct T { char p[0x3C]; float x3C; char q[0x108 - 0x40]; S *s; char r[0xF48 - 0x10C]; float xF48; char u[4]; float xF50; };
extern "C" V *func_0014BCF8(S *); extern "C" int func_0014F648(S *);
extern "C" float func_0014E0A0(T *t) { S *s = t->s; float h = 0.5f; float v = s->x8 / func_0014BCF8(s)->g() * t->xF48; float lo = t->x3C * h - t->xF50; S *s2 = t->s; int n = func_0014F648(s2); int q = (n - 1) / func_0014BCF8(s2)->g(); float c = t->x3C * h; float m = q * t->xF48 - c + t->xF50; if (m < v) v = m; if (v < lo) v = lo; return v; }

