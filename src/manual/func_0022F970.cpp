struct OB { char p[0xC0]; virtual void f0(); virtual void go(); };
struct O { char p[8]; O *next; };
struct A { char d[0x3C]; }; struct B { char d[0x74]; };
struct T { O *x0; A a[8]; B b[2]; };
extern "C" void func_002309B8(); extern "C" void func_00230BF8(A *); extern "C" void func_00230A30(); extern "C" void func_00231B10(B *); extern "C" void func_0022F7E0(T *); extern "C" void func_0022F800(T *);
extern "C" int func_0022F970(T *t) { int i; func_002309B8(); for (i = 0; i < 8; i++) func_00230BF8(&t->a[i]); func_00230A30(); for (i = 0; i < 2; i++) func_00231B10(&t->b[i]); for (i = 0; i < 2; i++); func_0022F7E0(t); for (O *o = t->x0; o; o = o->next) ((OB *)o)->go(); func_0022F800(t); return 1; }

