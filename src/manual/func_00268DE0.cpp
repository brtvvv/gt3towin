struct Q { char x0, x1, x2, x3, x4; unsigned char x5; char p[6]; short xC; };
extern "C" int func_0026AD38(); extern "C" Q *func_00268F18(char *);
extern "C" void func_00268DE0(char *s, int v) { int r = func_0026AD38(); Q *q = func_00268F18(s); if (q) { q->xC = v; q->x5 |= 1; } if (r) __asm__ volatile("ei"); }

