typedef struct { char p[0x11C]; int h; } G;
extern G D_004ACB40[];
void func_00286EE0(int), func_002706A0(int, int, int), func_00286EC0(int);
void func_0026FA58(int a, int b, int c) { G *g = D_004ACB40; func_00286EE0(g->h); func_002706A0(a, b, c); func_00286EC0(g->h); }

