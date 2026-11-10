struct G { char p[0x11C]; int x11C; };
extern struct G D_004ACB40;
void func_00286EE0(int); void func_00270410(int, int); void func_00286EC0(int);
void func_0026F9B8(int a, int b) { struct G *g = &D_004ACB40; func_00286EE0(g->x11C); func_00270410(a, b); func_00286EC0(g->x11C); }

