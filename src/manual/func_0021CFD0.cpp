struct B { char *p; int n; int pad[2]; };
struct T { char *x0; int x4; };
extern "C" void *func_0027ED70(void *, int, int); extern "C" void *func_0027EBC8(void *, void *, int); extern "C" void func_0021CAF8(T *, B *, B *, B *); extern "C" void func_0021C7B0(B *);
extern "C" void func_0021CFD0(T *t) { char nl = 10; B a, b, c; int n = t->x4; a.n = n; b.n = n; c.n = n; a.p = (char *)__builtin_alloca(n); b.p = (char *)__builtin_alloca(n); c.p = (char *)__builtin_alloca(n); func_0027ED70(b.p, 0, n); b.p[0] = nl; b.p[1] = 0; b.p[2] = 0; b.p[3] = 0; func_0027EBC8(a.p, t->x0, a.n); func_0021CAF8(t, &a, &b, &c); func_0021C7B0(&c); }

