extern volatile int D_00354CE0; extern int D_00354CD4;
extern "C" int func_00287DD8(int);
extern "C" int func_002666A0() { D_00354CE0 &= ~1; func_00287DD8(D_00354CD4); int v = *(volatile int *)0x1000E010; *(volatile int *)0x1000E010 = 8; *(volatile int *)0x1000E010; __asm__ volatile("sync"); int m = 0x80000; if (v & m) { *(volatile int *)0x1000E010 = m; *(volatile int *)0x1000E010; __asm__ volatile("sync"); } __asm__ volatile("sync"); __asm__ volatile("ei"); return 0; }

