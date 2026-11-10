struct S { int x0, x4, x8, xC; };
extern "C" void func_00287DD8(int); extern "C" void func_00287A88(int);
extern "C" int func_00265CE0(int a, S *s) { s->x0 &= ~4; func_00287DD8(s->xC); func_00287A88(8); __asm__ volatile("sync"); __asm__ volatile("ei"); return 0; }

