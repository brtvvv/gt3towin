extern char D_00352AC8[];
extern "C" void *func_00219680(void);
extern "C" char *func_00219F60(void *);
extern "C" int func_00235420(char *), func_002354A0(char *);
extern "C" void func_0026D950(char *, char *, int, int);
extern "C" void func_0011CB78(int u, char *buf) { char *p = func_00219F60(func_00219680()); if (p) { char *q = p + 0x10; func_0026D950(buf, D_00352AC8, func_00235420(q), func_002354A0(q)); } else *buf = 0; }
