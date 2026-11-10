struct T { int x0, x4, x8, xC; void *x10; };
extern char D_00331788[];
extern "C" void func_0026D5B8(int); extern "C" void func_0027D498(int); extern "C" void func_0027D2F8(void *);
extern "C" void func_0019FE90(T *t, int f) { t->x10 = D_00331788; func_0026D5B8(t->xC); if (t->x0) func_0027D498(t->x0); if (f & 1) func_0027D2F8(t); }

