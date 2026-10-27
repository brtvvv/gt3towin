struct N { N *next; }; struct L { N *head; }; extern "C" int func_0023D528(L *l, N *x) { int i = 0; for (N *p = l->head; p; p = p->next, i++) if (p == x) return i; return -1; }
