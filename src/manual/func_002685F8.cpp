extern int D_00354B40;
extern "C" void func_00286EE0(int); extern "C" int func_00274B78(int, int, int, int, int); extern "C" void func_0026ADD8(); extern "C" void func_00268B20(int *, int *); extern "C" void func_002686A0();
extern "C" int func_002685F8(int a, int b, int c, int d, int e) { int st[4]; func_00286EE0(D_00354B40); while (func_00274B78(a, b, c, d, e)) func_0026ADD8(); func_00268B20(st, &st[1]); func_002686A0(); return st[1]; }

