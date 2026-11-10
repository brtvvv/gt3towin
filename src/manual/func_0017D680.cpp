struct T { char p[0x979C]; volatile int x; };
extern "C" int func_0026AD38();
extern "C" int func_0017D680(T *t) { int r = func_0026AD38(); int v = t->x; t->x = 0; if (r) __asm__ volatile("ei"); return v; }

