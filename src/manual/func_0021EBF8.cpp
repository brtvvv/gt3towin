struct I { char p[8]; unsigned v; };
struct L { int x; int n; I **e; };
extern "C" L *func_0021EB30(int, int);
extern "C" unsigned func_0021EBF8(int a, int b, int i) { L *l = func_0021EB30(a, b); if (i >= 0 && i < l->n) return l->e[i]->v; return 0xFFFFFFFFu; }

