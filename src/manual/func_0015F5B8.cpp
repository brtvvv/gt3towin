struct M { char p[0x1B0]; int x1B0; };
struct Q { char p[0x12]; unsigned char x12; };
extern char D_003532B8[]; extern char *D_002B2EF0[];
extern "C" char *func_00219680(); extern "C" int func_00169BC8(); extern "C" Q *func_00235B10(M *); extern "C" void func_0024C4D0(char *, char *, char *, int);
extern "C" void func_0015F5B8(char *t, char *s) { if (*(int *)((char *)({ int *_g = (int *)(func_00219680() + 0x307C8); _g; }) + 0x540) && func_00169BC8()) { M *m = (M *)(t + 0xE50); func_0024C4D0(s, D_003532B8, D_002B2EF0[2], func_00235B10(m)->x12 - m->x1B0); return; } __builtin_strcpy(s, "----"); }

