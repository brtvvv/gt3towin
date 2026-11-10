struct S { long x0; int x8, xC, x10, x14; };
extern S D_002FE440[]; extern float D_00352444;
extern "C" int func_0026AD38(); extern "C" float func_00279A38(long);
extern "C" float func_0025DBB8(int *a, int *b, int *c) { int r = func_0026AD38(); if (a) *a = D_002FE440[0].x8; if (b) *b = D_002FE440[0].x10; if (c) *c = D_002FE440[0].x14; float v = func_00279A38(D_002FE440[0].x0) / D_00352444; if (r) __asm__ volatile("ei"); return v; }

