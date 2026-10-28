struct M { int a; int r; char p[8]; };
extern int D_00354B40;
extern "C" void func_00286EE0(int), func_0026ADD8(void), func_00268B20(M *, int *), func_00268938(void);
extern "C" int func_00274730(int, int, int);
extern "C" int func_002688B0(int a, int b, int c) { M m; func_00286EE0(D_00354B40); while (func_00274730(a, b, c)) func_0026ADD8(); func_00268B20(&m, &m.r); func_00268938(); return m.r; }
