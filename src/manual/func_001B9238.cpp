extern int D_00353EE8[2], D_00353EF0[2]; extern "C" int func_0026AD38(); extern "C" int func_001B4820(); extern "C" int func_0026BCA0(int, int, int);
extern "C" int func_001B9238(int i) { int r = func_0026AD38(); int *p = &D_00353EE8[i]; int v = *p; if (!v) { v = *p = func_0026BCA0(func_001B4820(), 0xA8000, 0x40); } D_00353EF0[i]++; if (r) __asm__ volatile("ei"); return v; }

