struct S { char p[0x2A]; short x2A; };
extern char D_00352BE8[];
extern "C" S *func_001C5450(); extern "C" int func_001DA590(S *, int *, int, int); extern "C" void func_0024C4D0(char *, char *, int);
extern "C" void func_00122A10(int a, char *b) { int st[4]; int r = func_001DA590(func_001C5450(), st, 0x7073, 0); S *s = func_001C5450(); func_0024C4D0(b, D_00352BE8, (int)((float)s->x2A / (float)r * 1000.0f)); }

