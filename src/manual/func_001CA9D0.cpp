struct N { N *next; };
struct E { char p[0x34]; int x34; float x38, x3C; char r[0x100 - 0x40]; N n; char s[0x130 - 0x104]; int x130; };
struct L { N *head; };
struct It { N *cur; L *l; It(L *x) : cur(x->head), l(x) {} E *next(N *n) { cur = n ? n->next : 0; return n ? (E *)((char *)n - 0x100) : 0; } };
struct T { char p[0xB0]; L l; char q[0xD0 - 0xB4]; int xD0; char r[0xE8 - 0xD4]; int xE8; char s[0xF4 - 0xEC]; float xF4; };
extern "C" float func_001CA9D0(T *t) { float s = 0.0f; It it(&t->l); It *p = &it; E *e; while ((e = p->next(it.cur)) && !e->x130); It *q = &it; while ((e = q->next(it.cur))) { s += e->x3C; s += t->xF4; } return s; }

