struct O { char p[0xC0]; virtual void f0(); virtual void f1(); virtual void f2(); virtual void f3(); virtual void f4(); virtual int f5(); };
struct Q { char p[0x18]; int x18; };
struct S { char p[0x18]; Q *x18; char q[0x34 - 0x1C]; unsigned short x34; };
struct T { char p[0x40]; char x40[0xC0]; float x100, x104; char q[4]; float x10C; };
#define XD8 (*(int *)((char *)t + 0xD8))
extern float D_00352130;
extern "C" int func_0026AD38(); extern "C" void func_00256088(); extern "C" void func_00258C50(); extern "C" void func_00259080(float); extern "C" void func_00258FD4(float, float, float);
extern "C" float func_001EC460(int, float); extern "C" void func_002590C0(float); extern "C" float func_001EC340(int, float); extern "C" float func_001EC3A0(int, float); extern "C" float func_001EC3D0(int, float); extern "C" void func_00258D54(char *); extern "C" void func_00256108();
extern "C" int func_00205810(T *t, int a1, O *o, S *s) { if (o) o->f5(); if (s->x34) XD8 = 0; float z = 0.0f; int sx = s->x18->x18; int r = func_0026AD38();
 func_00256088(); func_00258C50(); func_00259080(t->x10C); func_00258FD4(z, -t->x100, -t->x104); func_002590C0(-func_001EC460(sx, z) * D_00352130);
 float a = -func_001EC340(sx, z); float b = -func_001EC3A0(sx, z); float c = -func_001EC3D0(sx, z); func_00258FD4(a, b, c); func_00258D54(t->x40); func_00256108(); if (r) __asm__ volatile("ei"); return 1; }

