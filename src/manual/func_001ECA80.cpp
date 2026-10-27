struct B { char p[0x3E9]; signed char c; unsigned char b; }; extern "C" int func_001ECA80(char *s) { B *b = (B *)(s + 0xF84); if (b->b) return 0; return b->c == 0; }
