struct M { int a; int r; char p[8]; };
extern int D_00354B40;
extern "C" void func_00286EE0(int), func_0026ADD8(void), func_00268B20(M *, int *), func_00268420(void);
extern "C" int func_002750F8(int, int, int);
extern "C" int func_00268398(int a, int b, int c) { M m; func_00286EE0(D_00354B40); while (func_002750F8(a, b, c)) func_0026ADD8(); func_00268B20(&m, &m.r); func_00268420(); return m.r; }
