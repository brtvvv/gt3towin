struct N { N *next; };
struct E { char p[0x28]; N n; char q[0x34 - 0x2C]; int x34; };
struct L { N *head; };
struct It { N *cur; L *l; It(L *x) : cur(x->head), l(x) {} E *next(N *n) { cur = n ? n->next : 0; return n ? (E *)((char *)n - 0x28) : 0; } };
struct T { char p[0xB0]; L l; };
extern "C" void func_0023D3F0(L *, N *);
extern "C" void func_001BC738(T *t, int k) { It it(&t->l); It *p = &it; E *e; while ((e = p->next(it.cur))) if (e->x34 == k) { func_0023D3F0(&t->l, &e->n); return; } }

