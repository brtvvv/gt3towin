struct E { char p[0x14]; };
extern char D_00341B28[];
extern "C" unsigned func_00217518(E *, int); extern "C" int func_0021EE60(); extern "C" int func_0021E508(int, char *); extern "C" int func_0021E528(int, int, char *); extern "C" int func_00232210(int);
extern "C" E *func_00217588(E *b, int a, int key) { unsigned k = func_00217518(b, a); int idx = -1; if (k < 4) { char *s = D_00341B28; int j = -1; int i = 0; int n = func_0021E508(func_0021EE60(), s); for (; i < n; i++) { if (func_00232210(func_0021E528(func_0021EE60(), i, s)) == key) { j = i; break; } } idx = k * n + j; } return &b[idx]; }

