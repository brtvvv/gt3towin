struct T { char p[0x78]; int a[1]; }; extern T *D_00354650; extern char D_002EAF18[]; extern "C" char *func_0022E820(int i) { if (D_00354650->a[i] >= 0) return &D_002EAF18[i * 5]; return 0; }
