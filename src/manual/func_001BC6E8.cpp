struct N { N *next; };
struct E { char p[8]; int x8; char q[0x28 - 0xC]; N n; };
struct L { N *head; };
struct It { N *cur; L *l; It(L *x) : cur(x->head), l(x) {} E *next(N *n) { cur = n ? n->next : 0; return n ? (E *)((char *)n - 0x28) : 0; } };
struct T { char p[0xB0]; L l; };
extern "C" void func_001BC6E8(T *t) { It it(&t->l); It *p = &it; E *e; while ((e = p->next(it.cur))) e->x8 = 0; }

