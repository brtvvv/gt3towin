struct E { char p[0x1B]; signed char k; };
struct G { int a; short pad; short h6; char b8; char p[0xF]; E e[47]; };
extern int D_00354B4C;
extern G D_00300FE8[];
extern "C" void func_0027ED70(void *, int, int), func_002697D0(int);
extern "C" void func_00269740(void) { if (D_00354B4C) return; G *g = D_00300FE8; func_0027ED70(g, 0, 0x53C); D_00300FE8[0].a = 0; g->h6 = 0x3FFF; g->b8 = 0; E *e = g->e; for (int i = 46; i >= 0; i--, e++) e->k = -1; func_002697D0(0x3C); D_00354B4C = 1; }
