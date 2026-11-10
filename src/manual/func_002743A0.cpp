struct G { char p[0x24]; int x24; };
struct M { int x0, x4, x8, xC; void *x10; char s[0x3FF]; char x413; };
extern int D_0030750C[]; extern int D_00307508[]; extern G D_004AD600[]; extern int D_004AEBC0[];
extern "C" int func_00286EF0(int); extern "C" void func_00286EC0(int); extern "C" int func_00289DA8(void *, int, int, void *, int, void *, int, void *, int); extern "C" char *func_00280088(char *, char *, int); extern "C" void func_002894B8(void *, int);
#define PRE if (func_00286EF0(D_0030750C[0]) < 0) return -200; G *g = D_004AD600; if (!g->x24) { func_00286EC0(D_0030750C[0]); return -100; } if (!s || !*s) { func_00286EC0(D_0030750C[0]); return -210; }
#define POST(c) if (!r) D_00307508[0] = c; else func_00286EC0(D_0030750C[0]); return r;
extern char D_004AD6C4[];
extern "C" int func_002743A0(int a, int b, char *s, int c) { PRE char *d = D_004AD6C4; func_00280088(d, s, 0x3FF); M *m = (M *)(d - 0x14); m->x0 = a; m->x8 = c; m->x4 = b; m->x413 = 0; int r = func_00289DA8(g, 2, 1, m, 0x414, D_004AEBC0, 4, 0, 0); POST(2) }

