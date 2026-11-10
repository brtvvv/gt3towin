struct SP { int cur, max, init, nw; unsigned attr, opt; };
extern int D_003098D0[]; extern char D_004B2680[]; extern int D_004B2000[];
extern "C" int func_0028AA28(int); extern "C" void func_0028AA68(); extern "C" void func_0028AA58(); extern "C" int func_00286EA0(SP *); extern "C" void func_00286EB0(int); extern "C" void func_00286EE0(int); extern "C" int func_00289DA8(void *, int, int, void *, int, void *, int, int, int);
#define UNC (*(int *)((int)D_004B2000 | 0x20000000))
#define TAIL(c, n, e) SP sp; sp.max = 1; sp.init = 0; sp.opt = 0; int s = func_00286EA0(&sp); int res; p->sema = s; p->res = &res; p->len = 4; if (func_00289DA8(D_004B2680, c, 0, D_004B13C0, n, D_004B2000, 4, 0, 0) < 0) { func_00286EB0(s); func_0028AA58(); return e; } int ok = UNC; func_0028AA58(); if (!ok) { func_00286EB0(s); return e; } func_00286EE0(s); func_00286EB0(s); return res;
struct P { int sema; int *res; int len; int xC; char s[0x400]; };
extern P D_004B13C0[];
extern "C" int func_0028BF30(char *str, int b) { P *p = D_004B13C0; func_0028AA28(0x7); if (!D_003098D0[0]) func_0028AA68(); int i = 0; p->s[0] = str[0]; if (p->s[0]) { do { i++; if (i >= 0x400) break; p->s[i] = str[i]; } while (p->s[i]); } if (i == 0x400) { p->s[0x3FF] = 0; i = 0x3FF; } p->xC = b; TAIL(7, i + 0x11, -11) }

