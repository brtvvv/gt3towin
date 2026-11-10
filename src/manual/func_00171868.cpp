struct B { char p[0x1C]; virtual void f0(); virtual void f1(); virtual void f2(); virtual void f3(); virtual void f4(); virtual void f5(); virtual void f6(); virtual void f7(); virtual void f8(); virtual void f9(); virtual void f10(); virtual void f11(); virtual void f12(); virtual void f13(); virtual void f14(); virtual void f15(); virtual void f16(); virtual void f17(); virtual void f18();  virtual int cmd(int, int); };
struct T : B { char q[0x1EC - 0x20]; B *x1EC; };
struct SB { char p[0xC0]; virtual void g0(); virtual void g1(); virtual void g2(); virtual void g3(); virtual void g4();  virtual int flags(); };
struct S : SB { char q[0xD8 - 0xC4]; int xD8, xDC, xE0, xE4; };
extern "C" int func_001D8990(T *, S *); extern "C" int func_001D74B0(T *, S *);
extern "C" int func_00171868(T *t, S *s) { if (!func_001D8990(t, s)) return 1; if (s->flags() & 0x10) return t->cmd(8, 0); if (s->xD8) return t->x1EC->cmd(5, 0); if (s->xDC) return t->x1EC->cmd(6, 0); if (s->xE0) return t->cmd(10, 0); if (s->xE4) return t->cmd(11, 0); return func_001D74B0(t, s); }

