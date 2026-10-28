struct G { char p[0x68]; char a[0xB4]; int sem; };
extern G D_004ACB40;
extern "C" void func_00286EE0(int), func_00286EC0(int);
extern "C" int func_00289F98(char *), func_00289DA8(char *, int, int, int, int, int, int, int, int);
extern "C" int func_0026FDC8(void) { G *g = &D_004ACB40; char *a = g->a; func_00286EE0(g->sem); if (func_00289F98(a)) { func_00286EC0(g->sem); return 1; } int r = func_00289DA8(a, 0x40000000, 1, 0, 0, 0, 0, 0, 0); func_00286EC0(g->sem); return r; }
