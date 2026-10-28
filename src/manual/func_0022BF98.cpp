struct E { char p[8]; };
struct S { char p[8]; unsigned b; unsigned n; char q[4]; E e[1]; };
extern "C" void func_0022BF08(E *, int, int);
extern "C" void func_0022BF98(S *s) { long d = (long)s - (long)(unsigned long)s->b; s->b = (unsigned)s; for (unsigned i = 0; i < s->n; i++) func_0022BF08(&s->e[i], d, 0); }
