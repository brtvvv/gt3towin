struct G { char p[0xA0]; int xA0; };
extern struct G D_004A9040; extern int D_00354B10, D_00354B1C, D_00354B20;
void func_00268188(int); void func_00286BA0(int, int); void func_00286CF0(int); void func_00286CB0(int);
void func_002669D0(void) { struct G *g = &D_004A9040; if (!D_00354B10) return; func_00268188(2); D_00354B10 = 0; func_00286BA0(2, g->xA0); func_00286CF0(D_00354B1C); func_00286CF0(D_00354B20); func_00286CB0(D_00354B1C); func_00286CB0(D_00354B20); }

