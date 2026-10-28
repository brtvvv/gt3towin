struct N { N *next; N *prev; void *vt; };
extern char D_00345438[];
extern "C" void func_0027D2F8(N *);
extern "C" void func_0023D140(N *n, int flag) { n->vt = D_00345438; if (n->next) n->next->prev = n->prev; if (n->prev) n->prev->next = n->next; n->next = 0; n->prev = 0; if (flag & 1) func_0027D2F8(n); }

