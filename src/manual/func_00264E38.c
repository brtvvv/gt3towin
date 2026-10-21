void func_00265920(void); void func_002653B8(int); void func_00264E38(void) { int n; func_00265920(); n = *(volatile int *)0x10002020 & 0x7F; func_002653B8(((n + 7) & 0xF8) - n); }
