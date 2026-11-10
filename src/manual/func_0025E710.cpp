struct T { int x0; char p[0x3C]; int x40, x44, x48; };
extern T D_004A8EE0[];
extern "C" void func_0025E5A0(T *, int, int, int, int); extern "C" void func_00286EE0(int); extern "C" void func_0025C420(T *, int, int, int, int);
extern "C" void func_0025E710(int a, int b, int c, int k) { if (!k) { func_0025E5A0(D_004A8EE0, 3, a, b, c); return; } T *t = D_004A8EE0; func_00286EE0(D_004A8EE0[0].x0); t->x40 = a; t->x44 = b; t->x48 = c; func_0025C420(t, 4, 0, 0, 0); }

