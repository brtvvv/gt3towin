extern "C" void func_0024BC58(int); extern "C" void func_0024B760(unsigned char *s) { unsigned int c; while ((c = *s++) != 0) { if (c & 0x80) c = (c << 8) + *s++; func_0024BC58(c); } }
