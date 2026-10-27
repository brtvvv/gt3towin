struct B { char p[0x540]; int x; }; extern "C" int func_0021B6A0(char *s) { B *b = (B *)({ char *_p = s + 0x307C8; __asm__("" : "+r"(_p)); _p; }); return b->x; }
