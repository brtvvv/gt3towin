extern volatile int D_00354948; extern int D_0035494C;
extern "C" void func_00242880(); extern "C" int func_002439F0(); extern "C" int func_00253458(int);
extern "C" void func_002438C8() { if (D_00354948 == 1) { func_00242880(); while (!func_002439F0()) func_00253458(1); } func_00253458(2); D_00354948 = 2; while (!func_002439F0()) func_00253458(1); D_0035494C = 0; }

