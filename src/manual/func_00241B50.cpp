extern char *D_003548F8; extern "C" int func_0026AD38(); extern "C" int func_0023FE20(int);
extern "C" int func_00241B50(int k) { int v = 0; int r = func_0026AD38(); if (func_0023FE20(k)) { int q = k / 4; char *b = D_003548F8 + (q * 0x1BC + 0x1418); v = *(int *)((k - q * 4) * 0x6C + b + 0x54); } if (r) __asm__ volatile("ei"); return v; }

