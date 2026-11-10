extern int D_00354B40;
extern "C" void func_00286EE0(int); extern "C" int func_00275618(int, int); extern "C" void func_0026ADD8(); extern "C" void func_00268B20(int *, int *); extern "C" void func_00268BF8();
extern "C" int func_00268B80(int a, int b) { int st[4]; func_00286EE0(D_00354B40); while (func_00275618(a, b)) func_0026ADD8(); func_00268B20(st, &st[1]); func_00268BF8(); return st[1]; }

