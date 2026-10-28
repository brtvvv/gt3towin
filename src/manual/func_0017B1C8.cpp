struct S { char p[0x18]; int x18; char q[0x44]; int x60; char r[0x14]; int x78; char t[8]; char m[4]; };
extern "C" void func_00179728(int);
extern "C" int func_0017A080(char *, int, int *, int);
extern "C" void func_0017B1C8(S *s) { char *m = s->m; func_00179728(s->x18); if (func_0017A080(m, 8, 0, 1)) s->x60 = 0; s->x78 = 0; int t; while (func_0017A080(m, 0xD, &t, 1)) { if (!t) s->x78 = 1; } }
