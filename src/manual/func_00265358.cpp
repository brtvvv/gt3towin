extern "C" void func_00265920();
extern "C" unsigned func_00265358() { func_00265920(); *(volatile int *)0x10002000 = 0x40000000; *(volatile int *)0x10002000; __asm__ volatile("sync"); func_00265920(); unsigned long v = *(volatile unsigned long *)0x10002000; return (unsigned)(v & 0xFFFFFFFFul) >> 8; }

