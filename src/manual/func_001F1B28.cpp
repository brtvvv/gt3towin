struct B { char p[0xE3A8]; virtual void f0(); virtual void f1(); virtual void f2(); virtual void f3(); virtual void f4(); virtual void f5(); virtual int f6(); };
struct U { char p[0x13B8]; short x13B8; char q[0x1417 - 0x13BA]; unsigned char x1417; };
extern "C" int func_001E1868(B *, U *, int); extern "C" int func_001E17B8(B *);
extern "C" int func_001F1B28(B *t, U *u, int k) { if (!t->f6()) return func_001E1868(t, u, k); int n = u->x13B8; int r = (n - 1) * func_001E17B8(t) + u->x1417; if (k) r--; return r; }

