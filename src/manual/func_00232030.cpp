struct C { char c[0x3C]; };
extern "C" char *func_00232030(char *s, char *d) { *(C *)d = *(C *)(s + 0x20); return d + 0x3C; }

