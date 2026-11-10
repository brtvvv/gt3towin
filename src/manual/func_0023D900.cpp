struct E { int x0; };
struct R { char p[0x10]; unsigned short n; E **e; };
struct T { char p[0x220]; int a[8]; };
extern char D_002F49E0[];
extern "C" R *func_002428C8(char *, int, int, int, char *); extern "C" int func_0024AC48(R *); extern "C" int func_0023E260(T *, int); extern "C" void func_0023E2D8(T *, int, E *);
extern "C" int func_0023D900(T *t, char *name) { int i; for (i = 0; i < 8 && t->a[i]; i++); if (i == 8) return -2;
 R *r = func_002428C8(name, 0, 0, 1, D_002F49E0); if (!r) return -1; t->a[i] = func_0024AC48(r);
 for (int j = 0; j < r->n; j++) { E *e = r->e[j]; if (!e) return -1; if (!func_0023E260(t, e->x0)) func_0023E2D8(t, e->x0, e); }
 return i; }

