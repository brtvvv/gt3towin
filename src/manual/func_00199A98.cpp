struct P { float a[3]; float b[3]; };
struct T { char p[8]; short x8, xA; char q[4]; unsigned char x10; char r[7]; int x18; float x1C; };
extern char D_002F2F98[], D_003301A0[]; extern P D_00330188[];
extern "C" void func_0023E668(char *); extern "C" int func_00196110(char *); extern "C" void func_00256088(); extern "C" void func_0025B158(unsigned); extern "C" int func_0019B698(int, int, int); extern "C" void func_00258FD4(float, float, float); extern "C" void func_00259024(float, float, float); extern "C" void func_00257F80(float *, float *); extern "C" void func_00256108(); extern "C" void func_00259100(float); extern "C" void func_0019B050(int, int, int, float, float);
extern "C" void func_00199A98(T *t) { int i; func_0023E668(D_002F2F98); if (!t->x18) t->x18 = func_00196110(D_003301A0); func_00256088(); func_0025B158(0x80D0D0D0); func_00258FD4(func_0019B698(t->x8, 0, t->x10), t->xA, 0.0f); func_00256088(); func_00259024(24.0f, 24.0f, 1.0f);
 P *p = D_00330188; for (i = 0; i >= 0; i--, p++) func_00257F80(p->a, p->b); func_00256108(); func_00259100(t->x1C * -90.0f); func_0025B158(0x80FFFFFF); func_0019B050(t->x18, 2, 0, 0.0f, -43.0f); func_00256108(); }

