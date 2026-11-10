extern char D_0032B018[];
extern "C" void func_001A40A8(char *, int); extern "C" void func_001A3A28(char *, int); extern "C" void func_00182718(char *, int); extern "C" void func_001838A8(char *, int);
extern "C" void func_00183AA0(char *t, int k) { *(void **)t = D_0032B018; func_001A40A8(t + 0x25348, 2); func_001A3A28(t + 0x2509C, 2); func_00182718(t, 0); if (k & 1) func_001838A8(t, 0x33C40); }

