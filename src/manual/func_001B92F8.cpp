extern int D_00353EF0[2], D_00353EE8[2]; extern "C" int func_0026AD38(); extern "C" void func_00243A00(void *, int, int); extern "C" void func_001B92C8();
extern "C" void func_001B92F8(int i) { int r = func_0026AD38(); if (--D_00353EF0[i] == 0) { func_00243A00((void *)func_001B92C8, D_00353EE8[i], 0); D_00353EE8[i] = 0; } if (r) __asm__ volatile("ei"); }

