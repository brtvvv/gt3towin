struct N { N *next; };
struct E { char p[0x34]; int x34; float x38, x3C; char r[0x100 - 0x40]; N n; char s[0x130 - 0x104]; int x130; };
struct L { N *head; };
struct It { N *cur; L *l; It(L *x) : cur(x->head), l(x) {} E *next(N *n) { cur = n ? n->next : 0; return n ? (E *)((char *)n - 0x100) : 0; } };
struct T { char p[0xB0]; L l; char q[0xD0 - 0xB4]; int xD0; char r[0xE8 - 0xD4]; int xE8; char s[0xF4 - 0xEC]; float xF4; };
extern "C" E *func_001CA668(T *t) { if (t->xE8) return 0; int i = 0; It it(&t->l); It *p = &it; E *e; while ((e = p->next(it.cur))) { if (i == t->xD0) return e; i++; } return 0; }

