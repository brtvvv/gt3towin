struct L8 { char c[8]; };
struct G { int x0; char p[0x4C]; L8 x50; };
extern G D_004A84C0;
extern "C" void func_00286EE0(int); extern "C" void func_0025C420(G *, int, int, int, int);
extern "C" void func_0025C768(L8 *s) { func_00286EE0(D_004A84C0.x0); G *g = &D_004A84C0; g->x50 = *s; func_0025C420(g, 2, 1, 0, 0); }

