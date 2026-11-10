extern "C" void func_001454D0(char *, char *); extern "C" int func_00240F88(int, char *, char *, int, int); extern "C" int func_00241B50(int);
extern "C" int func_00145528(char *t, int b) { char n[0x50]; func_001454D0(t, n); if (func_00240F88(b, n, t + 0x230, 0, 0x60)) return 0; if (func_00241B50(b) < 0x60) return 0; *(int *)(t + 0x5C) = 1; *(int *)(t + 0x290) = 1; return 1; }

