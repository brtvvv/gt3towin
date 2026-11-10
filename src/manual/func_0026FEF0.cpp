struct G { char p[0x10C]; int x10C, x110; char q[8]; int x11C; };
extern G D_004ACB40;
extern "C" void func_00286EE0(int); extern "C" void func_00286EC0(int);
extern "C" int func_0026FEF0(int a, int b) { G *g = &D_004ACB40; func_00286EE0(g->x11C); g->x110 = b; g->x10C = a; func_00286EC0(g->x11C); return a; }

