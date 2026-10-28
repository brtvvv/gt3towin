struct S { char p[8]; int sz; char q[4]; int fd; char m[0x44]; int res; };
struct R { int a; int n; char p[4]; char *buf; };
extern "C" int func_00240AC8(int, char *, char *, int, int), func_00241AB8(int);
extern "C" R *func_0014F240(S *s, R *r, int k) { s->res = func_00240AC8(s->fd, s->m, r->buf, k * s->sz, s->sz); int n = func_00241AB8(s->fd); if (!n || s->res) return 0; r->n = n; r->a = k; return r; }
