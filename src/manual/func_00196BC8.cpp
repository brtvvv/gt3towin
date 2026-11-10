struct EB { virtual void f0(); virtual void f1(); virtual void f2(); virtual void f3(); virtual void f4(); virtual void f5(); virtual void f6(); virtual void f7(); virtual void f8(); virtual void f9(); virtual void f10(); virtual void f11(); virtual void f12(); virtual void f13(); virtual void f14(); virtual void f15(); virtual void f16(); virtual void f17(); virtual void f18(); virtual void f19(); virtual void f20(); virtual void f21(int); };
struct E : EB { char q[0xA47C - 4]; };
extern char D_0032FF30[];
extern "C" void func_0027D2F8(char *);
extern "C" void func_00196BC8(char *t, int k) { *(char **)t = D_0032FF30; E *b = (E *)(t + 4); if (b) { E *e = (E *)(t + 0x148FC); while (b != e) { e--; e->f21(0); } } if (k & 1) func_0027D2F8(t); }

