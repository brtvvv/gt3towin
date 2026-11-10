extern char *D_003548F8; extern "C" int func_0026AD38();
extern "C" int func_0023FE20(int k) { int v = 0; char *w = D_003548F8; int r = func_0026AD38(); if (k < 8) { int q = k / 4; int n = *(int *)(q * 0x1BC + w + 0x141C); int m = k - q * 4; v = m < n; } if (r) __asm__ volatile("ei"); return v; }

