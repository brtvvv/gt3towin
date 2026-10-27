struct N { char p[0x10]; N *next; int id; };
struct B { char p[0x14]; N *head; };
struct A { char p[0x18]; B *b; };
struct K { int a; int id; };
extern "C" int func_00175650(K *k, A *a) { int i = 0; for (N *n = a->b->head; n; n = n->next, i++) if (n->id == k->id) return i; return -1; }

