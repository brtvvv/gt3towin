struct N { N *next; };
struct E { char p[0x38]; float x38, x3C; char r[0x100 - 0x40]; N n; };
struct L { N *head; };
struct It { N *cur; L *l; It(L *x) : cur(x->head), l(x) {} E *next(N *n) { cur = n ? n->next : 0; return n ? (E *)((char *)n - 0x100) : 0; } };
struct T { char p[0xB0]; L l; char q[0xF4 - 0xB4]; float xF4; };
extern "C" int func_0023D4B8(L *);
extern "C" float func_001CA720(T *t) { float s = 0.0f; It it(&t->l); It *p = &it; E *e; while ((e = p->next(it.cur))) s += e->x38; return s + t->xF4 * (func_0023D4B8(&t->l) - 1); }

