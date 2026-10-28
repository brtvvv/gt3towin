typedef struct { char p[0x11C]; int h; } G;
extern G D_004ACB40[];
void func_00286EE0(int), func_00270410(int, int), func_00286EC0(int);
void func_0026F9B8(int a, int b) { G *g = D_004ACB40; func_00286EE0(g->h); func_00270410(a, b); func_00286EC0(g->h); }

