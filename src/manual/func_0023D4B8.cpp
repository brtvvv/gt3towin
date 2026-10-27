struct N { N *next; }; extern "C" int func_0023D4B8(N **l) { int n = 0; for (N *p = *l; p; p = p->next) n++; return n; }
