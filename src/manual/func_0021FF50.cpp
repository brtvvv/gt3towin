struct T { char p[0x24]; int x24, x28, x2C; char q[4]; char x34[4]; };
extern "C" void func_00226B78(int, int); extern "C" void func_00226C00(int, int); extern "C" void func_00226C78(T *); extern "C" void func_00249B38(int); extern "C" void func_0024D1A0(int, float); extern "C" float func_0021FE30(char *); extern "C" void func_00226110(int, int); extern "C" void func_00249CC0(int);
extern "C" void func_0021FF50(T *t) { int o = t->x24; if (!o) return; int n = t->x2C; int k = t->x28; if (k >= n) { if (!n) k = 0; else k = k % n; } func_00226B78(o, k); float one = 1.0f; func_00226C00(o, k); func_00226C78(t); func_00249B38(0x1001); func_0024D1A0(2, one); func_0024D1A0(4, one); func_0024D1A0(3, func_0021FE30(t->x34)); func_00226110(t->x24, 0); func_00249CC0(0x1001); func_00226C78(0); }

