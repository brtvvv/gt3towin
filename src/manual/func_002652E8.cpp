extern "C" void func_00265920();
extern "C" unsigned func_002652E8(int k) { func_00265920(); volatile int *p = (volatile int *)0x10002000; *p = 0x40000000; *p; __asm__ volatile("sync"); func_00265920(); return (unsigned)(int)(*(volatile unsigned long *)p & 0xFFFFFFFFul) >> -k; }

