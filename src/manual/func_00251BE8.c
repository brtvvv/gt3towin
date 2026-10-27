#define SPR ({ char *_s = (char *)0x70003000; __asm__("" : "+r"(_s)); _s; })
int func_00251BE8(void) { return *(unsigned char *)(SPR + 0x1BE); }

