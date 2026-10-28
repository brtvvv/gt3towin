struct S { char p[0x30]; int b; char *n; };
extern char D_0034A820[], D_0034A810[];
extern "C" int func_0027FC78(const char *, const char *);
extern "C" char *func_00282D80(S *s, int b, char *n) { if (n) { if (func_0027FC78(n, D_0034A820) && func_0027FC78(n, D_0034A810)) return 0; s->b = b; s->n = n; } return D_0034A820; }
