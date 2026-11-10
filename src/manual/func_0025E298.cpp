struct T { int x0; char p[0x3C]; long x40, x48; };
extern "C" void func_00286EE0(int); extern "C" void func_0025C420(T *, int, int, int, int);
extern "C" void func_0025E298(T *t, long a, long b) { func_00286EE0(t->x0); t->x40 = a; t->x48 = b; func_0025C420(t, 3, 1, 0, 0); }

