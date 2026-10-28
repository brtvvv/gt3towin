struct T { void *vt; };
extern char D_0032B018[];
extern "C" void func_001A40A8(char *, int), func_001A3A28(char *, int), func_00182718(T *, int), func_001838A8(T *, int);
extern "C" void func_00183AA0(T *t, int c) { t->vt = D_0032B018; func_001A40A8((char *)t + 0x25348, 2); func_001A3A28((char *)t + 0x2509C, 2); func_00182718(t, 0); if (c & 1) func_001838A8(t, 0x33C40); }
