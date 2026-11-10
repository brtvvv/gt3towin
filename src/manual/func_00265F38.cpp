extern "C" int func_002652E8(int); extern "C" void func_002653B8(int); extern "C" void func_00265920();
extern "C" int func_00265F38() { int s = 0; int v; while ((v = func_002652E8(11)) < 0x18) { if (v != 15) s += 0x21; func_002653B8(11); }
 if (v >= 0x400) { func_002653B8(1); return s + 1; } func_00265920(); volatile int *p = (volatile int *)0x10002000; *p = 0x30000000; *p; __asm__ volatile("sync"); func_00265920(); return s + (int)(*(volatile long *)p & 0xFFFF); }

