extern "C" void func_001C4CD8(int *s, char *d, int n) { int j = 0; for (int i = 0; i < n && s[i]; i++) { if (s[i] >= 0x100) { d[j++] = s[i] >> 8; d[j++] = s[i]; } else d[j++] = s[i]; } d[j] = 0; }

