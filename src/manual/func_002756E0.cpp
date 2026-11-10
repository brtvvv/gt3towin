struct G { char p[0x24]; int x24; };
struct M { int x0, x4, x8; char p[8]; char s[0x3FF]; char x413; };
extern int D_0030750C[]; extern int D_00307508[]; extern G D_004AD600[]; extern int D_004AEBC0[];
extern "C" int func_00286EF0(int); extern "C" void func_00286EC0(int); extern "C" int func_00289DA8(void *, int, int, void *, int, void *, int, int, int); extern "C" void func_00280088(char *, char *, int);
extern M D_004AD6B0[];
extern "C" int func_002756E0(int a, int b, char *s) { if (func_00286EF0(D_0030750C[0]) < 0) return -200; G *g = D_004AD600; if (!g->x24) { func_00286EC0(D_0030750C[0]); return -100; } if (!s || !*s) { func_00286EC0(D_0030750C[0]); return -210; } M *m = D_004AD6B0; m->x0 = a; m->x4 = b; func_00280088(m->s, s, 0x3FF); m->x413 = 0; int r = func_00289DA8(g, 0x12, 1, m, 0x414, D_004AEBC0, 4, 0, 0); if (!r) D_00307508[0] = 0x12; else func_00286EC0(D_0030750C[0]); return r; }

