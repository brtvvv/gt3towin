struct Q { char x0, x1, x2, x3, x4, x5, x6, x7; };
extern "C" int func_0026AD38(); extern "C" Q *func_00268F18(char *);
extern "C" void func_00268D80(char *s) { int r = func_0026AD38(); Q *q = func_00268F18(s); if (q) { q->x6 = 0; q->x7 = 1; q->x1 = 1; } if (r) __asm__ volatile("ei"); }

