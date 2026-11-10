extern char D_002F7008[], D_00352AE8[];
extern "C" int func_00219680(); extern "C" int func_00219F60(int); extern "C" void func_0023C190(int, int *, int *); extern "C" int func_002469E0(char *); extern "C" void func_0026D950(char *, char *, int, int);
extern "C" void func_0011CF30(int a, char *b) { int r = func_00219F60(func_00219680()); if (r) { int st[4]; func_0023C190(r, st, &st[1]); int c = func_002469E0(D_002F7008); func_0026D950(b, D_00352AE8, st[0], c); } else *b = 0; }

