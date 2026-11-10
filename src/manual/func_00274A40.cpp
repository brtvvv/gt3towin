struct G { char p[0x24]; int x24; };
struct N { int x0, x4, x8, xC, x10, x14; char *x18; void *x1C; };
extern int D_0030750C[]; extern int D_00307508[]; extern G D_004AD600[]; extern int D_004AEBC0[]; extern N D_004AD680[];
extern "C" int func_00286EF0(int); extern "C" void func_00286EC0(int); extern "C" int func_00289DA8(void *, int, int, void *, int, void *, int, void *, void *); extern "C" void func_002894B8(void *, int); extern "C" int func_00289F98(void *); extern "C" void func_002749F8(int);
extern "C" int func_00274A40(int mode, int *cmd, int *res) { if (!D_00307508[0]) return -1; int r = func_00289F98(D_004AD600); if (!mode && r) { while (func_00289F98(D_004AD600)) func_002749F8(0x3C); r = 0; } r = r == 0; if (cmd) *cmd = D_00307508[0]; if (r) { D_00307508[0] = 0; if (res) *res = D_004AEBC0[0]; func_00286EC0(D_0030750C[0]); } return r; }

