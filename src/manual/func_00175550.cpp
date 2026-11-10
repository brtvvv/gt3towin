struct P { char p[0x84]; char x84[0x889 - 0x84]; unsigned char x889; };
struct B { int x0; int x4; virtual void fa(); virtual void f0(); virtual void f1(); virtual void f2(); virtual void f3(); virtual void f4(P *, int); virtual void f5(P *); virtual int f6(int); };
extern "C" int func_0017A1D8(char *, int, int *, int);
extern "C" void func_00175550(B *t, P *p) { int n = p->x889; for (int i = 0; i < n; i++) { int v = 0; if (func_0017A1D8(p->x84, 5, &v, i)) { t->f4(p, v); if (t->f6(v) && !t->x0) t->f5(p); } } }

