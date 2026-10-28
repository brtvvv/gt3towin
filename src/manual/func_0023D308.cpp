struct N { N *next; N *prev; };
struct L { N *head; N *tail; };
extern "C" L *func_0023D308(L *l, N *n) { if (!n) return l; if (n == l->head) l->head = n->next; if (n == l->tail) l->tail = n->prev; if (n->next) n->next->prev = n->prev; if (n->prev) n->prev->next = n->next; n->next = 0; n->prev = 0; return l; }
