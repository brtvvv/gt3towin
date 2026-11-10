struct G { int x0; char p[0x3C]; int x40, x44, x48; };
extern "C" void func_00286EE0(int); extern "C" void func_0025C420(G *, int, int, int, int);
extern "C" void func_0025E9E0(G *g, int mode, int a, int b, int c) { func_00286EE0(g->x0); g->x40 = a; g->x44 = b; g->x48 = c; func_0025C420(g, mode, 0, 0, 0); }

