struct E { int k; int p[3]; }; struct S { E *e; int n; };
extern "C" E *func_0014F178(S *s, int k) { for (int i = 0; i < s->n; i++) if (s->e[i].k == k) return &s->e[i]; return 0; }

