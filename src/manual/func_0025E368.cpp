struct T { int x0; char p[0x3C]; int x40, x44, x48; char x4C[1]; };
extern "C" void func_00286EE0(int); extern "C" void func_0027FDBC(char *, const char *); extern "C" void func_0025C420(T *, int, int, int, int);
extern "C" void func_0025E368(T *t, int a, int b, int c, const char *s) { func_00286EE0(t->x0); t->x40 = a; t->x44 = b; t->x48 = c; t->x4C[0] = 0; if (s) func_0027FDBC(t->x4C, s); func_0025C420(t, 1, 0, 0, 0); }

