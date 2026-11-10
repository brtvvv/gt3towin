struct X { char p[0x108]; int x108; };
extern char D_003526C0[], D_003526C8[], D_003526D0[], D_003526D8[], D_002F7008[], D_0030C860[];
extern "C" X *func_001058A0(char *, char *, int, float); extern "C" char *func_001C53F0(char *); extern "C" int func_00236538(char *); extern "C" int func_00236578(char *); extern "C" int func_002469E0(char *); extern "C" int func_0026D950(char *, char *, ...); extern "C" void func_001D0A30(X *, char *); extern "C" void func_001BC578(X *, char *);
extern "C" X *func_0010AA20(char *t, int k) { char *sub = k == 2 ? t + 0x2388 : t + 0xE50; int v = *(int *)(t + 0x4C0); char *nm = k != 2 ? D_003526C0 : D_003526C8; X *x = func_001058A0(t, nm, v, 24.0f); char buf[0x20]; x->x108 = 12; int r = func_00236538(func_001C53F0(sub)); if (r) { int q = func_00236578(func_001C53F0(sub)); int n = func_002469E0(D_002F7008); func_0026D950(buf, D_003526D0, r, n, q); } else func_0026D950(buf, D_003526D8); func_001D0A30(x, buf); func_001BC578(x, D_0030C860); return x; }

