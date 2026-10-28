struct Sub { char p[0x540]; char *q; };
struct G { char p[0x307C8]; Sub s; };
extern "C" G *func_00219680(void);
extern "C" int func_00168210(char *);
extern "C" int func_00164918(char *s, int v) { int r = 0; Sub *g = &func_00219680()->s; if (g->q) { char *p = s + 0xE50; *(int *)(p + 0x184) = v; *(int *)(p + 0x188) = v; r = func_00168210(s + 0xE40); } return r; }

