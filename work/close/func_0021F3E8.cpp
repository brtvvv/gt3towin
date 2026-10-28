struct S { int n; int *tab; };
static inline char *rel(void *b, long o) { return (char *)b + o; }
extern "C" int func_0021F3D0(char *);
extern "C" S *func_0021F3E8(S *s) { s->tab = (int *)rel(s, (int)s->tab); for (int i = 0; i < s->n; i++) s->tab[i] = func_0021F3D0(rel(s, s->tab[i])); return s; }
