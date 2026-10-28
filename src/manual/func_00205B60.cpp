struct S { char p[0x184]; int n; };
struct A { char p[0x38]; int x; };
struct Bq { char p[0x38]; float a; float b; };
extern "C" float func_00190930(int);
extern "C" float func_00205B60(S *s, A *a, Bq *b) { if (s->n < 0) return b->a; float base = b->b; float k = func_00190930(a->x); return base + (float)s->n * k; }

