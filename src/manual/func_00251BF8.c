struct G { char p[0x99]; unsigned char x99, x9A, x9B; };
extern struct G D_004A8380;
void func_00251C60(void); void func_00251D18(struct G *); void func_00251CA8(void);
void func_00251BF8(int a, int b, int c) { struct G *g = &D_004A8380; if (g->x99 == a && g->x9A == b && g->x9B == c) return; func_00251C60(); func_00251D18(g); func_00251CA8(); }

