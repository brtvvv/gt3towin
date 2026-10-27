struct B { char a; unsigned char b1, b2; }; extern "C" int func_001F1AF8(char *s) { B *b = (B *)(s + 0xE340); if (b->b2 != 3) return 0; return b->b1 != 1; }
