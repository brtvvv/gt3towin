struct E { char *name; int x4; };
struct G { int x0; int n; E **e; };
struct L { int n; G **g; };
struct T { char p[0xC]; L *xC; };
extern "C" int func_0027FC78(char *, char *);
extern "C" int func_0021E428(T *t, char *name) { for (int i = 0; i < t->xC->n; i++) { G *g = t->xC->g[i]; for (int j = 0; j < g->n; j++) { E *e = g->e[j]; if (!func_0027FC78(e->name, name)) return e->x4; } } return 0; }

