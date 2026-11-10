typedef int qword __attribute__((mode(TI)));
extern qword D_00300760[];
void func_00265768(void) { qword *s; volatile qword *p;
 while (*(volatile int *)0x10002010 < 0);
 s = D_00300760; p = (volatile qword *)0x10007010;
 *p = s[0]; *p; __asm__ volatile("sync"); *p = s[1]; *p; __asm__ volatile("sync"); *p = s[2]; *p; __asm__ volatile("sync"); *p = s[3]; *p; __asm__ volatile("sync");
 while (*(volatile int *)0x10002010 < 0);
 *(volatile int *)0x10002000 = 0x50000000; *(volatile int *)0x10002000; __asm__ volatile("sync");
 while (*(volatile int *)0x10002010 < 0); }

