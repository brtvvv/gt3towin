#define SPR ({ char *_s = (char *)0x70003000; __asm__("" : "+r"(_s)); _s; })
void func_00256D50(float x, float y, float z, float w) { char *s = SPR; *(float *)(s + 0xA40) = x; *(float *)(s + 0xA44) = y; *(float *)(s + 0xA48) = z; *(float *)(s + 0xA4C) = w; }
