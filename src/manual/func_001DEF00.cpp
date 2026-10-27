struct B { char p[0x51D]; unsigned char c; }; extern "C" void func_001DEF00(char *s) { B *b = (B *)(s + 0xF84); if (b->c != 0 && b->c != 0xFF) b->c--; }
