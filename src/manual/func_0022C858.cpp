extern int D_00354500, D_003544FC; extern float D_00354504, D_00354510;
extern "C" void func_00286EE0(int); extern "C" void func_0026AE48(int); extern "C" void func_0022BCF8(float); extern "C" void func_0022C378(float);
extern "C" float func_0022C858(float x) { func_00286EE0(D_00354500); float old = D_00354504; D_00354504 = x; x *= D_00354510; switch (D_003544FC) { case 1: func_0022BCF8(x); break; case 2: func_0022C378(x); break; } func_0026AE48(D_00354500); return old; }

