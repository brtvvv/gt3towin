struct G { int x0; char p[0x3C]; int x40, x44, x48; };
extern G D_004A8910;
extern "C" void func_00286EE0(int); extern "C" void func_0025C420(G *, int, int, int, int);
extern "C" void func_0025D3A0(int a, int b, int c) { func_00286EE0(D_004A8910.x0); G *g = &D_004A8910; g->x40 = a; g->x44 = b; g->x48 = c; func_0025C420(g, 5, 1, 0, 0); }

