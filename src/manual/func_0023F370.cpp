struct S { char x0; char p[0x3F]; int x40, x44; char q[0x54 - 0x48]; int x54, x58, x5C, x60, x64; };
extern "C" int func_0026AD38();
extern "C" void func_0023F370(S *s) { int r = func_0026AD38(); s->x0 = 0; s->x40 = 0; s->x44 = 0; s->x54 = 0; s->x58 = 0; s->x5C = 0; s->x60 = 0; s->x64 = 0; if (r) __asm__ volatile("ei"); }

