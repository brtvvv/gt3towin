#define SPR ({ char *_s = (char *)0x70003000; __asm__("" : "+r"(_s)); _s; })
void func_00259310(float *p) { char *s = SPR; p[0] = *(float *)(s + 0xB9C); p[1] = *(float *)(s + 0xB8C); p[2] = *(float *)(s + 0xBAC); }

