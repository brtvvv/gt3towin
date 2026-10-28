extern int D_00354500, D_003544FC;
extern float D_00354504, D_00354510;
extern "C" void func_00286EE0(int), func_0026AE48(int), func_0022BCF8(float), func_0022C378(float);
extern "C" float func_0022C858(float x) { func_00286EE0(D_00354500); float old = D_00354504; D_00354504 = x; x *= D_00354510; float v = x; switch (D_003544FC) { case 1: func_0022BCF8(v); break; case 2: func_0022C378(v); break; } func_0026AE48(D_00354500); return old; }
