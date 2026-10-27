struct N { N *next; }; extern "C" void func_0023D308(void *, N *);
extern "C" void func_0023D3A8(void *a, N *n) { if (n) { func_0023D3A8(a, n->next); func_0023D308(a, n); } }

