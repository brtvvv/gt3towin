struct B { char p[0x288]; virtual void f0();  virtual void init(); };
struct S { char p[0x3C]; int x3C, x40; };
struct W { char p[0xB00]; void *xB00; int xB04; void *xB08; char q[0xC]; void *xB18; int xB1C; void *xB20; void *xB24; int xB28; void *xB2C; };
struct T : B { char q[0x28C - 0x28C]; };
extern int D_00353318, D_003532F0, D_00352C8C, D_00353310, D_00353334, D_003540E8, D_003540E4; extern char D_002AE298[], D_0029C258[], D_002AA650[], D_002AD080[], D_002AE628[];
extern "C" void func_001CC9E0(T *); extern "C" void func_001CC3A0(S *); extern "C" void func_001B7240(W *, char *, int); extern "C" void func_001C33E0(char *, char *, int, T *); extern "C" void func_001C33F0(char *, char *, int, T *);
extern "C" void func_0015D508(T *t) { char *c = (char *)t; char *a = c + 0x3B8, *b = c + 0x43C; W *w = (W *)(c + 0x2E4); S *s = (S *)(c + 0x28C); func_001CC9E0(t); t->init(); func_001CC3A0(s); s->x40 = 0; s->x3C = 1; func_001B7240(w, c + 0x290, 0);
 int k = D_003532F0; w->xB20 = t; w->xB2C = t; w->xB18 = D_002AE298; w->xB1C = D_00353318; w->xB24 = D_0029C258; w->xB28 = D_00352C8C; func_001C33E0(a, D_002AA650, k, t); func_001C33E0(b, D_002AA650, k, t);
 int k2 = D_00353310; func_001C33F0(a, D_002AD080, k2, t); func_001C33F0(b, D_002AD080, k2, t); w->xB08 = t; w->xB04 = D_00353334; w->xB00 = D_002AE628; D_003540E8 = 0; D_003540E4 = 0; }

