struct VB { char p[8]; virtual void f0(); virtual void f1(); virtual void f2(); virtual void f3(); virtual void f4(); virtual void f5(); virtual void f6(); virtual int f7(); };
struct T : VB { char q[0x5C - 0xC]; int x5C; char r[0x70 - 0x60]; char x70[0x44]; int xB4; };
extern "C" int func_00143230(T *, char *); extern "C" int func_00240F88(int, int, char *, int, int); extern "C" int func_00241B50(int); extern "C" void func_00142E80(int);
extern "C" int func_00143B20(T *t, int a) { char st[0x50]; if (func_00240F88(a, func_00143230(t, st), t->x70, 0, 0x200)) return 0; if (func_00241B50(a) < 0x200) return 0; t->xB4 = 0; func_00142E80(t->f7()); t->x5C = 1; return 1; }

