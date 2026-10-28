extern char D_0032A478[];
extern "C" void func_00182E30(void *, int), func_00183000(void *, int);
extern "C" void func_001830F8(char *s, int flag) { *(char **)s = D_0032A478; func_00182E30(s, 0); if (flag & 1) func_00183000(s, 0x34580); }

