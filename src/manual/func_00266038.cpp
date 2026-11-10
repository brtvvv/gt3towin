extern "C" void func_00265920();
extern "C" short func_00266038() { func_00265920(); *(volatile int *)0x10002000 = 0x3C000000; *(volatile int *)0x10002000; __asm__ volatile("sync"); func_00265920(); unsigned short u = *(volatile long *)0x10002000 & 0xFFFF; return (short)u; }

