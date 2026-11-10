typedef struct S { short d[38]; } S;
typedef struct G { char p[0xB8]; S s; char q[0x11C - 0xB8 - 0x4C]; int sem; } G;
extern G D_004ACB40[];
void func_00286EE0(int); void func_00286EC0(int);
void func_00270070(S *o) { G *g = D_004ACB40; func_00286EE0(g->sem); *o = g->s; func_00286EC0(g->sem); }

