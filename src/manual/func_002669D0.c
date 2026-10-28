extern int D_00354B10, D_00354B1C, D_00354B20;
extern char D_004A9040[];
void func_00268188(int), func_00286BA0(int, int), func_00286CF0(int), func_00286CB0(int);
void func_002669D0(void) { char *s = D_004A9040; if (!D_00354B10) return; func_00268188(2); D_00354B10 = 0; func_00286BA0(2, *(int *)(s + 0xA0)); func_00286CF0(D_00354B1C); func_00286CF0(D_00354B20); func_00286CB0(D_00354B1C); func_00286CB0(D_00354B20); }
