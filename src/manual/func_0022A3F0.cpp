struct T { int x0; T *x4; int p[3]; int x14[5]; };
extern "C" void func_0022A248(int, int);
extern "C" void func_0022A3F0(T *t) { int d = (char *)t - (char *)t->x4; t->x4 = t; int *p = t->x14; int *q = p; for (int i = 4; i >= 0; i--) { *p += d; p++; func_0022A248(*q, d); q++; } }

