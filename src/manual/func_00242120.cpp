struct N { N *x0; int x4; };
extern N *D_002F4A30[]; extern "C" int func_0026AD38();
extern "C" void func_00242120(int k) { int r = func_0026AD38(); for (N *n = D_002F4A30[0]; n; n = n->x0) n->x4 = k; if (r) __asm__ volatile("ei"); }

