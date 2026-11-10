extern char D_00341ED8[];
extern "C" int func_0021EE60(); extern "C" int func_0021E508(int, char *); extern "C" int func_0021E568(int, int, char *); extern "C" int func_0021E528(int, int, char *); extern "C" int func_00232210(int); extern "C" int func_00217710(char *, int, int);
extern "C" int func_0021AA48(char *t, int a, int key) { char *s = D_00341ED8; int i = 0; int n = func_0021E508(func_0021EE60(), s); int lt; for (; (lt = i < n); i++) { if (func_0021E568(func_0021EE60(), i, s) != key) continue; if (func_00217710(t + 0x23BB8, a, func_00232210(func_0021E528(func_0021EE60(), i, s)))) break; } return !lt; }

