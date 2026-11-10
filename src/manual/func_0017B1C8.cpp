struct T { char p[0x18]; int x18; char q[0x60 - 0x1C]; int x60; char r[0x14]; int x78; char s[8]; char x84[4]; };
extern "C" void func_00179728(int); extern "C" int func_0017A080(char *, int, int *, int);
extern "C" void func_0017B1C8(T *t) { func_00179728(t->x18); char *m = t->x84; if (func_0017A080(m, 8, 0, 1)) t->x60 = 0; t->x78 = 0; int st[4]; while (func_0017A080(m, 13, st, 1)) { if (!st[0]) t->x78 = 1; } }

