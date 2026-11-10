extern int D_00354B40;
extern "C" void func_00286EE0(int); extern "C" int func_002752D8(int, int, int, int, int); extern "C" void func_0026ADD8(); extern "C" void func_00268B20(int *, int *); extern "C" void func_00268B18();
extern "C" int func_00268A70(int a, int b, int c, int d, int e) { int st[4]; func_00286EE0(D_00354B40); while (func_002752D8(a, b, c, d, e)) func_0026ADD8(); func_00268B20(st, &st[1]); func_00268B18(); return st[1]; }

