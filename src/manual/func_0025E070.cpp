struct G { int x0; char p[0x3C]; int x40, x44; };
extern G D_004A8D60;
extern "C" void func_00286EE0(int); extern "C" void func_002876F0(int, int); extern "C" void func_0025C420(G *, int, int, int, int);
extern "C" void func_0025E070(int a, int b) { func_00286EE0(D_004A8D60.x0); G *g = &D_004A8D60; g->x40 = a; g->x44 = b; func_002876F0(a, a + b); func_0025C420(g, 2, 0, 0, 0); }

