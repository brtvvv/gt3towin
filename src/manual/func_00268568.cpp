struct M { int a; int r; char p[8]; };
extern int D_00354B40;
extern "C" void func_00286EE0(int), func_0026ADD8(void), func_00268B20(M *, int *), func_002685F0(void);
extern "C" int func_002756E0(int, int, int);
extern "C" int func_00268568(int a, int b, int c) { M m; func_00286EE0(D_00354B40); while (func_002756E0(a, b, c)) func_0026ADD8(); func_00268B20(&m, &m.r); func_002685F0(); return m.r; }
