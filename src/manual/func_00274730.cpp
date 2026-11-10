struct G { char p[0x24]; int x24; };
struct M { int x0, x4, x8, xC; void *x10; char s[0x3FF]; char x413; };
struct N { int x0, x4, x8, xC, x10, x14; char *x18; void *x1C; unsigned char x20[0x10]; };
extern int D_0030750C[]; extern int D_00307508[]; extern G D_004AD600[]; extern int D_004AEBC0[]; extern N D_004AD680[];
extern "C" int func_00286EF0(int); extern "C" void func_00286EC0(int); extern "C" int func_00289DA8(void *, int, int, void *, int, void *, int, void *, void *); extern "C" char *func_00280088(char *, char *, int); extern "C" void func_002894B8(void *, int); extern "C" void func_00287120(int);
#define POST(c) if (!r) D_00307508[0] = c; else func_00286EC0(D_0030750C[0]); return r;
extern char D_004ADB00[]; extern "C" void func_002746A0();
extern "C" int func_00274730(int a, char *p, int n) { if (func_00286EF0(D_0030750C[0]) < 0) return -200; G *g = D_004AD600; if (!g->x24) { func_00286EC0(D_0030750C[0]); return -100; } char *buf = D_004ADB00; N *q = D_004AD680; q->x0 = a; q->x1C = buf; q->x18 = p; q->xC = n; func_002894B8(p, n); func_002894B8(buf, 0xC0); int r = func_00289DA8(g, 5, 1, q, 0x30, D_004AEBC0, 4, (void *)func_002746A0, buf); POST(5) }

