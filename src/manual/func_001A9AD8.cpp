struct S { int d[0xF50 / 4]; };
struct B { S s; char rest[0x1350 - 0xF50]; };
extern "C" void func_00243018(void *, B *, int);
extern "C" void func_001A9AD8(S *src, void *dst) { B b; int i = 0x134F; char *p = (char *)&b + 0x134F; for (; i >= 0; i--) *p-- = 0; b.s = *src; func_00243018(dst, &b, 0x1350); }

