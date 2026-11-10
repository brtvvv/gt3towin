extern char D_0032CA58[], D_00327800[];
extern "C" void func_00189748(char *, int); extern "C" void func_001A40A8(char *, int); extern "C" void func_001A49B8(char *, int); extern "C" void func_00187B80(char *, int); extern "C" void func_00188E30(char *, int);
extern "C" void func_001890D8(char *t, int k) { *(char **)t = D_0032CA58; func_00189748(t + 0x30614, 2); func_001A40A8(t + 0x300D4, 2); func_001A49B8(t + 0x2FE04, 2); char *s = t + 0x2FDE0; *(char **)(s + 8) = D_00327800; func_00187B80(t, 0); if (k & 1) func_00188E30(t, 0x48E80); }

