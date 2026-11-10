extern char D_00352AC8[];
extern "C" int func_00219680(); extern "C" char *func_00219F60(int); extern "C" int func_00235420(char *); extern "C" int func_002354A0(char *); extern "C" void func_0026D950(char *, char *, int, int);
extern "C" void func_0011CB78(int a, char *b) { char *r = func_00219F60(func_00219680()); if (r) { char *p = r + 0x10; char *fmt = D_00352AC8; int x = func_00235420(p); func_0026D950(b, fmt, x, func_002354A0(p)); } else *b = 0; }

