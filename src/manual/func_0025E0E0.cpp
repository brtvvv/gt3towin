struct G { int x0; char p[0x3C]; long x40, x48; };
extern G D_004A8E20;
extern "C" void func_00286EE0(int); extern "C" void func_0025C420(G *, int, int, int, int);
extern "C" void func_0025E0E0(long a, long b) { func_00286EE0(D_004A8E20.x0); G *g = &D_004A8E20; g->x40 = a; g->x48 = b; func_0025C420(g, 3, 1, 0, 0); }

