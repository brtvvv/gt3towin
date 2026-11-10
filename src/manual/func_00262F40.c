struct M { char p[0x30]; int x30, x34, x38, x3C; };
extern int D_00354B0C, D_00354AD4, D_00354ACC, D_00354AF8, D_00354AC8;
void func_00263D98(int, int, int, int); void func_00263018(int, int, int, int, int, int); void func_002644B8(int, int, int, int);
void func_00262F40(struct M *m, int fl, int x, int y) { int X = x << 4, Y = y << 4; int k = 0; func_00263D98(D_00354B0C, D_00354AD4, X, Y); if ((fl & 8) || D_00354AF8 == 2) { func_00263018(D_00354ACC, X, Y, m->x30, m->x34, 0); k = 1; } if (fl & 4) func_00263018(D_00354AC8, X, Y, m->x38, m->x3C, k); func_002644B8(D_00354B0C, D_00354AD4, X, Y); }

