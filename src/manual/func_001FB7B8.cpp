struct G { char p[0xE384]; int n; };
struct E { char p[0x4F0]; };
struct S { G *g; int n; char p[4]; E e[1]; };
extern "C" void func_001FC020(E *, E *, int);
extern "C" void func_001FB7B8(S *s) { s->n = s->g->n; for (int i = 0; i < s->n; i++) func_001FC020(&s->e[i], s->e, s->n); }
