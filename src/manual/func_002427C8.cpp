struct N { int x0, x4, x8, xC, x10; };
struct S { char p[0x18]; int x18; char q[0x50 - 0x1C]; int x50, x54; };
extern S D_002F4A10[]; extern "C" int func_0026AD38(); extern "C" int func_00286D90(); extern "C" void func_002425B0(N *, int); extern "C" int func_00286DC0();
extern "C" int func_002427C8(N *n) { S *s = D_002F4A10; int r = func_0026AD38(); int w; if (!s->x18) { int b = s->x50, a = s->x54; w = 0; n->x8 = b; n->x4 = a; n->x10 = -1; } else { w = 1; func_002425B0(n, func_00286D90()); }
 if (r) __asm__ volatile("ei"); while (w) { func_00286DC0(); if (n->x10 == -1) break; } return n->x8; }

