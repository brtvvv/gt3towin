struct T { char p[0xE40]; char x[0x10]; char y[0x270]; int x10C0; };
extern "C" char *func_00219680(); extern "C" int func_001B3B60(char *); extern "C" int func_00238C20(char *, int); extern "C" void func_00236D78(char *, int); extern "C" int func_0023C140(int, char *); extern "C" void func_001C5E88(int);
extern "C" void func_00167AA8(T *t, char *a) { int g = *(int *)((char *)({ int *_g = (int *)(func_00219680() + 0x307C8); _g; }) + 0x540); if (!g) return; char *y = t->y; int k = func_001B3B60(a + 0xC0); char *x = t->x; if (func_00238C20(y, k)) { func_00236D78(y, k); func_0023C140(g, x); t->x10C0 = 1; func_001C5E88(7); } else func_001C5E88(4); }

