extern char D_004ADBC0[];
#define UNC(p) ((char *)((unsigned)(p) | 0x20000000))
extern "C" unsigned func_0026ACA0(const char *);
extern "C" void *func_0027EBC8(char *, char *, int);
extern "C" void func_00274E58(char *d) { if (!d) return; int n = func_0026ACA0(UNC(D_004ADBC0)) < 0x400 ? func_0026ACA0(UNC(D_004ADBC0)) : 0x3FF; func_0027EBC8(d, UNC(D_004ADBC0), n); d[n] = 0; }
