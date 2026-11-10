struct O { char p[0xC0]; virtual void f0(); virtual void f1(); virtual void f2(); virtual void f3(); virtual void f4(); virtual int f5(); };
struct MB { int x0; char p[0x10]; virtual void f0(); virtual void f1(); virtual void f2(); virtual int f3(int); };
struct T { char p[0x100]; O *x100; char q[0x208 - 0x104]; int a[0x81]; MB m; };
extern "C" void func_001BAEA0(T *); extern "C" void func_001C47C8(int *, int, int); extern "C" int func_0022F120(O *, int, int, int); extern "C" void func_001C5E88(int);
extern "C" void func_001C4BB8(T *t) { func_001BAEA0(t);
 if (t->x100->f5() & 0x80) { ({ MB *_m = &t->m; _m->f3(-1); }); func_001C47C8(t->a, 0x80, t->m.x0); }
 else if (func_0022F120(t->x100, 0x10000, 0x1E, 3)) { MB *_m = &t->m; if (t->a[t->m.x0]) { if (_m->f3(1)) func_001C5E88(3); } }
 else if (func_0022F120(t->x100, 0x2000, 0x1E, 3)) { if (({ MB *_m = &t->m; _m->f3(-1); })) func_001C5E88(3); } }

