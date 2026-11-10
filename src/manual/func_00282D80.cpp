struct T { char p[0x30]; int x30; char *x34; };
extern char D_0034A820[], D_0034A810[];
extern "C" int func_0027FC78(char *, char *);
extern "C" char *func_00282D80(T *t, int a, char *s) { if (s) { if (func_0027FC78(s, D_0034A820) && func_0027FC78(s, D_0034A810)) return 0; t->x30 = a; t->x34 = s; } return D_0034A820; }

