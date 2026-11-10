struct Q { char p[0x18]; int x18; };
extern "C" int func_0026AD38(); extern "C" Q *func_00268F18(signed char *);
extern "C" void func_00268D28(signed char *s) { int r = func_0026AD38(); Q *q = func_00268F18(s); if (q) { q->x18 = 0; *s = -1; } if (r) __asm__ volatile("ei"); }

