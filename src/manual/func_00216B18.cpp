extern "C" int func_002164D0(char *, int, int);
extern "C" int func_00216B18(char *t, int a, int b) { for (int i = 0; i < 6; i++) { char *p = t + i * 0xAA0; for (int j = 7; j >= 0; j--) { a = func_002164D0(p, a, b); p += 0x154; } } return a; }

