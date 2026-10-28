struct Sub { char p[0x540]; char *q; };
struct G { char p[0x307C8]; Sub s; };
extern "C" G *func_00219680(void);
extern "C" int func_00168210(char *);
extern "C" int func_00164368(char *s, int v) { int r = 0; Sub *g = &func_00219680()->s; if (g->q) { char *p = s + 0xE50; *(int *)(p + 0x16C) = v; *(int *)(p + 0x170) = v; *(int *)(p + 0x174) = v; *(int *)(p + 0x178) = v; r = func_00168210(s + 0xE40); } return r; }
