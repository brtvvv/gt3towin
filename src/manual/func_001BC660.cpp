struct N { N *next; };
struct E { char p[0x28]; N n; char q[0x34 - 0x2C]; int x34; };
struct L { N *head; };
struct It { N *cur; L *l; It(L *x) : cur(x->head), l(x) {} E *next(N *n) { cur = n ? n->next : 0; return n ? (E *)((char *)n - 0x28) : 0; } };
extern "C" E *func_001BC660(L *l, int k) { It it(l); It *p = &it; E *e; while ((e = p->next(it.cur))) if (e->x34 == k) return e; return 0; }

