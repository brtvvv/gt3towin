extern "C" int func_00216038(char *);
extern "C" int func_002166D8(char *s, int k) { char *p = s + k * 0xAA0; for (int i = 0; i < 8; i++, p += 0x154) if (func_00216038(p)) return 0; return 1; }

