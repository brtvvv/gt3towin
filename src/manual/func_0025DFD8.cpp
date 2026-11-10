struct T { int x0; char p[0x3C]; int x40, x44, x48; char x4C[1]; };
extern T D_004A8D60[];
extern "C" void func_00286EE0(int); extern "C" void func_0027FDBC(char *, const char *); extern "C" void func_0025C420(T *, int, int, int, int);
extern "C" void func_0025DFD8(int a, int b, int c, const char *s) { T *t = D_004A8D60; func_00286EE0(D_004A8D60[0].x0); t->x40 = a; t->x44 = b; t->x48 = c; t->x4C[0] = 0; if (s) func_0027FDBC(t->x4C, s); func_0025C420(t, 1, 0, 0, 0); }

