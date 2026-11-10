extern int D_00354B40;
extern "C" void func_00286EE0(int); extern "C" int func_002743A0(int, int, int, int); extern "C" void func_0026ADD8(); extern "C" void func_00268B20(int *, int *); extern "C" void func_002688A8();
extern "C" int func_00268810(int a, int b, int c, int d) { int st[4]; func_00286EE0(D_00354B40); while (func_002743A0(a, b, c, d)) func_0026ADD8(); func_00268B20(st, &st[1]); func_002688A8(); return st[1]; }

