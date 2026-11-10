struct TB { char p[0x288]; virtual void f0(); virtual void f1(); };
struct T : TB { char q[0x2EC - 0x28C]; int x2EC; void g() asm("func_001738B8"); };
extern char D_00326AE8[];
extern "C" void func_001B75E8(int *, char *, int); extern "C" int func_001B8170(int *, int); extern "C" int func_001B8B10(int *); extern "C" void func_001B8610(int *);
void T::g() { int *m = &x2EC; func_001B75E8(m, D_00326AE8, 0); func_001B8170(m, 0); while (!x2EC) { func_001B8B10(m); f1(); } func_001B8610(m); }

