#define CSR (*(volatile unsigned long *)0x12001000)
void func_00251430(void) { int i = 0x3A980; CSR = 8; do { if (CSR & 8) break; } while (--i); CSR = 8; }

