extern int D_00354B40;
extern "C" void func_00286EE0(int); extern "C" int func_002745C8(int, int, int); extern "C" void func_0026ADD8(); extern "C" void func_00268B20(int *, int *); extern "C" void func_00268A68();
extern "C" int func_002689E0(int a, int b, int c) { int st[4]; func_00286EE0(D_00354B40); while (func_002745C8(a, b, c)) func_0026ADD8(); func_00268B20(st, &st[1]); func_00268A68(); return st[1]; }

