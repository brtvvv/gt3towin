struct X { char p[0x208]; int x208; };
struct B { char p[0x1C]; virtual void f0(); virtual void f1(); virtual void f2(); virtual void f3(); virtual void f4(); virtual void f5(); virtual void f6(); virtual void f7(); virtual void f8(); virtual void f9(); virtual void f10(); virtual void f11(); virtual void f12(); virtual void f13(); virtual void f14(); virtual void f15(); virtual void f16(); virtual void f17(); virtual void f18();  virtual int g(int, int); };
struct T : B { char q[0x2E0 - 0x20]; X *x2E0, *x2E4; };
extern char D_00324990[];
extern "C" int func_001D8C60(T *, char *); extern "C" void func_001C5E88(int); extern "C" void func_0016A788(T *, int); extern "C" void func_0016A7B8(T *, int); extern "C" int func_001D51C8(T *, X *, int, int);
extern "C" int func_0016A4A8(T *t, X *x, int k, int m) { if (func_001D8C60(t, D_00324990)) { switch (k) { case 1: t->g(9, 0); return 0; case 5: case 6: return 0; } } switch (k) { case 7: if (t->x2E0 == x) { int a = x->x208; func_001C5E88(7); func_0016A788(t, a); func_0016A7B8(t, a); return 0; } break; case 1: if (t->x2E4 == x) { t->g(8, 0); return 0; } break; } return func_001D51C8(t, x, k, m); }

