extern "C" void func_0023CDC0(unsigned short *s, char *d) { int i; for (i = 0; s[i]; i++) d[i] = *(unsigned char *)&s[i] & 0x7F; d[i] = 0; }

