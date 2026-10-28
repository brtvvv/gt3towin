struct E { int id; int b; int t; int pad; };
struct S { E *e; int n; int pad; int now; };
extern "C" E *func_0014F1B8(S *s) { int best = -1; E *r = 0; for (int i = 0; i < s->n; i++) { E *e = &s->e[i]; if (e->id < 0) { r = e; break; } int d = s->now - e->t; if (d > best) { best = d; r = e; } } r->b = 0; r->id = -1; r->t = s->now - 1; return r; }
