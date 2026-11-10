struct G { char p[0x24]; int x24; };
struct N { int x0, x4, x8, xC, x10, x14; char *x18; void *x1C; };
extern int D_0030750C[]; extern int D_00307508[]; extern G D_004AD600[]; extern int D_004AEBC0[]; extern N D_004AD680[];
extern "C" int func_00286EF0(int); extern "C" void func_00286EC0(int); extern "C" int func_00289DA8(void *, int, int, void *, int, void *, int, void *, void *); extern "C" void func_002894B8(void *, int); extern "C" int func_00289F98(void *); extern "C" void func_002749F8(int);
extern char D_004ADB00[]; extern int D_004AD628[], D_004AD62C[], D_004AD630[]; extern "C" void func_00274B20();
extern "C" int func_00274B78(int a, int b, int c, int d, int e) { if (func_00286EF0(D_0030750C[0]) < 0) return -200; if (!D_004AD600[0].x24) { func_00286EC0(D_0030750C[0]); return -100; } N *q = D_004AD680; q->x4 = a; q->x8 = b; q->x1C = D_004ADB00; if (c) D_004AD680[0].x14 = 1; else D_004AD680[0].x14 = 0; if (d) D_004AD680[0].x10 = 1; else D_004AD680[0].x10 = 0; if (e) D_004AD680[0].xC = 1; else D_004AD680[0].xC = 0; char *buf = D_004ADB00; D_004AD628[0] = c; D_004AD62C[0] = d; D_004AD630[0] = e; func_002894B8(buf, 0xC0); int r = func_00289DA8(D_004AD600, 1, 1, D_004AD680, 0x30, D_004AEBC0, 4, (void *)func_00274B20, buf); if (!r) D_00307508[0] = 1; else func_00286EC0(D_0030750C[0]); return r; }

