#define SPR ({ char *_s = (char *)0x70003000; __asm__("" : "+r"(_s)); _s; })
int func_002593B0(void) { return *(int *)(SPR + 0x1C4); }

