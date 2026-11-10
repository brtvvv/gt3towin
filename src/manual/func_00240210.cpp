extern char *D_003548F8; extern "C" int func_0026AD38(); extern "C" int func_0023FE20(int);
extern "C" int func_00240210(int k) { int v = 1; int r = func_0026AD38(); if (func_0023FE20(k)) { int q = k / 4; char *b = D_003548F8 + (q * 0x1BC + 0x1418); struct H { char p[0x68]; int x68; }; H *h = (H *)(b + ((k - q * 4) * 0x6C + 0xC)); v = h->x68; h->x68 = 0; } if (r) __asm__ volatile("ei"); return v; }

