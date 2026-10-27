extern "C" void func_00265920(int);
extern "C" void func_002653B8(int x) { func_00265920(x); *(volatile int *)0x10002000 = (x & 0x7F) | 0x40000000; *(volatile int *)0x10002000; __asm__ volatile("sync"); }

