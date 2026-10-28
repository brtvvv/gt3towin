struct G { char p[0x114]; int h; };
extern G D_004ACB40[];
extern "C" void func_00286DD0(int);
extern "C" void func_0026FF80(void) { G *g = D_004ACB40; if (g->h != -1) { func_00286DD0(g->h); g->h = -1; } }

