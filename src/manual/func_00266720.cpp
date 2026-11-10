extern volatile int D_00354CE0; extern int D_00354CD4;
extern "C" void func_00287DD8(int); extern "C" void func_00287A88(int);
extern "C" int func_00266720() { D_00354CE0 &= ~4; func_00287DD8(D_00354CD4); func_00287A88(8); __asm__ volatile("sync"); __asm__ volatile("ei"); return 0; }

