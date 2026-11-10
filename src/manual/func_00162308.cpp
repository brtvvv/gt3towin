extern char D_003532E8[], D_002F7008[];
extern "C" char *func_00219680(); extern "C" void func_0023C190(char *, int *, int *); extern "C" int func_002469E0(char *); extern "C" void func_0026D950(char *, char *, int, int);
extern "C" void func_00162308(char *t, char *b) { char *x = *(char **)((char *)({ int *_g = (int *)(func_00219680() + 0x307C8); _g; }) + 0x540); if (x) { int st[2]; func_0023C190(t + 0xE40, &st[0], &st[1]); char *f = D_003532E8; int v = st[0]; func_0026D950(b, f, v, func_002469E0(D_002F7008)); return; } *b = 0; }

