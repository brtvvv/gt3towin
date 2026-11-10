extern char *D_003548F8; extern "C" int func_0023FE20(int); extern "C" int func_00268810(int, int, int, int); extern "C" int func_00268C00(int, int, int); extern "C" int func_00268328(int); extern "C" int func_002402B0(int, int); extern "C" void func_0023F3C0(char *, int, int);
extern "C" int func_00240310(int k, int a, int b, int c) { int r = 1; if (func_0023FE20(k)) { r = 5; int s = func_00268810(k / 4, k - k / 4 * 4, a, 0x702); int h = s; if (s >= 0) { r = 0xF; s = func_00268C00(s, b, c); if (s >= 0) { r = 4; s = func_00268328(h); if (!s) r = 0; } }
 r = func_002402B0(r, s); int q = k / 4; int o1 = q * 0x1BC + 0x1418; int o2 = (k - q * 4) * 0x6C + 0xC; func_0023F3C0(D_003548F8 + o1 + o2, s, r); char *e = D_003548F8 + o1 + o2; *(int *)(e + 0x54) = 1; *e = 0; } return r; }

