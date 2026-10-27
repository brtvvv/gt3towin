#define SPR ({ char *_s = (char *)0x70003000; __asm__("" : "+r"(_s)); _s; })
int func_00252AD8(void) { return *(int *)(SPR + 0x118); }

