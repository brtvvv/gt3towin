struct E { char p[0x6C]; };
struct T { int x0, x4, x8; E e[4]; };
extern "C" int func_002686A8(int); extern "C" int func_00241BE8(int, int); extern "C" int func_0026AD38(); extern "C" void func_0023F370(E *); extern "C" void func_0023F538(E *);
extern "C" int func_0023F6A0(T *t) { int o = t->x4; int n = func_00241BE8(4, func_002686A8(t->x0)); if (o != n) { int st = func_0026AD38(); t->x4 = n; t->x8 = 0; for (int i = 0; i < 4; i++) func_0023F370(&t->e[i]); if (st) __asm__ volatile("ei"); } func_0023F538(&t->e[t->x8]); int k = t->x8 + 1; t->x8 = k; if (k >= t->x4) { t->x8 = 0; return 1; } return 0; }

