struct C { char c[0x28]; };
extern "C" char *func_00230F28(char *s, char *d) { *(C *)d = *(C *)(s + 0xC); return d + 0x28; }

