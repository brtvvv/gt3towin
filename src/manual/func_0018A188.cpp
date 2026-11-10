extern char D_0032D208[], D_0032D6E8[], D_00327800[];
extern "C" void func_00192220(char *, int); extern "C" void func_001A40A8(char *, int); extern "C" void func_001A3A28(char *, int); extern "C" void func_00187B80(char *, int); extern "C" void func_00189EE0(char *, int);
extern "C" void func_0018A188(char *t, int k) { *(char **)t = D_0032D208; char *m = t + 0x2244C; *(char **)m = D_0032D6E8; func_00192220(m, 2); func_001A40A8(t + 0x21F0C, 2); func_001A3A28(t + 0x21C60, 2); char *s = t + 0x21C00; *(char **)(s + 8) = D_00327800; func_00187B80(t, 0); if (k & 1) func_00189EE0(t, 0x3AC80); }

