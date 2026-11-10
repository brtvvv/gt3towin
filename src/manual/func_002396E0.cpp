struct U { char p[0x190]; long x190; };
struct T { char p[0x18]; U *x18; };
struct R { char p[8]; long e[32]; };
extern char D_00354718[], D_00354720[]; extern char D_002ED3B8[];
extern "C" long func_00232210(char *); extern "C" R *func_00232658(char *, int, long);
extern "C" int func_002396E0(T *t) { U *u = t->x18; if (u->x190 == func_00232210(D_00354718)) return 0; R *r = func_00232658(D_002ED3B8, 0x21, t->x18->x190); long *p = r->e; int i; for (i = 0; i < 32; i++) { if (*p == func_00232210(D_00354720)) break; p++; } return i; }

