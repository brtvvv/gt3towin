struct R { int d[0x53]; };
struct O { char p[0x118]; R *r; };
struct B { char p[0x1C]; virtual void f0(); virtual void f1(); virtual void f2(); virtual void f3(); virtual void f4(); virtual void f5(); virtual void f6(); virtual void f7();  virtual O *get(); };
struct T : B { char q[0x12C - 0x20]; int x12C; };
extern R D_0049E210; extern char D_0049E310[]; extern "C" void func_0027FDBC(char *, int); extern "C" void func_001C5E88(int); extern "C" void func_001CB058(T *, char *, int);
extern "C" void func_001BEC50(T *t) { O *o = t->get(); if (!o) return; D_0049E210 = *o->r; func_0027FDBC(D_0049E310, t->x12C); func_001C5E88(3); func_001CB058(t, D_0049E310 - 0x100, 0); }

