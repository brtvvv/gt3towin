struct OB { char p[0x1C]; virtual void f0(); virtual void f1(); virtual void f2(); virtual void f3(); virtual void f4(); virtual void f5(); virtual void f6(); virtual void f7(); virtual void f8(); virtual void f9(); virtual void f10(); virtual void f11(); virtual void f12(); virtual void f13(); virtual void f14(int); virtual void f15(); virtual void f16(); virtual void f17(); virtual void f18(); virtual void f19(); virtual void f20(); virtual void f21(); virtual void f22(); virtual void f23(int); };
struct T { char p[0x174]; int x174; char q[0x1E4 - 0x178]; OB *x1E4; };
extern char D_003535D0[];
extern "C" OB *func_001708A8(T *); extern "C" OB *func_001D8A08(T *, char *);
extern "C" void func_00170900(T *t) { func_001708A8(t)->f14(t->x174); func_001D8A08(t, D_003535D0)->f14(t->x174); t->x1E4->f23(0); t->x1E4->f14(0); }

