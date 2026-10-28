#define SPR ({ char *_s = (char *)0x70003000; __asm__ __volatile__("" : "+r"(_s)); _s; })
typedef unsigned long ul;
extern "C" void func_00253958(int m) {
    char *s = SPR;
    if (m == 5) *(ul *)(s + 0xB0) |= 0x8000;
    else if (m == 2) *(ul *)(s + 0xB0) &= ~0x8000L;
    *(ul *)(s + 0xE8) |= 0x400040;
}

