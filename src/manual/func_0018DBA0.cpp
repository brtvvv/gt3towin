extern char D_0032E538[], D_00327800[];
extern "C" void func_00192220(char *, int); extern "C" void func_001A40A8(char *, int); extern "C" void func_001A49B8(char *, int); extern "C" void func_00187B80(char *, int); extern "C" void func_0018D918(char *, int);
extern "C" void func_0018DBA0(char *t, int k) { *(char **)t = D_0032E538; func_00192220(t + 0x30618, 2); func_001A40A8(t + 0x300D8, 2); func_001A49B8(t + 0x2FE08, 2); char *s = t + 0x2FDE0; *(char **)(s + 8) = D_00327800; func_00187B80(t, 0); if (k & 1) func_0018D918(t, 0x48E80); }

