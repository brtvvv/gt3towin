extern char D_00352B18[], D_002F7008[];
extern "C" char *func_00219680(); extern "C" int func_00246AB0(char *); extern "C" void func_0024C4D0(int, char *, unsigned, int);
extern "C" void func_0011D900(int a, int b) { char *fmt = D_00352B18; unsigned v = *(unsigned *)(func_00219680() + 0x28) / 50; int c = func_00246AB0(D_002F7008); func_0024C4D0(b, fmt, v, c); }

