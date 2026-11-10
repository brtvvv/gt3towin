struct G { int x0, x4, x8, xC, x10; };
extern G D_004A9000;
extern "C" int func_00261C20(int);
extern "C" void func_00261ED0(int a) { G *g = &D_004A9000; g->x8 = func_00261C20(3); g->xC = func_00261C20(4); int r = func_00261C20(5); g->x10 = r; g->x4 = a; D_004A9000.x0 = 1; }

