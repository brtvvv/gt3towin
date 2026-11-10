extern void func_00265C80(void); extern void func_00264C28(char *, char *, int); extern void func_00265CB0(void);
void func_00264B70(char *a, char *b, int n) { int q, r, i; func_00265C80(); q = n / 0x300; r = n % 0x300; for (i = 0; i < q; i++) { func_00264C28(a, b, 0x300); a += 0xC0000; b += 0x48000; } if (r) func_00264C28(a, b, r); func_00265CB0(); }

