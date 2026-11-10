extern char *D_002B3244[]; extern char D_003530F8[];
extern "C" char *func_0027FDBC(char *, char *); extern "C" char *func_0027F9CC(char *, char *); extern "C" char *func_00280088(char *, char *, int); extern "C" void func_00142F80(char *, char *); extern "C" void func_00144520(char *, char *); extern "C" void func_00145680(char *, int, int, int, int, int, int, int, int);
extern "C" void func_001460A8(char *t, int a, int b, int c, int d, int e, int f) { char buf[0x50]; char o[0x50]; char n[0x30]; func_0027FDBC(buf, D_002B3244[0]); func_0027F9CC(buf, D_003530F8); func_00280088(n, t + 0x258, 0x10); n[16] = 0; func_00142F80(o, n); func_0027F9CC(buf, o); func_00144520(t, buf); func_00145680(t, a, b, c, 0x52, d, e, f, 1); }

