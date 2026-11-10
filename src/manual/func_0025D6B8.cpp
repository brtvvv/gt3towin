struct G { int x0; char p[0x3C]; int x40, x44, x48; };
extern "C" void func_00286EE0(int); extern "C" void func_0025C420(G *, int, int, int, int);
extern "C" void func_0025D6B8(G *g, int a, int b, int c) { func_00286EE0(g->x0); g->x40 = a; g->x44 = b; g->x48 = c; func_0025C420(g, 5, 1, 0, 0); }

