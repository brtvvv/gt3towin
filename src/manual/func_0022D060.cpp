struct S { int x0, x4, x8; int xC; int x10; };
struct V { char p[0x10]; short d; short pad; void (*f)(void *); };
struct T { int x0; char *x4; int x8; int xC; int x10; int x14; int p18; V *v; };
extern "C" void func_00269868(S *, int); extern "C" void func_00269578(S *, int); extern "C" void *func_0027EBC8(void *, void *, int); extern "C" void func_0026D5B8(S *);
extern "C" void func_0022D060(T *t, S *s, int f) { int n, k; if (!f) { func_00269868(s, t->x10); n = s->x8; k = s->x10; func_0027EBC8(t->x4, s, n); func_00269868((S *)t->x4, t->x10); } else { func_00269578(s, t->x10); n = s->x8; k = s->x10; func_0027EBC8(t->x4, s, n); func_00269578((S *)t->x4, t->x10); } t->x8 = n; t->x14 = k; func_0026D5B8(s); t->v->f((char *)t + t->v->d); }

