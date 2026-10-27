#define SPR ({ char *_s = (char *)0x70003000; __asm__("" : "+r"(_s)); _s; })
int func_002568F0(int a) { return *(unsigned short *)(SPR + 4) | a; }

