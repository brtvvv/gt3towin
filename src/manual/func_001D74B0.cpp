struct P { char p[0xC8]; int xC8, xCC, xD0, xD4; char q[0xE8 - 0xD8]; int xE8, xEC; };
struct B { char p[0x1C]; virtual void f0(); virtual void f1(); virtual void f2(); virtual void f3(); virtual void f4(); virtual void f5(); virtual void f6(); virtual void f7(); virtual void f8(); virtual void f9(); virtual void f10(); virtual void f11(); virtual void f12(); virtual void f13(); virtual void f14(); virtual void f15(); virtual void f16(); virtual void f17(); virtual void f18(); virtual int g(int, int); };
struct T : B { char q[0x178 - 0x20]; int x178, x17C; };
extern "C" int func_001D8990(T *);
extern "C" int func_001D74B0(T *t, P *p) { if (!func_001D8990(t)) return 1; int v = t->x178; t->x17C = v; if (p->xE8) return t->g(1, 0); if (p->xEC) return t->g(2, 0); if (p->xC8) return t->g(3, 0); if (p->xCC) return t->g(4, 0); if (p->xD0) return t->g(5, 0); if (p->xD4) return t->g(6, 0); return v ^ 1; }

