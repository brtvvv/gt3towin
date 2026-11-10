extern char D_004ADBC0[];
extern "C" unsigned func_0026ACA0(char *); extern "C" int func_0027EBC8(char *, char *, int);
extern "C" void func_00274E58(char *d) { if (!d) return; char *s = (char *)((unsigned)D_004ADBC0 | 0x20000000); int n; if (func_0026ACA0(s) < 0x400) n = func_0026ACA0(s); else n = 0x3FF; func_0027EBC8(d, (char *)((unsigned)D_004ADBC0 | 0x20000000), n); d[n] = 0; }

