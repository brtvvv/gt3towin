struct T { char p[8]; short x8; char q[0x16 - 0xA]; short x16; int x18, x1C; char r[0x34 - 0x20]; short x34, x36; char s[0x92 - 0x38]; short x92; char u[0xA0 - 0x94]; int xA0, xA4, xA8; char v[0xD0 - 0xAC]; short xD0, xD2; };
extern "C" void func_00200348(T *t, int a, int b) { t->x36 = 0; if (t->x92 == 1 && t->x8 != a) { t->x34 = 1; t->x92 = 0; } switch (t->x16) { case 0: t->xA0 = 0; t->xA4 = t->x18; break; case 1: t->xA0 = 1; t->xA4 = t->x18; t->xA8 = t->x1C; break; } if (b > 50) b = 50; t->xD0 = b; if (b < 0) b = 1; t->xD2 = b; }

