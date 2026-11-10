struct G { char p[0x84]; char x84[4]; };
struct B { virtual void f0(); virtual void f1(); virtual void f2(); virtual void f3(); virtual void f4(); virtual void f5(); virtual void f6(); virtual void f7(); virtual void f8(); virtual void f9(); virtual void f10(); virtual void f11(); virtual void f12(); virtual void f13(); virtual void f14(); virtual void f15(); virtual void f16(); virtual void f17(); virtual void f18(); virtual void f19(); virtual void f20(); virtual void f21();  virtual void h22(G *); virtual void h23(G *); };
struct T : B { char p[0x18 - 4]; G *g; char q[0xA49C - 0x1C]; int cnt; unsigned char st, x24A1; char r[6]; unsigned char x24A8; };
extern "C" void func_00193960(T *); extern "C" int func_0017A080(char *, int, int, int); extern "C" void func_001897D0(T *, int, int); extern "C" void func_0017A100(char *, int, int, int);
extern "C" void func_00189A80(T *t) { func_00193960(t); G *g = t->g; t->cnt++; switch (t->st) {
 case 0: if (func_0017A080(g->x84, 10, 0, 1)) func_001897D0(t, 0, 1); break;
 case 1: t->x24A8 = 0; func_001897D0(t, 0, 2); t->x24A1 = 0; func_0017A100(g->x84, 0x14, 0x20, 0);
 case 2: t->h22(g); break;
 case 3: func_001897D0(t, 0, 4); t->x24A1 = 0;
 case 4: t->h23(g); break; } }

