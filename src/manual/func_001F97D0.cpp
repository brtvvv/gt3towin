struct T { char p[0x98]; signed char x98; };
extern "C" void func_001F7968(T *); extern "C" void func_001936D8(int);
extern "C" int func_001F97D0(T *t, int d) { t->x98 += d; int v = t->x98; if (v > 2) { t->x98 = 2; return 0; } if (v < -2) { t->x98 = -2; return 0; } func_001F7968(t); func_001936D8(t->x98); return 1; }

