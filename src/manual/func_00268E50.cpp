struct Q { char x0, x1, x2, x3; };
extern "C" int func_0026AD38(); extern "C" Q *func_00268F18(char *);
extern "C" void func_00268E50(char *s, int k) { int r = func_0026AD38(); Q *q = func_00268F18(s); if (q) q->x3 = k; if (r) __asm__ volatile("ei"); }

