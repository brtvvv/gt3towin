struct N { N *next; }; struct S { char p[0xC]; N *free; int n, used; }; extern "C" void func_0022DB58(S *s, N *n) { n->next = s->free; s->used++; s->n--; s->free = n; }
