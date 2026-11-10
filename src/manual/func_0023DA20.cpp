struct E { int x0; };
struct G { char p[0x10]; unsigned short x10; char q[2]; E **x14; };
struct T { char p[0x220]; G *g[8]; };
extern "C" E *func_0023E260(T *, int); extern "C" void func_0023E3B8(T *, int); extern "C" void func_0026D5B8(G *);
extern "C" void func_0023DA20(T *t, unsigned k) { if (k >= 8) return; G *g = t->g[k]; if (!g) { t->g[k] = 0; return; } for (int i = 0; i < g->x10; i++) { E *e = g->x14[i]; if (func_0023E260(t, e->x0) == e) func_0023E3B8(t, e->x0); } func_0026D5B8(g); t->g[k] = 0; }

