struct C { char c[0x28]; };
extern "C" void func_00230C30(char *, int);
extern "C" char *func_00230F80(char *t, char *s) { *(C *)(t + 0xC) = *(C *)s; func_00230C30(t, (unsigned char)t[0xC]); return s + 0x28; }

