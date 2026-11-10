struct G { char p[0x24]; int x24; };
extern int D_0030750C[]; extern int D_00307508[]; extern G D_004AD600[]; extern int D_004AD680[]; extern int D_004AEBC0[];
extern "C" int func_00286EF0(int); extern "C" void func_00286EC0(int); extern "C" int func_00289DA8(void *, int, int, void *, int, void *, int, int, int);
extern "C" int func_00275030(int a, int b) { if (func_00286EF0(D_0030750C[0]) < 0) return -200; if (!D_004AD600[0].x24) { func_00286EC0(D_0030750C[0]); return -100; } int *q = D_004AD680; q[2] = b; q[1] = a; int r = func_00289DA8(D_004AD600, 0x10, 1, q, 0x30, D_004AEBC0, 4, 0, 0); if (!r) D_00307508[0] = 0x10; else func_00286EC0(D_0030750C[0]); return r; }

