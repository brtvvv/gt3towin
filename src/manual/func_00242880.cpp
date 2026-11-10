struct S { char p[0x18]; int x18, x1C; };
extern S D_002F4A10[]; extern "C" int func_0026AD38();
extern "C" void func_00242880() { S *s = D_002F4A10; int r = func_0026AD38(); if (s->x18) s->x1C = 1; if (r) __asm__ volatile("ei"); }

