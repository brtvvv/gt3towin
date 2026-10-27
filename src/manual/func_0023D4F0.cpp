struct N { N *next; }; extern "C" int func_0023D4F0(N **l, N *x) { int n = 0; for (N *p = *l; p; p = p->next) if (p == x) n++; return n; }
