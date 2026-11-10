extern char D_00311C08[], D_002F7008[];
extern "C" char *func_00219680(); extern "C" void func_0023C190(int, int *, int *); extern "C" int func_002469E0(char *); extern "C" void func_0026D950(char *, char *, int, int, int);
extern "C" void func_001227A8(int a, char *b) { int st[4]; func_0023C190(({ int *_g = (int *)(func_00219680() + 0x307C8); _g; })[0x538 / 4], st, &st[1]); char *fmt = D_00311C08; int x = st[0]; int c = func_002469E0(D_002F7008); func_0026D950(b, fmt, x, c, st[1]); }

