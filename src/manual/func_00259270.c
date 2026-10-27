#define SPR ({ char *_s = (char *)0x70003000; __asm__("" : "+r"(_s)); _s; })
void func_00259270(float f) { *(float *)(SPR + 0xB70) = f; }

