extern char D_00311C08[], D_002F7008[];
extern "C" int func_001C5450(int); extern "C" int func_001DA590(int, int *, int, int); extern "C" int func_002469E0(char *); extern "C" void func_0026D950(int, char *, int, int, int);
extern "C" void func_0011D2B8(int a, int b) { int st[4]; int r = func_001DA590(func_001C5450(a), st, 0x7073, 0); int r2 = func_002469E0(D_002F7008); func_0026D950(b, D_00311C08, r, r2, st[0]); }

