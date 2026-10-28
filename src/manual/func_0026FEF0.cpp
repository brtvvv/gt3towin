struct G { char p[0x10C]; int a; int b; char q[8]; int h; };
extern G D_004ACB40[];
extern "C" void func_00286EE0(int), func_00286EC0(int);
extern "C" int func_0026FEF0(int a, int b) { G *g = D_004ACB40; func_00286EE0(g->h); g->b = b; g->a = a; func_00286EC0(g->h); return a; }

