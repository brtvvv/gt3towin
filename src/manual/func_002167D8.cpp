extern "C" int func_00216038(char *);
extern "C" int func_002167D8(char *t, int k) { int c = 0; for (int i = 0; i < 6; i++) { char *p = t + i * 0xAA0; for (int j = 7; j >= 0; j--) { if (func_00216038(p) == k) c++; p += 0x154; } } return c; }

