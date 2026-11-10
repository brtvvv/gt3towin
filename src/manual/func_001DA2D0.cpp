extern char D_0033DC10[], D_002D3F48[];
extern "C" void func_001DAA20(char *); extern "C" void func_001DB218(char *, int, int, int, int, char *); extern "C" void func_001DCEE8(char *, char *, int, int, char *, char *); extern "C" void func_001E2418(char *, char *, char *);
extern "C" void func_001DA2D0(char *t, int a, char *p) { char st[0x20]; func_001DAA20(st); if (!p) p = st; func_001DB218(t, a, 0, 0, 0, D_0033DC10); func_001DCEE8(t + 0x3E4, t, 0, 0, D_002D3F48, p); func_001E2418(t + 0x51C, t + 0x1294, p); }

