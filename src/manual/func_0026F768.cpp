struct G { char p[0x68]; char a[0x24]; int f; char b[4]; };
extern G D_004ACB40;
extern "C" void func_00289BD8(char *, int, int), func_00287320(void);
extern "C" void func_0026F768(void) { G *g = &D_004ACB40; do { func_00289BD8(g->a, 0x4D494650, 0); func_00287320(); } while (!g->f); do { func_00289BD8(g->b, 0x53494650, 0); func_00287320(); } while (!g->f); }
