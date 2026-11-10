extern "C" int func_00216038(char *);
extern "C" int func_00216A48(char *t) { int c = 0; for (int i = 0; i < 6; i++) { char *p = t + i * 0xAA0; for (int j = 7; j >= 0; j--) { if (func_00216038(p) != -1) c++; p += 0x154; } } return c; }

