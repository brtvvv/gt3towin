struct B { char p[0x1918]; int f; }; extern "C" int func_001F6360(void *, B *, int); extern "C" void func_00182820(char *a, B *b) { b->f = 1; func_001F6360(a + 0x16E04, b, 1); }
