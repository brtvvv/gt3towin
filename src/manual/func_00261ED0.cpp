struct G { int a; int b; int c, d, e; };
extern G D_004A9000[];
extern "C" int func_00261C20(int);
extern "C" void func_00261ED0(int x) { G *g = D_004A9000; g->c = func_00261C20(3); g->d = func_00261C20(4); int r = func_00261C20(5); g->e = r; g->a = 1; g->b = x; }

