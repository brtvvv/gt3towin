struct N { N *next; char *key; int val; };
struct H { N *b[15]; N *fr; };
extern "C" unsigned func_0023E4D0(char *); extern "C" int func_0027FC78(char *, char *);
extern "C" int func_0023E2D8(H *h, char *key, int val) { unsigned k = func_0023E4D0(key) % 15; N *prev = 0; N *p = h->b[k]; while (p) { if (!func_0027FC78(p->key, key)) { p->val = val; return 0; } prev = p; p = prev->next; } N *n = h->fr; h->fr = n->next; n->key = key; n->val = val; n->next = 0; if (!prev) h->b[k] = n; else prev->next = n; return 1; }

