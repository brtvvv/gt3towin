extern char D_0032EE28[], D_00327800[];
extern "C" void func_001A40A8(char *, int); extern "C" void func_001A3A28(char *, int); extern "C" void func_001B2BF0(char *, int); extern "C" void func_00182718(char *, int); extern "C" void func_0018FDE8(char *, int);
extern "C" void func_00190050(char *t, int k) { *(char **)t = D_0032EE28; func_001A40A8(t + 0x25CF0, 2); func_001A3A28(t + 0x25A44, 2); char *s = t + 0x2509C; func_001B2BF0(s + 0xC, 2); *(char **)(s + 8) = D_00327800; func_00182718(t, 0); if (k & 1) func_0018FDE8(t, 0x34600); }


