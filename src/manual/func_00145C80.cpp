typedef void (*CB)(int, float);
extern "C" void func_0027FDBC(char *, char *); extern "C" void func_001454D0(char *, char *); extern "C" int func_00240808(int, char *, char *, int);
extern "C" int func_00145C80(char *t, int a, char *s, CB cb, int u) { if (cb) cb(u, 1.0f); func_0027FDBC(t + 0x258, s); char buf[0x50]; func_001454D0(t, buf); if (func_00240808(a, buf, t + 0x230, 0x60)) return 0; if (cb) { cb(u, 1.0f); return 1; } return 1; }

