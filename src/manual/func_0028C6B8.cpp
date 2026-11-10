struct SP { int cur, max, init, nw; unsigned attr, opt; };
struct P { int sema; int *res; int len; int xC; int x10; };
struct F { int x0; int x4; };
extern P D_004B13C0[]; extern int D_003098D0[]; extern char D_004B2680[]; extern int D_004B2000[];
extern "C" void func_0028AA28(int); extern "C" void func_0028AA68(); extern "C" void func_0028AA58(); extern "C" int func_00286EA0(SP *); extern "C" void func_00286EB0(int); extern "C" void func_00286EE0(int); extern "C" F *func_0028A5B0(); extern "C" int func_00289DA8(void *, int, int, void *, int, void *, int, int, int);
#define UNC (*(int *)((int)D_004B2000 | 0x20000000))
extern "C" int func_0028C6B8(int a, int b) { P *p = D_004B13C0; F *f = func_0028A5B0(); func_0028AA28(0xB); if (!D_003098D0[0]) { func_0028AA58(); return -1; } if (!f || !f->x4) { func_0028AA58(); return -9; } int k = f->x0; p->x10 = b; p->xC = k; SP sp; sp.max = 1; sp.init = 0; sp.opt = 0; int s = func_00286EA0(&sp); int res; p->sema = s; p->res = &res; p->len = 4; if (func_00289DA8(D_004B2680, 0xB, 0, p, 0x20, D_004B2000, 4, 0, 0) < 0) { func_00286EE0(s); func_0028AA58(); return -11; } int ok = UNC; func_0028AA58(); if (!ok) { func_00286EB0(s); return -11; } func_00286EE0(s); func_00286EB0(s); return res; }

