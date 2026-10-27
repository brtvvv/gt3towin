#define SPR ({ char *_s = (char *)0x70003000; __asm__("" : "+r"(_s)); _s; })
int func_002592E8(void) { unsigned char *s = (unsigned char *)SPR; return s[0x48] | s[0x49] << 8 | s[0x4A] << 16; }

