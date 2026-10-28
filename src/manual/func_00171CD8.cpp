struct G { char p[0x2E4]; int a; char q[0xB5C]; int b; };
struct S { char p[0x104]; char *x; char q[0x6C]; G *g; };
extern char D_003257D8[];
extern "C" int func_001D8C60(int, char *);
extern "C" void func_001C5E88(int), func_001B8AD8(char *, int);
extern "C" int func_00171CD8(S *s, int a, int k) { G *g = s->g; if (k != 2) return 1; if (func_001D8C60(a, D_003257D8)) { g->b = 0; func_001C5E88(1); g->a = 0; *(int *)(s->x + 0xB4C) = 1; func_001B8AD8(s->x, 0); return 0; } return 1; }
