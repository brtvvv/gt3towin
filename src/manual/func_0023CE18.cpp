extern "C" void func_0027FDBC(char *, char *); extern "C" int func_0026ACA0(char *);
extern "C" void func_0023CE18(char *d, char *s) { func_0027FDBC(d, s); int i = func_0026ACA0(d); if (i < 0) return; while (d[i] != '_') { i--; if (i < 0) return; } if (i >= 0) d[i] = 0; }

