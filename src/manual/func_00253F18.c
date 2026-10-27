#define SPR ({ char *_s = (char *)0x70003000; __asm__("" : "+r"(_s)); _s; })
void func_002536C0(void *);
void func_00253F18(float f) { char *s = SPR; *(float *)(s + 0x164) = f; func_002536C0(s); }

