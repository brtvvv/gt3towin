struct M { int a; int r; char p[8]; };
extern int D_00354B40;
extern "C" void func_00286EE0(int), func_0026ADD8(void), func_00268B20(M *, int *), func_002684A0(void);
extern "C" int func_00275030(int, int);
extern "C" int func_00268428(int a, int b) { M m; func_00286EE0(D_00354B40); while (func_00275030(a, b)) func_0026ADD8(); func_00268B20(&m, &m.r); func_002684A0(); return m.r; }
