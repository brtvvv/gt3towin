struct R { char p[0x2A]; short x2A; };
extern float D_0035145C; extern char D_00352BE8[];
extern "C" R *func_001C5450(); extern "C" int func_001DA608(R *, int *, int, int); extern "C" void func_0024C4D0(char *, char *, int);
extern "C" void func_00122B38(int a, char *b) { int st[4]; int n = func_001DA608(func_001C5450(), st, 0x646B676D, 0); int v = (int)(func_001C5450()->x2A / (float)n * D_0035145C * 1000.0f); func_0024C4D0(b, D_00352BE8, v); }

