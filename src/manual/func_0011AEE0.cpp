struct O { char p[0x50]; float x50, x54; };
struct B { char p[0x100]; }; struct L { int x; }; struct BL : B, L {};
struct B0 { char p[0x1C]; virtual void f0(); virtual void f1(); virtual void f2(); virtual void f3(); virtual void f4(); virtual BL *f5(O *, int, float, int); };
struct T : B0 { char q[0xB0 - 0x20]; char xB0[0xC]; int xBC; char r[0xC4 - 0xC0]; int xC4; char s[0xF4 - 0xC8]; float xF4; };
extern "C" int func_00232210(int); extern "C" int func_0023BC70(int); extern "C" O *func_001C3600(int, int); extern "C" int func_0023D208(char *, L *);
extern "C" void func_0011AEE0(T *t, int *a, int n) { float x = 0.0f; int i; for (i = 0; i < n; i++) { if (func_0023BC70(func_00232210(a[i]))) continue; O *o = func_001C3600(t->xC4, a[i]); if (!o) continue;
 x += (!t->xBC ? o->x54 : o->x50) * 0.5f; func_0023D208(t->xB0, t->f5(o, a[i], x, i)); x += (!t->xBC ? o->x54 : o->x50) * 0.5f; x += t->xF4; } }

