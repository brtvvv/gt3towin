struct T { char p[0x5C]; int x5C; char q[0x84 - 0x60]; char s[4]; };
extern int D_00353948, D_0035394C; extern unsigned char D_00353950;
extern "C" int func_0017A080(char *, int, int, int); extern "C" void func_001A8650(int);
extern "C" void func_00193788(T *t) { char *s = t->s; if (func_0017A080(s, 2, 0, 1)) D_00353948 = 1; if (D_00353948) { int v = t->x5C; if (!v) D_00353948 = 0; else if (v < 200 && v % 50 == 0) func_001A8650(20); } if (func_0017A080(s, 3, 0, 1)) { func_001A8650(0x15); D_0035394C = 1; } else D_0035394C = 0; D_00353950 <<= 1; while (func_0017A080(s, 0x16, 0, 1)) D_00353950 |= 1; }

