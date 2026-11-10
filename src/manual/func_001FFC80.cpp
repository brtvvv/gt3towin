struct L { int p[2]; int *x8; };
struct A { char p[0x18]; L *x18; };
struct T { short x0, x2; int x4; short x8; char pa[0x16 - 0xA]; short x16; int x18; char pb[0x34 - 0x1C]; short x34, x36; float x38, x3C, x40, x44, x48, x4C, x50, x54, x58; char pc[0x70 - 0x5C]; int x70, x74; char pd[0x92 - 0x78]; short x92; char pe[0xA0 - 0x94]; int xA0; char pf[0xC0 - 0xA4]; char m[0x10]; short xD0; };
extern "C" void func_00207278(char *, float, float, float);
extern "C" void func_001FFC80(T *t, A *a, int k) { t->x0 = 0; t->x2 = 0; t->x8 = k; t->x16 = 0; t->x18 = 0; if (a) t->x18 = a->x18->x8[k]; t->x4 = (int)a; t->x74 = k; t->x70 = 1; t->x58 = 1.0f; t->xA0 = -1; t->x92 = 0; t->x34 = 0; t->x36 = 0; t->x38 = t->x3C = 0.0f; t->x40 = t->x44 = t->x48 = 0.0f; t->x4C = t->x50 = t->x54 = 0.0f; t->xD0 = 0; func_00207278(t->m, 0.0f, 0.0f, 3.0f); }

