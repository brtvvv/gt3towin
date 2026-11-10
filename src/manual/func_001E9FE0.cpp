extern "C" int func_001E9FE0(char *a, char *b, int m) { float *q = (float *)(b + 0x2BC); int bit = 1; float *p = (float *)(a + 0x3B4); for (int i = 0; i < 4; i++, bit <<= 1, p++) if (*p < *(float *)((char *)q + (i >> 1) * 0x44)) m |= bit; return m; }

