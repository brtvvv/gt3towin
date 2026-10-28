struct E { int a; int b; };
struct L { int a; int n; E **e; };
extern "C" L *func_0021EB30(int, int);
extern "C" int func_0021E8E0(int, int *, E *);
extern "C" int func_0021EB80(int a, int b, int i, int *out) { L *l = func_0021EB30(a, b); if (out) *out = 0; if (i < 0) return 0; if (i < l->n) { E *e = l->e[i]; return func_0021E8E0(e->b, out, e); } return 0; }
