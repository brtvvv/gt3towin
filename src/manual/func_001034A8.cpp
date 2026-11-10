struct T { char p[0x18]; int x18, x1C; };
extern "C" int func_00114AF0(int, int); extern "C" int func_0021EE60(); extern "C" int func_0021E340(int, int, int); extern "C" int func_0021E300(int, int, int); extern "C" int func_00219680(); extern "C" int func_0021AD80(int, int); extern "C" int func_00232210(int); extern "C" int func_0023BC70(int);
extern "C" int func_001034A8(T *t, int a) { int k = 2; if (!t->x1C) k = 1; if (!func_00114AF0(t->x18, k)) return 1; int r = 0; int h = func_00114AF0(t->x18, k); int x = func_0021E340(func_0021EE60(), a, h); int y = func_0021E300(func_0021EE60(), a, h); if (func_0021AD80(func_00219680(), x)) { if (!func_0023BC70(func_00232210(y))) r = 1; } return r; }

