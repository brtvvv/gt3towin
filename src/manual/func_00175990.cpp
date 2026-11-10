struct N { char p[0x10]; N *next; int k; char q[8]; char x20[4]; };
struct L { char p[0x14]; N *head; };
struct A { char p[0x18]; L *x18; };
struct T { int x0, x4; char p[4]; char xC[0x924 - 0xC]; int x924[7]; int x940; };
extern "C" void func_00179728(L *); extern "C" int func_00235420(char *); extern "C" int func_002354A0(char *); extern "C" void func_001B3078(char *, int, int, int); extern "C" void func_001B3208(char *, int, int); extern "C" void func_001B3250(char *, int);
extern "C" void func_00175990(T *t, A *a) { if (t->x940) return; if (!t->x0) return; func_00179728(a->x18); int i = 0; for (N *n = a->x18->head; n; n = n->next, i++) { int k = n->k; if (t->x924[k]) continue; char *s = n->x20; char *g = t->xC; int r1 = func_00235420(s); func_001B3078(g, i, r1, func_002354A0(s)); func_001B3208(g, i, k); if (n->k == t->x4) func_001B3250(g, i); } }

