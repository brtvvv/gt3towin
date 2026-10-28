struct H { char p[8]; int n; unsigned off; };
extern "C" H *func_0023A1C0(char **, int, int);
extern "C" unsigned func_0023A2A8(char **s, int u, int i) { H *h = func_0023A1C0(s, u, i); if (!h || i >= h->n) return 0xFFFFFFFFu; char *b = *s; return ((unsigned *)(b + *(int *)(b + 0xC) + h->off / 4 * 4))[i]; }
