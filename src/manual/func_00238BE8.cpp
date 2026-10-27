struct S { char p[0x1E8]; unsigned char b[11]; };
extern "C" void func_00238BE8(S *p, int n) { if (n < 0x57) p->b[n >> 3] &= ~(1 << (n & 7)); }

