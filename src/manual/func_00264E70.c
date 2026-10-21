void func_00265920(void); void func_00264E70(int x) { func_00265920(); *(volatile int *)0x10002000 = x & 0x7F; *(volatile int *)0x10002000; __asm__ volatile ("sync"); func_00265920(); }
