struct G { char p[0x11C]; int x11C; };
extern struct G D_004ACB40;
void func_00286EE0(int); void func_002706A0(int, int, int); void func_00286EC0(int);
void func_0026FA58(int a, int b, int c) { struct G *g = &D_004ACB40; func_00286EE0(g->x11C); func_002706A0(a, b, c); func_00286EC0(g->x11C); }

