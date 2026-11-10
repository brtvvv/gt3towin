struct S { char p[0x1E4]; int x1E4, x1E8; };
extern int D_00352F04; extern S *D_00352EF0; extern "C" int func_0026AD38();
extern "C" void func_00136858() { int r = func_0026AD38(); if (D_00352F04 && D_00352EF0) { D_00352EF0->x1E4 = 1; D_00352EF0->x1E8 = 1; } if (r) __asm__ volatile("ei"); }

