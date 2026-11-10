extern "C" void func_0027FDBC(char *, char *); extern "C" int func_0026ACA0(char *);
extern "C" char *func_0012F2A8(char *d, char *s) { func_0027FDBC(d, s); int n = func_0026ACA0(d); for (int i = 0; i < n && d[i]; i++) if ((unsigned char)(d[i] - 'A') < 26) d[i] += 32; return d; }

