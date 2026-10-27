#define SPR ({ char *_s = (char *)0x70003000; __asm__("" : "+r"(_s)); _s; })
void func_0025BB20(void *);
void func_00252A50(int v) { char *s = SPR; *(int *)(s + 0x1C8) = v; func_0025BB20(s); }

