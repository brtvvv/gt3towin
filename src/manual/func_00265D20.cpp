struct S { int x0, x4, x8, xC; };
extern "C" int func_00287DD8(int);
extern "C" int func_00265D20(int a, S *s) { s->x0 &= ~1; func_00287DD8(s->xC); int v = *(volatile int *)0x1000E010; *(volatile int *)0x1000E010 = 8; *(volatile int *)0x1000E010; __asm__ volatile("sync"); int m = 0x80000; if (v & m) { *(volatile int *)0x1000E010 = m; *(volatile int *)0x1000E010; __asm__ volatile("sync"); } __asm__ volatile("sync"); __asm__ volatile("ei"); return 0; }

