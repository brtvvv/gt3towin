struct M { char p[0x198]; int x198; };
extern char D_003532C0[], D_003532C8[];
extern "C" char *func_00219680(); extern "C" int func_00169890(); extern "C" int func_00236040(M *); extern "C" void func_0026D950(char *, char *, int); extern "C" void func_0024C4D0(char *, char *, int, char *);
extern "C" void func_0015E690(char *t, char *s) { if (*(int *)((char *)({ int *_g = (int *)(func_00219680() + 0x307C8); _g; }) + 0x540) && func_00169890()) { M *m = (M *)(t + 0xE50); if (func_00236040(m) == 0x23) func_0026D950(s, D_003532C0, 0); else func_0024C4D0(s, D_003532C0, m->x198, D_003532C8); return; } __builtin_strcpy(s, "----"); }

