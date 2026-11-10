struct SP { int cur, max, init, nw; unsigned attr, opt; };
struct P { int sema; int *res; int len; char a[0x400]; char b[0x400]; char c[0x400]; int xC0C; int xC10; };
extern P D_004B13C0[]; extern int D_003098D0[]; extern char D_004B2680[]; extern int D_004B2000[];
extern "C" int func_0028AA28(int); extern "C" void func_0028AA68(); extern "C" void func_0028AA58(); extern "C" int func_00286EA0(SP *); extern "C" void func_00286EB0(int); extern "C" void func_00286EE0(int); extern "C" int func_00289DA8(void *, int, int, void *, int, void *, int, int, int); extern "C" void func_002894B8(void *, int);
#define UNC (*(int *)((int)D_004B2000 | 0x20000000))
#define CPA int i = 0; p->a[0] = x[0]; if (p->a[0]) { do { i++; if (i >= 0x400) break; p->a[i] = x[i]; } while (p->a[i]); } if (i == 0x400) p->a[0x3FF] = 0;
#define CPB i = 0; p->b[0] = y[0]; if (p->b[0]) { char *d = p->b; do { i++; if (i >= 0x400) break; d[i] = y[i]; } while (d[i]); } if (i == 0x400) p->b[0x3FF] = 0;
#define TL(c, n) SP sp; sp.max = 1; sp.init = 0; sp.opt = 0; int s = func_00286EA0(&sp); int res; p->res = &res; p->sema = s; p->len = 4; func_002894B8(D_004B13C0, n); if (func_00289DA8(D_004B2680, c, 0, D_004B13C0, n, D_004B2000, 4, 0, 0) < 0) { func_00286EB0(s); func_0028AA58(); return -11; } int ok = UNC; func_0028AA58(); if (!ok) { func_00286EB0(s); return -11; } func_00286EE0(s); func_00286EB0(s); return res;
extern "C" int func_0028CF98(char *x, char *y, int a, char *src, int n) { P *p = D_004B13C0; func_0028AA28(0x14); if (!D_003098D0[0]) func_0028AA68(); CPA CPB if (n > 0x400) { func_0028AA58(); return -7; } for (int j = 0; j < n; j++) p->c[j] = src[j]; p->xC10 = n; p->xC0C = a; TL(0x14, 0xC14) }
