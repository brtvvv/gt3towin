extern float D_00351450;
extern char D_00311C18[], D_002F7008[];
extern "C" void *func_001C5450(void);
extern "C" int func_001DA608(void *, int *, int, int), func_00246A50(char *);
extern "C" void func_0026D950(char *, char *, double, int, int);
extern "C" void func_0011D328(int u, char *buf) { int v; int r = func_001DA608(func_001C5450(), &v, 0x646B676D, 0); func_0026D950(buf, D_00311C18, (double)((float)r * D_00351450), func_00246A50(D_002F7008), v); }
